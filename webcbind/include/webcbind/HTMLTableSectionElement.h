#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableRowElement HTMLTableRowElement;


/**
 * @brief Interface HTMLTableSectionElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement)
 */
DECLARE_EMLITE_TYPE(HTMLTableSectionElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTableSectionElement` object. 
*/
HTMLTableSectionElement HTMLTableSectionElement_new();

/**
 * @brief Gets the `rows` property. 
*/
HTMLCollection HTMLTableSectionElement_rows(const HTMLTableSectionElement *self);

/**
 * @brief Calls the `insertRow` method. 
*/
HTMLTableRowElement HTMLTableSectionElement_insertRow0(HTMLTableSectionElement* self );

/**
 * @brief Calls the `insertRow` method. 
*/
HTMLTableRowElement HTMLTableSectionElement_insertRow1(HTMLTableSectionElement* self , long index);

/**
 * @brief Calls the `deleteRow` method. 
*/
jb_Undefined HTMLTableSectionElement_deleteRow(HTMLTableSectionElement* self , long index);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLTableSectionElement_align(const HTMLTableSectionElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLTableSectionElement_set_align(HTMLTableSectionElement* self, jb_String * value);

/**
 * @brief Gets the `ch` property. 
*/
jb_String HTMLTableSectionElement_ch(const HTMLTableSectionElement *self);

/**
 * @brief Sets the `ch` property. 
*/
void HTMLTableSectionElement_set_ch(HTMLTableSectionElement* self, jb_String * value);

/**
 * @brief Gets the `chOff` property. 
*/
jb_String HTMLTableSectionElement_chOff(const HTMLTableSectionElement *self);

/**
 * @brief Sets the `chOff` property. 
*/
void HTMLTableSectionElement_set_chOff(HTMLTableSectionElement* self, jb_String * value);

/**
 * @brief Gets the `vAlign` property. 
*/
jb_String HTMLTableSectionElement_vAlign(const HTMLTableSectionElement *self);

/**
 * @brief Sets the `vAlign` property. 
*/
void HTMLTableSectionElement_set_vAlign(HTMLTableSectionElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
