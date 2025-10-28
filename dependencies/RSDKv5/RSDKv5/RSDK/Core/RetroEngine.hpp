#ifndef RETROENGINE_H
#define RETROENGINE_H

// ================
// STANDARD LIBS
// ================
#include <stdio.h>
#include <cstdio> // C++ version of stdio.h
#include <string.h>
#include <cmath>
#include <ctime>

#if defined(__PS3__)
#include <cstdio>  // For ::snprintf
#include <cstdlib> // For strtol, strtod
#include <string>  // For std::string 
#include <stdarg.h> // For va_list
// vector and algorithm might be needed if more helpers are moved here later.

// Attempt to explicitly declare snprintf for PS3 if standard headers aren't sufficient for C++ linkage
// This assumes it exists in the C library (Newlib for ps3toolchain) with this signature.
extern "C" int snprintf(char* str, size_t size, const char* format, ...);
// Add vsnprintf declaration as well
extern "C" int vsnprintf(char* str, size_t size, const char* format, va_list ap);

// PS3-Compatible Number-to-String Helpers (moved from ModAPI.cpp)
static inline std::string PS3_ToString(int val) {
    char buffer[32];
    int len = ::snprintf(buffer, sizeof(buffer), "%d", val);
    if (len >= 0 && len < (int)sizeof(buffer)) {
        return std::string(buffer, len);
    }
    return std::string(); 
}

static inline std::string PS3_ToString(float val) {
    char buffer[64];
    int len = ::snprintf(buffer, sizeof(buffer), "%.6g", val);
    if (len >= 0 && len < (int)sizeof(buffer)) {
        return std::string(buffer, len);
    }
    return std::string();
}

static inline std::string PS3_ToString(size_t val) {
    char buffer[32]; 
    int len = ::snprintf(buffer, sizeof(buffer), "%lu", (unsigned long)val);
    if (len >= 0 && len < (int)sizeof(buffer)) {
        return std::string(buffer, len);
    }
    return std::string();
}

// PS3-Compatible String-to-Number Helpers (moved from ModAPI.cpp)
static inline long PS3_Stol(const std::string& str, size_t* idx = nullptr, int base = 10) {
    const char* c_str = str.c_str();
    char* end_ptr = nullptr;
    long val = strtol(c_str, &end_ptr, base);
    if (idx != nullptr) {
        *idx = end_ptr - c_str;
    }
    return val;
}

static inline int PS3_Stoi(const std::string& str, size_t* idx = nullptr, int base = 10) {
    return static_cast<int>(PS3_Stol(str, idx, base));
}

static inline double PS3_Stod(const std::string& str, size_t* idx = nullptr) {
    const char* c_str = str.c_str();
    char* end_ptr = nullptr;
    double val = strtod(c_str, &end_ptr);
    if (idx != nullptr) {
        *idx = end_ptr - c_str;
    }
    return val;
}

static inline float PS3_Stof(const std::string& str, size_t* idx = nullptr) {
    return static_cast<float>(PS3_Stod(str, idx));
}

#define RSDK_USE_PS3_STRING_CONVERSIONS 1 // Signal that we are using our custom versions

// Undefine std versions if they are macros (unlikely for these, but good practice)
#undef to_string
#undef stoi
#undef stol
#undef stof
#undef stod

// Define std::to_string, std::stoi etc. to be our PS3 versions *within this block*
// This technique avoids needing to #ifdef every call site.
namespace std {
    inline std::string to_string(int val) { return ::PS3_ToString(val); }
    inline std::string to_string(float val) { return ::PS3_ToString(val); }
    inline std::string to_string(size_t val) { return ::PS3_ToString(val); }
    // Add other overloads if they become necessary based on compiler errors (e.g., long, unsigned long)

    inline int stoi(const std::string& str, size_t* idx = nullptr, int base = 10) { return ::PS3_Stoi(str, idx, base); }
    inline long stol(const std::string& str, size_t* idx = nullptr, int base = 10) { return ::PS3_Stol(str, idx, base); }
    inline float stof(const std::string& str, size_t* idx = nullptr) { return ::PS3_Stof(str, idx); }
    inline double stod(const std::string& str, size_t* idx = nullptr) { return ::PS3_Stod(str, idx); }
} // namespace std (override for PS3 block)

#endif // __PS3__

// ================
// STANDARD TYPES
// ================
typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef signed long long int64;
typedef unsigned long long uint64;

typedef uint32 bool32;
typedef uint32 color;

namespace RSDK
{

enum GamePlatforms {
    PLATFORM_PC,
    PLATFORM_PS4,
    PLATFORM_XB1,
    PLATFORM_SWITCH,

    PLATFORM_DEV = 0xFF,
};

enum GameLanguages {
    LANGUAGE_EN,
    LANGUAGE_FR,
    LANGUAGE_IT,
    LANGUAGE_GE,
    LANGUAGE_SP,
    LANGUAGE_JP,
    LANGUAGE_KO,
    LANGUAGE_SC,
    LANGUAGE_TC,
};

enum GameRegions {
    REGION_US,
    REGION_JP,
    REGION_EU,
};

} // namespace RSDK

// =================
// INTELLISENSE HACKS (hopefully rdc doesn't kill me)
// =================

#ifdef _INTELLISENSE_NX
#undef __unix__
#undef __linux__
#endif

#ifdef _INTELLISENSE_ANDROID
#undef _WIN32
#undef _LIBCPP_MSVCRT_LIKE
#endif

#ifndef RETRO_USE_ORIGINAL_CODE
#define RETRO_USE_ORIGINAL_CODE (0)
#endif

#ifndef RETRO_STANDALONE
#define RETRO_STANDALONE (1)
#endif

// ============================
// PLATFORMS
// ============================
#define RETRO_WIN    (0)
#define RETRO_PS4    (1)
#define RETRO_XB1    (2)
#define RETRO_SWITCH (3)
// CUSTOM
#define RETRO_OSX     (4)
#define RETRO_LINUX   (5)
#define RETRO_iOS     (6)
#define RETRO_ANDROID (7)
#define RETRO_UWP     (8)
#define RETRO_PS3     (9)

// ============================
// PLATFORMS (used mostly in legacy but could come in handy here)
// ============================
#define RETRO_STANDARD (0)
#define RETRO_MOBILE   (1)

// Secure sprintf_s definition
#if defined _WIN32
    // Windows has its own sprintf_s, so we don't need a macro.
    // If it were defined by a general macro above, we would #undef sprintf_s here.
    // Assuming a general definition might exist, let's ensure it's cleared for _WIN32 if it was defined.
    #ifdef sprintf_s
    #undef sprintf_s
    #endif
#elif defined __PS3__
    // For PS3, use ::snprintf. The second argument to this macro will be the buffer size.
    #ifdef sprintf_s
    #undef sprintf_s
    #endif
    #define sprintf_s(buffer, size, format, ...) ::snprintf(buffer, size, format, ##__VA_ARGS__)
#else
    // Default for other platforms (like Linux, macOS if not using WIN32 or PS3 specific)
    // The second argument to this macro will be the buffer size.
    #ifdef sprintf_s
    #undef sprintf_s
    #endif
    #define sprintf_s(buffer, size, format, ...) snprintf(buffer, size, format, ##__VA_ARGS__)
#endif

#if defined _WIN32
// (No #undef sprintf_s here anymore, it's handled above)
#if defined WINAPI_FAMILY
#if WINAPI_FAMILY != WINAPI_FAMILY_APP
#define RETRO_PLATFORM   (RETRO_WIN)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#else
#define RETRO_PLATFORM   (RETRO_UWP)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#endif
#else
#define RETRO_PLATFORM   (RETRO_WIN)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#endif

#elif defined __APPLE__
#define RETRO_USING_MOUSE
#define RETRO_USING_TOUCH
#include <TargetConditionals.h>

#if TARGET_IPHONE_SIMULATOR
#define RETRO_PLATFORM   (RETRO_iOS)
#define RETRO_DEVICETYPE (RETRO_MOBILE)
#elif TARGET_OS_IPHONE
#define RETRO_PLATFORM   (RETRO_iOS)
#define RETRO_DEVICETYPE (RETRO_MOBILE)
#elif TARGET_OS_MAC
#define RETRO_PLATFORM   (RETRO_OSX)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#else
#error "Unknown Apple platform"
#endif
#elif defined __ANDROID__
#define RETRO_PLATFORM   (RETRO_ANDROID)
#define RETRO_DEVICETYPE (RETRO_MOBILE)
#elif defined __SWITCH__
#define RETRO_PLATFORM   (RETRO_SWITCH)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#elif defined __linux__
#define RETRO_PLATFORM   (RETRO_LINUX)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#elif defined __PS3__
#define RETRO_PLATFORM   (RETRO_PS3)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#else
#define RETRO_PLATFORM   (RETRO_WIN)
#define RETRO_DEVICETYPE (RETRO_STANDARD)
#endif

#ifndef SCREEN_XMAX
#define SCREEN_XMAX (1280)
#endif

#ifndef SCREEN_YSIZE
#define SCREEN_YSIZE (240)
#endif

#define SCREEN_CENTERY (SCREEN_YSIZE / 2)

// ============================
// Log file path
// ============================
#ifndef BASE_PATH
#if RETRO_PLATFORM == RETRO_PS3
#define BASE_PATH "/dev_usb000/"
#endif
#endif

// ============================
// RENDER DEVICE BACKENDS
// ============================
#define RETRO_RENDERDEVICE_DIRECTX9  (0)
#define RETRO_RENDERDEVICE_DIRECTX11 (0)
// CUSTOM
#define RETRO_RENDERDEVICE_SDL2 (0)
#define RETRO_RENDERDEVICE_GLFW (0)
#define RETRO_RENDERDEVICE_VK   (0)
#define RETRO_RENDERDEVICE_EGL  (0)

// ============================
// AUDIO DEVICE BACKENDS
// ============================
#define RETRO_AUDIODEVICE_XAUDIO (0)
// CUSTOM
#ifndef RETRO_AUDIODEVICE_SDL2
#define RETRO_AUDIODEVICE_SDL2 (0)
#endif
#define RETRO_AUDIODEVICE_OBOE (0)
#ifndef RETRO_AUDIODEVICE_PORT
#define RETRO_AUDIODEVICE_PORT (0)
#endif
#ifndef RETRO_AUDIODEVICE_MINI
#define RETRO_AUDIODEVICE_MINI (0)
#endif

// ============================
// INPUT DEVICE BACKENDS
// ============================
#define RETRO_INPUTDEVICE_KEYBOARD (1)
#define RETRO_INPUTDEVICE_XINPUT   (0)
#define RETRO_INPUTDEVICE_RAWINPUT (0)
#define RETRO_INPUTDEVICE_STEAM    (0)
#define RETRO_INPUTDEVICE_NX       (0)
// CUSTOM
#define RETRO_INPUTDEVICE_SDL2   (0)
#define RETRO_INPUTDEVICE_GLFW   (0)
#define RETRO_INPUTDEVICE_PDBOAT (0)

// ============================
// USER CORE BACKENDS
// ============================
#define RETRO_USERCORE_ID (0)

#define RETRO_USERCORE_DUMMY (!(RETRO_USERCORE_ID & 0x80)) // bit 7 disables the dummy core stuff if you ever need that for some odd reason
#define RETRO_USERCORE_STEAM (RETRO_USERCORE_ID == 1)
#define RETRO_USERCORE_PS4   (RETRO_USERCORE_ID == 2)
#define RETRO_USERCORE_XB1   (RETRO_USERCORE_ID == 3)
#define RETRO_USERCORE_NX    (RETRO_USERCORE_ID == 4)
#define RETRO_USERCORE_EOS   (RETRO_USERCORE_ID == 5)

// ============================
// ENGINE CONFIG
// ============================

// Determines if the engine is RSDKv5 rev01 (all versions of mania pre-plus), rev02 (all versions of mania post-plus) or RSDKv5U (sonic origins)
#ifndef RETRO_REVISION
#define RETRO_REVISION (3)
#endif

// RSDKv5 Rev02 (Used prior to Sonic Mania Plus)
#define RETRO_REV01 (RETRO_REVISION >= 1)

// RSDKv5 Rev02 (Used in Sonic Mania Plus)
#define RETRO_REV02 (RETRO_REVISION >= 2)

// RSDKv5U (Used in Sonic Origins)
#define RETRO_REV0U (RETRO_REVISION >= 3)

// Determines if the engine should use EGS features like achievements or not (must be rev02)
#define RETRO_VER_EGS (RETRO_REV02 && 0)

// Enables only EGS's ingame achievements popup without enabling anything else
#define RETRO_USE_DUMMY_ACHIEVEMENTS (RETRO_REV02 && 1)

// Forces all DLC flags to be disabled, this should be enabled in any public releases
#ifndef RSDK_AUTOBUILD
#define RSDK_AUTOBUILD (0)
#endif

// Enables the use of the mod loader
#ifndef RETRO_USE_MOD_LOADER
#define RETRO_USE_MOD_LOADER (!RETRO_USE_ORIGINAL_CODE && 1)
#endif

// Defines the version of the mod loader, this should be changed ONLY if the ModFunctionTable is updated in any way
#ifndef RETRO_MOD_LOADER_VER
#define RETRO_MOD_LOADER_VER (2)
#endif

// ============================
// PLATFORM INIT
// ============================

#if RETRO_PLATFORM == RETRO_WIN

#ifdef RSDK_USE_SDL2
#undef RETRO_RENDERDEVICE_SDL2
#define RETRO_RENDERDEVICE_SDL2 (1)

#undef RETRO_INPUTDEVICE_SDL2
#define RETRO_INPUTDEVICE_SDL2 (1)

#elif defined(RSDK_USE_DX9)
#undef RETRO_RENDERDEVICE_DIRECTX9
#define RETRO_RENDERDEVICE_DIRECTX9 (1)

#undef RETRO_INPUTDEVICE_XINPUT
#define RETRO_INPUTDEVICE_XINPUT (1)

#undef RETRO_INPUTDEVICE_RAWINPUT
#define RETRO_INPUTDEVICE_RAWINPUT (1)

#elif defined(RSDK_USE_DX11)
#undef RETRO_RENDERDEVICE_DIRECTX11
#define RETRO_RENDERDEVICE_DIRECTX11 (1)

#undef RETRO_INPUTDEVICE_XINPUT
#define RETRO_INPUTDEVICE_XINPUT (1)

#undef RETRO_INPUTDEVICE_RAWINPUT
#define RETRO_INPUTDEVICE_RAWINPUT (1)

#elif defined(RSDK_USE_OGL)
#undef RETRO_RENDERDEVICE_GLFW
#define RETRO_RENDERDEVICE_GLFW (1)

#undef RETRO_INPUTDEVICE_GLFW
#define RETRO_INPUTDEVICE_GLFW (1)

#elif defined(RSDK_USE_VK)
#undef RETRO_RENDERDEVICE_VK
#define RETRO_RENDERDEVICE_VK (1)

#if defined(VULKAN_USE_GLFW)
#undef RETRO_INPUTDEVICE_GLFW
#define RETRO_INPUTDEVICE_GLFW (1)
#endif

#else
#error One of RSDK_USE_DX9, RSDK_USE_DX11, RSDK_USE_SDL2, or RSDK_USE_OGL must be defined.
#endif

#if !RETRO_AUDIODEVICE_MINI
#if !RSDK_USE_SDL2
#undef RETRO_AUDIODEVICE_XAUDIO
#define RETRO_AUDIODEVICE_XAUDIO (1)
#else
#undef RETRO_AUDIODEVICE_SDL2
#define RETRO_AUDIODEVICE_SDL2 (1)
#endif
#endif

#elif RETRO_PLATFORM == RETRO_XB1

#undef RETRO_RENDERDEVICE_DIRECTX11
#define RETRO_RENDERDEVICE_DIRECTX11 (1)

#undef RETRO_AUDIODEVICE_XAUDIO
#define RETRO_AUDIODEVICE_XAUDIO (1)

#undef RETRO_INPUTDEVICE_XINPUT
#define RETRO_INPUTDEVICE_XINPUT (1)

#elif RETRO_PLATFORM == RETRO_LINUX

#if !RETRO_AUDIODEVICE_SDL2
#undef RETRO_AUDIODEVICE_MINI
#define RETRO_AUDIODEVICE_MINI (1)
#endif

#ifdef RSDK_USE_SDL2
#undef RETRO_RENDERDEVICE_SDL2
#define RETRO_RENDERDEVICE_SDL2 (1)
#undef RETRO_INPUTDEVICE_SDL2
#define RETRO_INPUTDEVICE_SDL2 (1)

#undef RETRO_AUDIODEVICE_MINI
#define RETRO_AUDIODEVICE_MINI (0)
#undef RETRO_AUDIODEVICE_SDL2
#define RETRO_AUDIODEVICE_SDL2 (1)

#elif defined(RSDK_USE_OGL)
#undef RETRO_RENDERDEVICE_GLFW
#define RETRO_RENDERDEVICE_GLFW (1)
#undef RETRO_INPUTDEVICE_GLFW
#define RETRO_INPUTDEVICE_GLFW (1)

#elif defined(RSDK_USE_VK)
#undef RETRO_RENDERDEVICE_VK
#define RETRO_RENDERDEVICE_VK (1)

#if defined(VULKAN_USE_GLFW)
#undef RETRO_INPUTDEVICE_GLFW
#define RETRO_INPUTDEVICE_GLFW (1)
#endif

#else
#error RSDK_USE_SDL2, RSDK_USE_OGL or RSDK_USE_VK must be defined.
#endif //! RSDK_USE_SDL2

#elif RETRO_PLATFORM == RETRO_SWITCH
// #undef RETRO_USERCORE_ID
// #define RETRO_USERCORE_ID (4)
// #define RETRO_USERCORE_ID (4 | 0x80)

#ifdef RSDK_USE_SDL2
#undef RETRO_RENDERDEVICE_SDL2
#define RETRO_RENDERDEVICE_SDL2 (1)
#undef RETRO_AUDIODEVICE_SDL2
#define RETRO_AUDIODEVICE_SDL2 (1)
#undef RETRO_INPUTDEVICE_SDL2
#define RETRO_INPUTDEVICE_SDL2 (1)

#elif defined(RSDK_USE_OGL)
#undef RETRO_RENDERDEVICE_EGL
#define RETRO_RENDERDEVICE_EGL (1)
#undef RETRO_INPUTDEVICE_NX
#define RETRO_INPUTDEVICE_NX (1)
#undef RETRO_AUDIODEVICE_SDL2
#define RETRO_AUDIODEVICE_SDL2 (1)

#else
#error RSDK_USE_SDL2 or RSDK_USE_OGL must be defined.
#endif //! RSDK_USE_SDL2

#undef RETRO_INPUTDEVICE_KEYBOARD
#define RETRO_INPUTDEVICE_KEYBOARD (0)
#undef RETRO_USING_MOUSE

#elif RETRO_PLATFORM == RETRO_ANDROID

#if defined RSDK_USE_OGL
#undef RETRO_RENDERDEVICE_EGL
#define RETRO_RENDERDEVICE_EGL (1)
#undef RETRO_INPUTDEVICE_PDBOAT
#define RETRO_INPUTDEVICE_PDBOAT (1)
#undef RETRO_AUDIODEVICE_OBOE
#define RETRO_AUDIODEVICE_OBOE (1)
#else
#error RSDK_USE_OGL must be defined.
#endif

#elif RETRO_PLATFORM == RETRO_OSX || RETRO_PLATFORM == RETRO_iOS || RETRO_PLATFORM == RETRO_PS3

#undef RETRO_RENDERDEVICE_SDL2
#define RETRO_RENDERDEVICE_SDL2 (1)

#undef RETRO_AUDIODEVICE_SDL2
#define RETRO_AUDIODEVICE_SDL2 (1)

#undef RETRO_INPUTDEVICE_SDL2
#define RETRO_INPUTDEVICE_SDL2 (1)

#endif

#if RETRO_PLATFORM == RETRO_WIN || RETRO_PLATFORM == RETRO_UWP

// All windows systems need windows API for LoadLibrary()
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#if RETRO_AUDIODEVICE_XAUDIO
#include <XAudio2.h>
#elif RETRO_AUDIODEVICE_PORT
#include <portaudio.h>
#elif RETRO_AUDIODEVICE_MINI
#define MA_NO_DECODING
#define MA_NO_ENCODING
#define MA_NO_RESOURCE_MANAGER 
#define MA_NO_ENGINE
#include <miniaudio/miniaudio.h>
#endif

#if RETRO_INPUTDEVICE_XINPUT
#include <Xinput.h>
#endif

#if RETRO_RENDERDEVICE_DIRECTX9 || RETRO_RENDERDEVICE_DIRECTX11
#include <timeapi.h>
#include <commctrl.h>
#include <dbt.h>

#include <string>

#if RETRO_RENDERDEVICE_DIRECTX9
#include <d3d9.h>
#elif RETRO_RENDERDEVICE_DIRECTX11
#include <d3d11_1.h>
#endif

#undef LoadImage
#elif RETRO_RENDERDEVICE_GLFW
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#elif RETRO_RENDERDEVICE_VK

#ifdef VULKAN_USE_GLFW
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#endif

#endif

#endif // ! RETRO_WIN

#if RETRO_PLATFORM == RETRO_OSX

#include "cocoaHelpers.hpp"
#elif RETRO_PLATFORM == RETRO_iOS

#include "cocoaHelpers.hpp"
#elif RETRO_PLATFORM == RETRO_LINUX || RETRO_PLATFORM == RETRO_SWITCH

#if RETRO_AUDIODEVICE_PORT
#include <portaudio.h>
#elif RETRO_AUDIODEVICE_MINI
#define MA_NO_DECODING
#define MA_NO_ENCODING
#define MA_NO_RESOURCE_MANAGER 
#define MA_NO_ENGINE
#include <miniaudio/miniaudio.h>
#endif

#if RETRO_RENDERDEVICE_GLFW
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#elif RETRO_RENDERDEVICE_EGL
#include <glad/glad.h>
#include <EGL/egl.h>    // EGL library
#include <EGL/eglext.h> // EGL extensions

#elif RETRO_RENDERDEVICE_VK
#if RETRO_PLATFORM == RETRO_LINUX

#ifdef VULKAN_USE_GLFW
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#endif

#endif
#endif

#if RETRO_PLATFORM == RETRO_SWITCH
#define PrintConsole _PrintConsole
#include <switch.h>
extern "C" {
#include <dyn.h>
}
#undef PrintConsole
#endif

#elif RETRO_PLATFORM == RETRO_ANDROID

#if RETRO_RENDERDEVICE_EGL
#include <EGL/egl.h> // EGL library
#include <GLES2/gl2.h>
#endif

#include <androidHelpers.hpp>

#undef RETRO_USING_MOUSE
#endif

#if RETRO_RENDERDEVICE_SDL2 || RETRO_INPUTDEVICE_SDL2 || RETRO_AUDIODEVICE_SDL2
#if RETRO_PLATFORM == RETRO_OSX || RETRO_PLATFORM == RETRO_PS3
// yeah, I dunno how you're meant to do the below with macOS/PlayStation 3 frameworks so leaving this as is for rn :P
#include <SDL2/SDL.h>
#else
// This is the way of including SDL that is recommended by the devs themselves:
// https://wiki.libsdl.org/FAQDevelopment#do_i_include_sdl.h_or_sdlsdl.h
#include "SDL.h"
#endif
#endif

#include <theora/theoradec.h>

// ============================
// ENGINE INCLUDES
// ============================

#include "RSDK/Storage/Storage.hpp"
#include "RSDK/Core/Math.hpp"
#include "RSDK/Storage/Text.hpp"
#include "RSDK/Core/Reader.hpp"
#include "RSDK/Graphics/Animation.hpp"
#include "RSDK/Audio/Audio.hpp"
#include "RSDK/Input/Input.hpp"
#include "RSDK/Scene/Object.hpp"
#include "RSDK/Graphics/Palette.hpp"
#include "RSDK/Graphics/Drawing.hpp"
#include "RSDK/Graphics/Scene3D.hpp"
#include "RSDK/Scene/Scene.hpp"
#include "RSDK/Scene/Collision.hpp"
#include "RSDK/Graphics/Sprite.hpp"
#include "RSDK/Graphics/Video.hpp"
#include "RSDK/Dev/Debug.hpp"
#include "RSDK/User/Core/UserCore.hpp"
#include "RSDK/User/Core/UserAchievements.hpp"
#include "RSDK/User/Core/UserLeaderboards.hpp"
#include "RSDK/User/Core/UserStats.hpp"
#include "RSDK/User/Core/UserPresence.hpp"
#include "RSDK/User/Core/UserStorage.hpp"
#include "RSDK/Core/Link.hpp"
#if RETRO_USE_MOD_LOADER
#include "RSDK/Core/ModAPI.hpp"
#endif

// Default Objects
#include "RSDK/Scene/Objects/DefaultObject.hpp"
#if RETRO_REV02
#include "RSDK/Scene/Objects/DevOutput.hpp"
#endif

#if !RETRO_REV0U
#define ENGINE_VERSION (5)
#define ENGINE_V_NAME  "v5"
#else
#define ENGINE_VERSION (engine.version)
#define ENGINE_V_NAME  "v5U"
#endif

namespace RSDK
{

struct RetroEngine {
    RetroEngine() {}

#if RETRO_STANDALONE
    bool32 useExternalCode = true;
#else
    bool32 useExternalCode = false;
#endif

    bool32 devMenu        = false;
    bool32 consoleEnabled = (RETRO_PLATFORM == RETRO_PS3) ? true : false;

    bool32 confirmFlip = false; // swaps A/B, used for nintendo and etc controllers
    bool32 XYFlip      = false; // swaps X/Y, used for nintendo and etc controllers

    uint8 focusState = 0;
    uint8 inFocus    = 0;
#if !RETRO_USE_ORIGINAL_CODE
    uint8 focusPausedChannel[CHANNEL_COUNT];
#endif

    bool32 initialized = false;
    bool32 hardPause   = false;

#if RETRO_REV0U
    uint8 version = 5; // determines what RSDK version to use, default to RSDKv5 since thats the "core" version

    const char *gamePlatform;
    const char *gameRenderType;
    const char *gameHapticSetting;

#if !RETRO_USE_ORIGINAL_CODE
    int32 gameReleaseID     = 0;
    const char *releaseType = "USE_STANDALONE";
#endif
#endif

    int32 storedShaderID      = SHADER_NONE;
    int32 storedState         = ENGINESTATE_LOAD;
    int32 gameSpeed           = 1;
    int32 fastForwardSpeed    = 8;
    bool32 frameStep          = false;
    bool32 showPaletteOverlay = false;
    uint8 showUpdateRanges    = 0;
    uint8 showEntityInfo      = 0;
    bool32 drawGroupVisible[DRAWGROUP_COUNT];

    // Image/Video support
    double displayTime       = 0.0;
    double videoStartDelay   = 0.0;
    double imageFadeSpeed    = 0.0;
    bool32 (*skipCallback)() = NULL;

    bool32 streamsEnabled = true;
    float streamVolume    = 1.0f;
    float soundFXVolume   = 1.0f;
};

extern RetroEngine engine;

#if RETRO_REV02
typedef void (*LogicLinkHandle)(EngineInfo *info);
#else
typedef void (*LogicLinkHandle)(EngineInfo info);
#endif

extern LogicLinkHandle linkGameLogic;

// ============================
// CORE ENGINE FUNCTIONS
// ============================

int32 RunRetroEngine(int32 argc, char *argv[]);
void ProcessEngine();

void ParseArguments(int32 argc, char *argv[]);

void InitEngine();
void StartGameObjects();

#if RETRO_USE_MOD_LOADER
void LoadGameXML(bool pal = false);
void LoadXMLWindowText(const tinyxml2::XMLElement *gameElement);
void LoadXMLPalettes(const tinyxml2::XMLElement *gameElement);
void LoadXMLObjects(const tinyxml2::XMLElement* gameElement);
void LoadXMLSoundFX(const tinyxml2::XMLElement* gameElement);
void LoadXMLStages(const tinyxml2::XMLElement* gameElement);
#endif

void LoadGameConfig();
void InitGameLink();

void ProcessDebugCommands();

inline void SetEngineState(uint8 state)
{
    bool32 stepOver = (sceneInfo.state & ENGINESTATE_STEPOVER) == ENGINESTATE_STEPOVER;
    sceneInfo.state = state;
    if (stepOver)
        sceneInfo.state |= ENGINESTATE_STEPOVER;
}

#if RETRO_REV0U
inline void SetGameFinished() { sceneInfo.state = ENGINESTATE_GAME_FINISHED; }
#endif

extern int32 *globalVarsPtr;

#if RETRO_REV0U
extern void (*globalVarsInitCB)(void *globals);

inline void RegisterGlobalVariables(void **globals, int32 size, void (*initCB)(void *globals))
{
    AllocateStorage(globals, size, DATASET_STG, true);
    globalVarsPtr    = (int32 *)*globals;
    globalVarsInitCB = initCB;
}
#else
inline void RegisterGlobalVariables(void **globals, int32 size)
{
    AllocateStorage(globals, size, DATASET_STG, true);
    globalVarsPtr = (int32 *)*globals;
}
#endif

// Some misc API stuff that needs a home

// Used to Init API stuff that should be done regardless of Render/Audio/Input device APIs
void InitCoreAPI();
void ReleaseCoreAPI();

void InitConsole();
void ReleaseConsole();

void SendQuitMsg();

#if RETRO_REV0U
#include "Legacy/RetroEngineLegacy.hpp"
#endif

} // namespace RSDK

#include "Link.hpp"

#endif //! RETROENGINE_H
