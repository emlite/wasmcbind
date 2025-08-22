#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrix DOMMatrix;
typedef struct DOMMatrix2DInit DOMMatrix2DInit;


/**
 * @brief Interface SVGTransform
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform)
 */
DECLARE_EMLITE_TYPE(SVGTransform, em_Val);

/**
 * @brief Gets the `type` property. 
*/
unsigned short SVGTransform_type(const SVGTransform *self);

/**
 * @brief Gets the `matrix` property. 
*/
DOMMatrix SVGTransform_matrix(const SVGTransform *self);

/**
 * @brief Gets the `angle` property. 
*/
float SVGTransform_angle(const SVGTransform *self);

/**
 * @brief Calls the `setMatrix` method. 
*/
jb_Undefined SVGTransform_setMatrix0(SVGTransform* self );

/**
 * @brief Calls the `setMatrix` method. 
*/
jb_Undefined SVGTransform_setMatrix1(SVGTransform* self , DOMMatrix2DInit * matrix);

/**
 * @brief Calls the `setTranslate` method. 
*/
jb_Undefined SVGTransform_setTranslate(SVGTransform* self , float tx, float ty);

/**
 * @brief Calls the `setScale` method. 
*/
jb_Undefined SVGTransform_setScale(SVGTransform* self , float sx, float sy);

/**
 * @brief Calls the `setRotate` method. 
*/
jb_Undefined SVGTransform_setRotate(SVGTransform* self , float angle, float cx, float cy);

/**
 * @brief Calls the `setSkewX` method. 
*/
jb_Undefined SVGTransform_setSkewX(SVGTransform* self , float angle);

/**
 * @brief Calls the `setSkewY` method. 
*/
jb_Undefined SVGTransform_setSkewY(SVGTransform* self , float angle);

#ifdef __cplusplus
}
#endif
