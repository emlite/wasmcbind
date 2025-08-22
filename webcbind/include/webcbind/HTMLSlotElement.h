#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct AssignedNodesOptions AssignedNodesOptions;
typedef struct Element Element;


/**
 * @brief Interface HTMLSlotElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSlotElement)
 */
DECLARE_EMLITE_TYPE(HTMLSlotElement, HTMLElement);

/**
 * @brief Creates a new `HTMLSlotElement` object. 
*/
HTMLSlotElement HTMLSlotElement_new();

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLSlotElement_name(const HTMLSlotElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLSlotElement_set_name(HTMLSlotElement* self, jb_String * value);

/**
 * @brief Calls the `assignedNodes` method. 
*/
jb_Array HTMLSlotElement_assignedNodes0(HTMLSlotElement* self );

/**
 * @brief Calls the `assignedNodes` method. 
*/
jb_Array HTMLSlotElement_assignedNodes1(HTMLSlotElement* self , AssignedNodesOptions * options);

/**
 * @brief Calls the `assignedElements` method. 
*/
jb_Array HTMLSlotElement_assignedElements0(HTMLSlotElement* self );

/**
 * @brief Calls the `assignedElements` method. 
*/
jb_Array HTMLSlotElement_assignedElements1(HTMLSlotElement* self , AssignedNodesOptions * options);

/**
 * @brief Calls the `assign` method. 
*/
jb_Undefined HTMLSlotElement_assign(HTMLSlotElement* self , jb_Any * nodes);

#ifdef __cplusplus
}
#endif
