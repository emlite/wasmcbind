#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AttributionAggregationService */
DECLARE_EMLITE_TYPE(AttributionAggregationService, em_Val);

/** @brief Getter of the protocol property */
jb_String AttributionAggregationService_protocol(const AttributionAggregationService *self);

/** @brief Setter of the protocol property */
void AttributionAggregationService_set_protocol(AttributionAggregationService* self, jb_String * value);

/** @brief Constructor of the AttributionAggregationService dictionary type */
AttributionAggregationService AttributionAggregationService_new();

#ifdef __cplusplus
}
#endif
