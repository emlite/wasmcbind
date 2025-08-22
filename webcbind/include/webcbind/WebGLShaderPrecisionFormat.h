#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLShaderPrecisionFormat
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat)
 */
DECLARE_EMLITE_TYPE(WebGLShaderPrecisionFormat, em_Val);

/**
 * @brief Gets the `rangeMin` property. 
*/
jb_Any WebGLShaderPrecisionFormat_rangeMin(const WebGLShaderPrecisionFormat *self);

/**
 * @brief Gets the `rangeMax` property. 
*/
jb_Any WebGLShaderPrecisionFormat_rangeMax(const WebGLShaderPrecisionFormat *self);

/**
 * @brief Gets the `precision` property. 
*/
jb_Any WebGLShaderPrecisionFormat_precision(const WebGLShaderPrecisionFormat *self);

#ifdef __cplusplus
}
#endif
