#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;


/**
 * @brief Interface NodeIterator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NodeIterator)
 */
DECLARE_EMLITE_TYPE(NodeIterator, em_Val);

/**
 * @brief Gets the `root` property. 
*/
Node NodeIterator_root(const NodeIterator *self);

/**
 * @brief Gets the `referenceNode` property. 
*/
Node NodeIterator_referenceNode(const NodeIterator *self);

/**
 * @brief Gets the `pointerBeforeReferenceNode` property. 
*/
bool NodeIterator_pointerBeforeReferenceNode(const NodeIterator *self);

/**
 * @brief Gets the `whatToShow` property. 
*/
unsigned long NodeIterator_whatToShow(const NodeIterator *self);

/**
 * @brief Gets the `filter` property. 
*/
jb_Function NodeIterator_filter(const NodeIterator *self);

/**
 * @brief Calls the `nextNode` method. 
*/
Node NodeIterator_nextNode(NodeIterator* self );

/**
 * @brief Calls the `previousNode` method. 
*/
Node NodeIterator_previousNode(NodeIterator* self );

/**
 * @brief Calls the `detach` method. 
*/
jb_Undefined NodeIterator_detach(NodeIterator* self );

#ifdef __cplusplus
}
#endif
