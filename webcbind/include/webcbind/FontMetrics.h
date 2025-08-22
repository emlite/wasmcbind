#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Baseline Baseline;
typedef struct Font Font;


/**
 * @brief Interface FontMetrics
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics)
 */
DECLARE_EMLITE_TYPE(FontMetrics, em_Val);

/**
 * @brief Gets the `width` property. 
*/
double FontMetrics_width(const FontMetrics *self);

/**
 * @brief Gets the `advances` property. 
*/
jb_Array FontMetrics_advances(const FontMetrics *self);

/**
 * @brief Gets the `boundingBoxLeft` property. 
*/
double FontMetrics_boundingBoxLeft(const FontMetrics *self);

/**
 * @brief Gets the `boundingBoxRight` property. 
*/
double FontMetrics_boundingBoxRight(const FontMetrics *self);

/**
 * @brief Gets the `height` property. 
*/
double FontMetrics_height(const FontMetrics *self);

/**
 * @brief Gets the `emHeightAscent` property. 
*/
double FontMetrics_emHeightAscent(const FontMetrics *self);

/**
 * @brief Gets the `emHeightDescent` property. 
*/
double FontMetrics_emHeightDescent(const FontMetrics *self);

/**
 * @brief Gets the `boundingBoxAscent` property. 
*/
double FontMetrics_boundingBoxAscent(const FontMetrics *self);

/**
 * @brief Gets the `boundingBoxDescent` property. 
*/
double FontMetrics_boundingBoxDescent(const FontMetrics *self);

/**
 * @brief Gets the `fontBoundingBoxAscent` property. 
*/
double FontMetrics_fontBoundingBoxAscent(const FontMetrics *self);

/**
 * @brief Gets the `fontBoundingBoxDescent` property. 
*/
double FontMetrics_fontBoundingBoxDescent(const FontMetrics *self);

/**
 * @brief Gets the `dominantBaseline` property. 
*/
Baseline FontMetrics_dominantBaseline(const FontMetrics *self);

/**
 * @brief Gets the `baselines` property. 
*/
jb_Array FontMetrics_baselines(const FontMetrics *self);

/**
 * @brief Gets the `fonts` property. 
*/
jb_Array FontMetrics_fonts(const FontMetrics *self);

#ifdef __cplusplus
}
#endif
