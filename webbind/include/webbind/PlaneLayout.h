#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PlaneLayout, em_Val);

unsigned long PlaneLayout_offset(const PlaneLayout *self);

void PlaneLayout_set_offset(PlaneLayout* self, unsigned long value);

unsigned long PlaneLayout_stride(const PlaneLayout *self);

void PlaneLayout_set_stride(PlaneLayout* self, unsigned long value);

PlaneLayout PlaneLayout_new();

#ifdef __cplusplus
}
#endif
