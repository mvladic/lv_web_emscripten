#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void flowInit();
void flowTick();
void flowOnPageLoaded(unsigned pageIndex);
void flowPropagateValue(unsigned pageIndex, unsigned componentIndex, unsigned outputIndex);

const char *evalTextProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage);
int32_t evalIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage);

void assignIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, int32_t value, const char *errorMessage);


#ifdef __cplusplus
}
#endif
