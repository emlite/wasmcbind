#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AttributionImpressionResult */
DECLARE_EMLITE_TYPE(AttributionImpressionResult, em_Val);

/** @brief Constructor of the AttributionImpressionResult dictionary type */
AttributionImpressionResult AttributionImpressionResult_new();

#ifdef __cplusplus
}
#endif
