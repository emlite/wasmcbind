#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AttributionConversionResult, em_Val);

jb_Uint8Array AttributionConversionResult_report(const AttributionConversionResult *self);

void AttributionConversionResult_set_report(AttributionConversionResult* self, jb_Uint8Array * value);

AttributionConversionResult AttributionConversionResult_new();

#ifdef __cplusplus
}
#endif
