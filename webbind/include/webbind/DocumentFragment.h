#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Node.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct HTMLCollection HTMLCollection;
typedef struct NodeList NodeList;


/**
 * @brief Interface DocumentFragment
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DocumentFragment)
 */
DECLARE_EMLITE_TYPE(DocumentFragment, Node);

/**
 * @brief Creates a new `DocumentFragment` object. 
*/
DocumentFragment DocumentFragment_new();

/**
 * @brief Calls the `getElementById` method. 
*/
Element DocumentFragment_getElementById(DocumentFragment* self , jb_String * elementId);

/**
 * @brief Gets the `children` property. 
*/
HTMLCollection DocumentFragment_children(const DocumentFragment *self);

/**
 * @brief Gets the `firstElementChild` property. 
*/
Element DocumentFragment_firstElementChild(const DocumentFragment *self);

/**
 * @brief Gets the `lastElementChild` property. 
*/
Element DocumentFragment_lastElementChild(const DocumentFragment *self);

/**
 * @brief Gets the `childElementCount` property. 
*/
unsigned long DocumentFragment_childElementCount(const DocumentFragment *self);

/**
 * @brief Calls the `prepend` method. 
*/
jb_Undefined DocumentFragment_prepend(DocumentFragment* self , jb_Any * nodes);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined DocumentFragment_append(DocumentFragment* self , jb_Any * nodes);

/**
 * @brief Calls the `replaceChildren` method. 
*/
jb_Undefined DocumentFragment_replaceChildren(DocumentFragment* self , jb_Any * nodes);

/**
 * @brief Calls the `moveBefore` method. 
*/
jb_Undefined DocumentFragment_moveBefore(DocumentFragment* self , Node * node, Node * child);

/**
 * @brief Calls the `querySelector` method. 
*/
Element DocumentFragment_querySelector(DocumentFragment* self , jb_String * selectors);

/**
 * @brief Calls the `querySelectorAll` method. 
*/
NodeList DocumentFragment_querySelectorAll(DocumentFragment* self , jb_String * selectors);

#ifdef __cplusplus
}
#endif
