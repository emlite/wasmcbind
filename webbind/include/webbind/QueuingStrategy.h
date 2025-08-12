#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type QueuingStrategy */
DECLARE_EMLITE_TYPE(QueuingStrategy, em_Val);

/** @brief Getter of the highWaterMark property */
double QueuingStrategy_highWaterMark(const QueuingStrategy *self);

/** @brief Setter of the highWaterMark property */
void QueuingStrategy_set_highWaterMark(QueuingStrategy* self, double value);

/** @brief Getter of the size property */
jb_Function QueuingStrategy_size(const QueuingStrategy *self);

/** @brief Setter of the size property */
void QueuingStrategy_set_size(QueuingStrategy* self, jb_Function * value);

/** @brief Constructor of the QueuingStrategy dictionary type */
QueuingStrategy QueuingStrategy_new();

#ifdef __cplusplus
}
#endif
