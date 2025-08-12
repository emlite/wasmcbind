#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface TextMetrics
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics)
 */
DECLARE_EMLITE_TYPE(TextMetrics, em_Val);

/**
 * @brief Gets the `width` property. 
*/
double TextMetrics_width(const TextMetrics *self);

/**
 * @brief Gets the `actualBoundingBoxLeft` property. 
*/
double TextMetrics_actualBoundingBoxLeft(const TextMetrics *self);

/**
 * @brief Gets the `actualBoundingBoxRight` property. 
*/
double TextMetrics_actualBoundingBoxRight(const TextMetrics *self);

/**
 * @brief Gets the `fontBoundingBoxAscent` property. 
*/
double TextMetrics_fontBoundingBoxAscent(const TextMetrics *self);

/**
 * @brief Gets the `fontBoundingBoxDescent` property. 
*/
double TextMetrics_fontBoundingBoxDescent(const TextMetrics *self);

/**
 * @brief Gets the `actualBoundingBoxAscent` property. 
*/
double TextMetrics_actualBoundingBoxAscent(const TextMetrics *self);

/**
 * @brief Gets the `actualBoundingBoxDescent` property. 
*/
double TextMetrics_actualBoundingBoxDescent(const TextMetrics *self);

/**
 * @brief Gets the `emHeightAscent` property. 
*/
double TextMetrics_emHeightAscent(const TextMetrics *self);

/**
 * @brief Gets the `emHeightDescent` property. 
*/
double TextMetrics_emHeightDescent(const TextMetrics *self);

/**
 * @brief Gets the `hangingBaseline` property. 
*/
double TextMetrics_hangingBaseline(const TextMetrics *self);

/**
 * @brief Gets the `alphabeticBaseline` property. 
*/
double TextMetrics_alphabeticBaseline(const TextMetrics *self);

/**
 * @brief Gets the `ideographicBaseline` property. 
*/
double TextMetrics_ideographicBaseline(const TextMetrics *self);

#ifdef __cplusplus
}
#endif
