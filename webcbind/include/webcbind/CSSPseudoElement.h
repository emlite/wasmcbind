#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct DOMQuad DOMQuad;
typedef struct BoxQuadOptions BoxQuadOptions;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct ConvertCoordinateOptions ConvertCoordinateOptions;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct DOMPointInit DOMPointInit;


/**
 * @brief Interface CSSPseudoElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement)
 */
DECLARE_EMLITE_TYPE(CSSPseudoElement, EventTarget);

/**
 * @brief Gets the `type` property. 
*/
jb_String CSSPseudoElement_type(const CSSPseudoElement *self);

/**
 * @brief Gets the `element` property. 
*/
Element CSSPseudoElement_element(const CSSPseudoElement *self);

/**
 * @brief Gets the `parent` property. 
*/
jb_Any CSSPseudoElement_parent(const CSSPseudoElement *self);

/**
 * @brief Calls the `pseudo` method. 
*/
CSSPseudoElement CSSPseudoElement_pseudo(CSSPseudoElement* self , jb_String * type);

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array CSSPseudoElement_getBoxQuads0(CSSPseudoElement* self );

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array CSSPseudoElement_getBoxQuads1(CSSPseudoElement* self , BoxQuadOptions * options);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad CSSPseudoElement_convertQuadFromNode0(CSSPseudoElement* self , DOMQuadInit * quad, jb_Any * from);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad CSSPseudoElement_convertQuadFromNode1(CSSPseudoElement* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad CSSPseudoElement_convertRectFromNode0(CSSPseudoElement* self , DOMRectReadOnly * rect, jb_Any * from);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad CSSPseudoElement_convertRectFromNode1(CSSPseudoElement* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint CSSPseudoElement_convertPointFromNode0(CSSPseudoElement* self , DOMPointInit * point, jb_Any * from);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint CSSPseudoElement_convertPointFromNode1(CSSPseudoElement* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);

#ifdef __cplusplus
}
#endif
