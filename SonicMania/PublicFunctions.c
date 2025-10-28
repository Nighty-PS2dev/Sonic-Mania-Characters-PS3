#include "Game.h" // Added to provide RSDK and PRINT_NORMAL definitions
#include "PublicFunctionsParts.h" // Include the new header

// The ADD_PUBLIC_FUNC macro definition can be removed from here as it's in each part.
// #define ADD_PUBLIC_FUNC(func) Mod.AddPublicFunction(#func, (void *)(func))
// If Game.h or All.h doesn't provide Mod and AddPublicFunction, then the parts will need more includes.

void InitPublicFunctions()
{
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions (Dispatcher): Entered.");
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Calling Part1.");
    InitPublicFunctions_Part1();
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Returned from Part1.");
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Calling Part2.");
    InitPublicFunctions_Part2();
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Returned from Part2.");
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Calling Part3.");
    InitPublicFunctions_Part3();
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Returned from Part3.");
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Calling Part4.");
    InitPublicFunctions_Part4();
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Returned from Part4.");
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Calling Part5.");
    InitPublicFunctions_Part5();
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions: Returned from Part5.");
    RSDK.PrintLog(PRINT_NORMAL, "[MOD_FLOW] InitPublicFunctions (Dispatcher): Exiting.");
}
