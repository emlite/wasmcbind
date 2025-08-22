#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type QueuingStrategyInit */
DECLARE_EMLITE_TYPE(QueuingStrategyInit, em_Val);

/** @brief Getter of the highWaterMark property */
double QueuingStrategyInit_highWaterMark(const QueuingStrategyInit *self);

/** @brief Setter of the highWaterMark property */
void QueuingStrategyInit_set_highWaterMark(QueuingStrategyInit* self, double value);

/** @brief Constructor of the QueuingStrategyInit dictionary type */
QueuingStrategyInit QueuingStrategyInit_new();

#ifdef __cplusplus
}
#endif
