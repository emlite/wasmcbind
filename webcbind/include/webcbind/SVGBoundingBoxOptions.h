#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SVGBoundingBoxOptions */
DECLARE_EMLITE_TYPE(SVGBoundingBoxOptions, em_Val);

/** @brief Getter of the fill property */
bool SVGBoundingBoxOptions_fill(const SVGBoundingBoxOptions *self);

/** @brief Setter of the fill property */
void SVGBoundingBoxOptions_set_fill(SVGBoundingBoxOptions* self, bool value);

/** @brief Getter of the stroke property */
bool SVGBoundingBoxOptions_stroke(const SVGBoundingBoxOptions *self);

/** @brief Setter of the stroke property */
void SVGBoundingBoxOptions_set_stroke(SVGBoundingBoxOptions* self, bool value);

/** @brief Getter of the markers property */
bool SVGBoundingBoxOptions_markers(const SVGBoundingBoxOptions *self);

/** @brief Setter of the markers property */
void SVGBoundingBoxOptions_set_markers(SVGBoundingBoxOptions* self, bool value);

/** @brief Getter of the clipped property */
bool SVGBoundingBoxOptions_clipped(const SVGBoundingBoxOptions *self);

/** @brief Setter of the clipped property */
void SVGBoundingBoxOptions_set_clipped(SVGBoundingBoxOptions* self, bool value);

/** @brief Constructor of the SVGBoundingBoxOptions dictionary type */
SVGBoundingBoxOptions SVGBoundingBoxOptions_new();

#ifdef __cplusplus
}
#endif
