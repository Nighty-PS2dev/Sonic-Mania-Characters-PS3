#ifndef PUBLICFUNCTIONS_PARTS_H
#define PUBLICFUNCTIONS_PARTS_H

// Forward declaration for the ModAPI structure or its relevant part
// This is needed because ADD_PUBLIC_FUNC uses 'Mod.AddPublicFunction'
// Assuming 'Mod' is a global or accessible struct/namespace that has AddPublicFunction.
// If 'Mod' is part of a specific struct forward-declare that struct e.g. typedef struct ModAPI ModAPI; extern ModAPI Mod;
// For now, let's assume a simple extern declaration will work or is handled by other includes.
// Consider that the original PublicFunctions.c must have had 'Mod' visible.

void InitPublicFunctions_Part1(void);
void InitPublicFunctions_Part2(void);
void InitPublicFunctions_Part3(void);
void InitPublicFunctions_Part4(void);
void InitPublicFunctions_Part5(void);

#endif // PUBLICFUNCTIONS_PARTS_H
