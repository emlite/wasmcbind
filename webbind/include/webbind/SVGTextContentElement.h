#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct DOMPoint DOMPoint;
typedef struct DOMRect DOMRect;
typedef struct DOMPointInit DOMPointInit;


/**
 * @brief Interface SVGTextContentElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement)
 */
DECLARE_EMLITE_TYPE(SVGTextContentElement, SVGGraphicsElement);

/**
 * @brief Gets the `textLength` property. 
*/
SVGAnimatedLength SVGTextContentElement_textLength(const SVGTextContentElement *self);

/**
 * @brief Gets the `lengthAdjust` property. 
*/
SVGAnimatedEnumeration SVGTextContentElement_lengthAdjust(const SVGTextContentElement *self);

/**
 * @brief Calls the `getNumberOfChars` method. 
*/
long SVGTextContentElement_getNumberOfChars(SVGTextContentElement* self );

/**
 * @brief Calls the `getComputedTextLength` method. 
*/
float SVGTextContentElement_getComputedTextLength(SVGTextContentElement* self );

/**
 * @brief Calls the `getSubStringLength` method. 
*/
float SVGTextContentElement_getSubStringLength(SVGTextContentElement* self , unsigned long charnum, unsigned long nchars);

/**
 * @brief Calls the `getStartPositionOfChar` method. 
*/
DOMPoint SVGTextContentElement_getStartPositionOfChar(SVGTextContentElement* self , unsigned long charnum);

/**
 * @brief Calls the `getEndPositionOfChar` method. 
*/
DOMPoint SVGTextContentElement_getEndPositionOfChar(SVGTextContentElement* self , unsigned long charnum);

/**
 * @brief Calls the `getExtentOfChar` method. 
*/
DOMRect SVGTextContentElement_getExtentOfChar(SVGTextContentElement* self , unsigned long charnum);

/**
 * @brief Calls the `getRotationOfChar` method. 
*/
float SVGTextContentElement_getRotationOfChar(SVGTextContentElement* self , unsigned long charnum);

/**
 * @brief Calls the `getCharNumAtPosition` method. 
*/
long SVGTextContentElement_getCharNumAtPosition0(SVGTextContentElement* self );

/**
 * @brief Calls the `getCharNumAtPosition` method. 
*/
long SVGTextContentElement_getCharNumAtPosition1(SVGTextContentElement* self , DOMPointInit * point);

/**
 * @brief Calls the `selectSubString` method. 
*/
jb_Undefined SVGTextContentElement_selectSubString(SVGTextContentElement* self , unsigned long charnum, unsigned long nchars);

#ifdef __cplusplus
}
#endif
