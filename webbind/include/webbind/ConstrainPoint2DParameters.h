#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConstrainPoint2DParameters */
DECLARE_EMLITE_TYPE(ConstrainPoint2DParameters, em_Val);

/** @brief Getter of the exact property */
jb_Array ConstrainPoint2DParameters_exact(const ConstrainPoint2DParameters *self);

/** @brief Setter of the exact property */
void ConstrainPoint2DParameters_set_exact(ConstrainPoint2DParameters* self, jb_Array * value);

/** @brief Getter of the ideal property */
jb_Array ConstrainPoint2DParameters_ideal(const ConstrainPoint2DParameters *self);

/** @brief Setter of the ideal property */
void ConstrainPoint2DParameters_set_ideal(ConstrainPoint2DParameters* self, jb_Array * value);

/** @brief Constructor of the ConstrainPoint2DParameters dictionary type */
ConstrainPoint2DParameters ConstrainPoint2DParameters_new();

#ifdef __cplusplus
}
#endif
