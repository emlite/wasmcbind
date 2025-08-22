#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;


/**
 * @brief Interface TreeWalker
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TreeWalker)
 */
DECLARE_EMLITE_TYPE(TreeWalker, em_Val);

/**
 * @brief Gets the `root` property. 
*/
Node TreeWalker_root(const TreeWalker *self);

/**
 * @brief Gets the `whatToShow` property. 
*/
unsigned long TreeWalker_whatToShow(const TreeWalker *self);

/**
 * @brief Gets the `filter` property. 
*/
jb_Function TreeWalker_filter(const TreeWalker *self);

/**
 * @brief Gets the `currentNode` property. 
*/
Node TreeWalker_currentNode(const TreeWalker *self);

/**
 * @brief Sets the `currentNode` property. 
*/
void TreeWalker_set_currentNode(TreeWalker* self, Node * value);

/**
 * @brief Calls the `parentNode` method. 
*/
Node TreeWalker_parentNode(TreeWalker* self );

/**
 * @brief Calls the `firstChild` method. 
*/
Node TreeWalker_firstChild(TreeWalker* self );

/**
 * @brief Calls the `lastChild` method. 
*/
Node TreeWalker_lastChild(TreeWalker* self );

/**
 * @brief Calls the `previousSibling` method. 
*/
Node TreeWalker_previousSibling(TreeWalker* self );

/**
 * @brief Calls the `nextSibling` method. 
*/
Node TreeWalker_nextSibling(TreeWalker* self );

/**
 * @brief Calls the `previousNode` method. 
*/
Node TreeWalker_previousNode(TreeWalker* self );

/**
 * @brief Calls the `nextNode` method. 
*/
Node TreeWalker_nextNode(TreeWalker* self );

#ifdef __cplusplus
}
#endif
