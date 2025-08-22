#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct DOMRect DOMRect;


/**
 * @brief Interface CaretPosition
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CaretPosition)
 */
DECLARE_EMLITE_TYPE(CaretPosition, em_Val);

/**
 * @brief Gets the `offsetNode` property. 
*/
Node CaretPosition_offsetNode(const CaretPosition *self);

/**
 * @brief Gets the `offset` property. 
*/
unsigned long CaretPosition_offset(const CaretPosition *self);

/**
 * @brief Calls the `getClientRect` method. 
*/
DOMRect CaretPosition_getClientRect(CaretPosition* self );

#ifdef __cplusplus
}
#endif
