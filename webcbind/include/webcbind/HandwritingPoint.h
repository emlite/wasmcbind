#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingPoint */
DECLARE_EMLITE_TYPE(HandwritingPoint, em_Val);

/** @brief Getter of the x property */
double HandwritingPoint_x(const HandwritingPoint *self);

/** @brief Setter of the x property */
void HandwritingPoint_set_x(HandwritingPoint* self, double value);

/** @brief Getter of the y property */
double HandwritingPoint_y(const HandwritingPoint *self);

/** @brief Setter of the y property */
void HandwritingPoint_set_y(HandwritingPoint* self, double value);

/** @brief Getter of the t property */
jb_Any HandwritingPoint_t(const HandwritingPoint *self);

/** @brief Setter of the t property */
void HandwritingPoint_set_t(HandwritingPoint* self, jb_Any * value);

/** @brief Constructor of the HandwritingPoint dictionary type */
HandwritingPoint HandwritingPoint_new();

#ifdef __cplusplus
}
#endif
