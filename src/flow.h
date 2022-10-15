#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void flowInit();
void flowTick();
void flowOnPageLoaded(unsigned pageIndex);
void flowPropagateValue(unsigned pageIndex, unsigned componentIndex, unsigned outputIndex);

#ifdef __cplusplus
}
#endif
