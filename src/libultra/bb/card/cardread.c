#include "ultra64.h"
#include "sa1.h"
#include "macros.h"
#include "include_asm.h"


INCLUDE_ASM("asm/nonmatchings/libultra/bb/card/cardread", read_page);

INCLUDE_ASM("asm/nonmatchings/libultra/bb/card/cardread", osBbCardReadBlock);
