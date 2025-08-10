#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConvertCoordinateOptions, em_Val);

CSSBoxType ConvertCoordinateOptions_fromBox(const ConvertCoordinateOptions *self);

void ConvertCoordinateOptions_set_fromBox(ConvertCoordinateOptions* self, CSSBoxType * value);

CSSBoxType ConvertCoordinateOptions_toBox(const ConvertCoordinateOptions *self);

void ConvertCoordinateOptions_set_toBox(ConvertCoordinateOptions* self, CSSBoxType * value);

ConvertCoordinateOptions ConvertCoordinateOptions_new();

#ifdef __cplusplus
}
#endif
