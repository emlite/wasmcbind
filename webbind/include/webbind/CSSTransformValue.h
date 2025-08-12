#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSTransformComponent CSSTransformComponent;
typedef struct DOMMatrix DOMMatrix;


/**
 * @brief Interface CSSTransformValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformValue)
 */
DECLARE_EMLITE_TYPE(CSSTransformValue, CSSStyleValue);

/**
 * @brief Creates a new `CSSTransformValue` object. 
*/
CSSTransformValue CSSTransformValue_new(jb_Array * transforms);

/**
 * @brief Gets the `length` property. 
*/
unsigned long CSSTransformValue_length(const CSSTransformValue *self);

/**
 * @brief Gets the `is2D` property. 
*/
bool CSSTransformValue_is2D(const CSSTransformValue *self);

/**
 * @brief Calls the `toMatrix` method. 
*/
DOMMatrix CSSTransformValue_toMatrix(CSSTransformValue* self );

#ifdef __cplusplus
}
#endif
