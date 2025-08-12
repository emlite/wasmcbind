#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableCellElement HTMLTableCellElement;


/**
 * @brief Interface HTMLTableRowElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement)
 */
DECLARE_EMLITE_TYPE(HTMLTableRowElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTableRowElement` object. 
*/
HTMLTableRowElement HTMLTableRowElement_new();

/**
 * @brief Gets the `rowIndex` property. 
*/
long HTMLTableRowElement_rowIndex(const HTMLTableRowElement *self);

/**
 * @brief Gets the `sectionRowIndex` property. 
*/
long HTMLTableRowElement_sectionRowIndex(const HTMLTableRowElement *self);

/**
 * @brief Gets the `cells` property. 
*/
HTMLCollection HTMLTableRowElement_cells(const HTMLTableRowElement *self);

/**
 * @brief Calls the `insertCell` method. 
*/
HTMLTableCellElement HTMLTableRowElement_insertCell0(HTMLTableRowElement* self );

/**
 * @brief Calls the `insertCell` method. 
*/
HTMLTableCellElement HTMLTableRowElement_insertCell1(HTMLTableRowElement* self , long index);

/**
 * @brief Calls the `deleteCell` method. 
*/
jb_Undefined HTMLTableRowElement_deleteCell(HTMLTableRowElement* self , long index);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLTableRowElement_align(const HTMLTableRowElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLTableRowElement_set_align(HTMLTableRowElement* self, jb_String * value);

/**
 * @brief Gets the `ch` property. 
*/
jb_String HTMLTableRowElement_ch(const HTMLTableRowElement *self);

/**
 * @brief Sets the `ch` property. 
*/
void HTMLTableRowElement_set_ch(HTMLTableRowElement* self, jb_String * value);

/**
 * @brief Gets the `chOff` property. 
*/
jb_String HTMLTableRowElement_chOff(const HTMLTableRowElement *self);

/**
 * @brief Sets the `chOff` property. 
*/
void HTMLTableRowElement_set_chOff(HTMLTableRowElement* self, jb_String * value);

/**
 * @brief Gets the `vAlign` property. 
*/
jb_String HTMLTableRowElement_vAlign(const HTMLTableRowElement *self);

/**
 * @brief Sets the `vAlign` property. 
*/
void HTMLTableRowElement_set_vAlign(HTMLTableRowElement* self, jb_String * value);

/**
 * @brief Gets the `bgColor` property. 
*/
jb_String HTMLTableRowElement_bgColor(const HTMLTableRowElement *self);

/**
 * @brief Sets the `bgColor` property. 
*/
void HTMLTableRowElement_set_bgColor(HTMLTableRowElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
