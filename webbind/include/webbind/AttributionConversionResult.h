#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AttributionConversionResult */
DECLARE_EMLITE_TYPE(AttributionConversionResult, em_Val);

/** @brief Getter of the report property */
jb_Uint8Array AttributionConversionResult_report(const AttributionConversionResult *self);

/** @brief Setter of the report property */
void AttributionConversionResult_set_report(AttributionConversionResult* self, jb_Uint8Array * value);

/** @brief Constructor of the AttributionConversionResult dictionary type */
AttributionConversionResult AttributionConversionResult_new();

#ifdef __cplusplus
}
#endif
