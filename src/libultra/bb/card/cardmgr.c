#include "ultra64.h"
#include "sa1.h"
#include "macros.h"
#include "include_asm.h"


INCLUDE_ASM("asm/nonmatchings/libultra/bb/card/cardmgr", __osBbCardInitEvent);

INCLUDE_ASM("asm/nonmatchings/libultra/bb/card/cardmgr", __osBbCardFlushEvent);

INCLUDE_ASM("asm/nonmatchings/libultra/bb/card/cardmgr", __osBbCardWaitEvent);
