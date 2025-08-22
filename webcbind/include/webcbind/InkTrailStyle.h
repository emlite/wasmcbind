#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type InkTrailStyle */
DECLARE_EMLITE_TYPE(InkTrailStyle, em_Val);

/** @brief Getter of the color property */
jb_String InkTrailStyle_color(const InkTrailStyle *self);

/** @brief Setter of the color property */
void InkTrailStyle_set_color(InkTrailStyle* self, jb_String * value);

/** @brief Getter of the diameter property */
double InkTrailStyle_diameter(const InkTrailStyle *self);

/** @brief Setter of the diameter property */
void InkTrailStyle_set_diameter(InkTrailStyle* self, double value);

/** @brief Constructor of the InkTrailStyle dictionary type */
InkTrailStyle InkTrailStyle_new();

#ifdef __cplusplus
}
#endif
