#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;


/**
 * @brief Interface AbstractRange
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange)
 */
DECLARE_EMLITE_TYPE(AbstractRange, em_Val);

/**
 * @brief Gets the `startContainer` property. 
*/
Node AbstractRange_startContainer(const AbstractRange *self);

/**
 * @brief Gets the `startOffset` property. 
*/
unsigned long AbstractRange_startOffset(const AbstractRange *self);

/**
 * @brief Gets the `endContainer` property. 
*/
Node AbstractRange_endContainer(const AbstractRange *self);

/**
 * @brief Gets the `endOffset` property. 
*/
unsigned long AbstractRange_endOffset(const AbstractRange *self);

/**
 * @brief Gets the `collapsed` property. 
*/
bool AbstractRange_collapsed(const AbstractRange *self);

#ifdef __cplusplus
}
#endif
