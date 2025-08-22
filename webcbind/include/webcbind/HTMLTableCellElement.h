#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLTableCellElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement)
 */
DECLARE_EMLITE_TYPE(HTMLTableCellElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTableCellElement` object. 
*/
HTMLTableCellElement HTMLTableCellElement_new();

/**
 * @brief Gets the `colSpan` property. 
*/
unsigned long HTMLTableCellElement_colSpan(const HTMLTableCellElement *self);

/**
 * @brief Sets the `colSpan` property. 
*/
void HTMLTableCellElement_set_colSpan(HTMLTableCellElement* self, unsigned long value);

/**
 * @brief Gets the `rowSpan` property. 
*/
unsigned long HTMLTableCellElement_rowSpan(const HTMLTableCellElement *self);

/**
 * @brief Sets the `rowSpan` property. 
*/
void HTMLTableCellElement_set_rowSpan(HTMLTableCellElement* self, unsigned long value);

/**
 * @brief Gets the `headers` property. 
*/
jb_String HTMLTableCellElement_headers(const HTMLTableCellElement *self);

/**
 * @brief Sets the `headers` property. 
*/
void HTMLTableCellElement_set_headers(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `cellIndex` property. 
*/
long HTMLTableCellElement_cellIndex(const HTMLTableCellElement *self);

/**
 * @brief Gets the `scope` property. 
*/
jb_String HTMLTableCellElement_scope(const HTMLTableCellElement *self);

/**
 * @brief Sets the `scope` property. 
*/
void HTMLTableCellElement_set_scope(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `abbr` property. 
*/
jb_String HTMLTableCellElement_abbr(const HTMLTableCellElement *self);

/**
 * @brief Sets the `abbr` property. 
*/
void HTMLTableCellElement_set_abbr(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLTableCellElement_align(const HTMLTableCellElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLTableCellElement_set_align(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `axis` property. 
*/
jb_String HTMLTableCellElement_axis(const HTMLTableCellElement *self);

/**
 * @brief Sets the `axis` property. 
*/
void HTMLTableCellElement_set_axis(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
jb_String HTMLTableCellElement_height(const HTMLTableCellElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLTableCellElement_set_height(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLTableCellElement_width(const HTMLTableCellElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLTableCellElement_set_width(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `ch` property. 
*/
jb_String HTMLTableCellElement_ch(const HTMLTableCellElement *self);

/**
 * @brief Sets the `ch` property. 
*/
void HTMLTableCellElement_set_ch(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `chOff` property. 
*/
jb_String HTMLTableCellElement_chOff(const HTMLTableCellElement *self);

/**
 * @brief Sets the `chOff` property. 
*/
void HTMLTableCellElement_set_chOff(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `noWrap` property. 
*/
bool HTMLTableCellElement_noWrap(const HTMLTableCellElement *self);

/**
 * @brief Sets the `noWrap` property. 
*/
void HTMLTableCellElement_set_noWrap(HTMLTableCellElement* self, bool value);

/**
 * @brief Gets the `vAlign` property. 
*/
jb_String HTMLTableCellElement_vAlign(const HTMLTableCellElement *self);

/**
 * @brief Sets the `vAlign` property. 
*/
void HTMLTableCellElement_set_vAlign(HTMLTableCellElement* self, jb_String * value);

/**
 * @brief Gets the `bgColor` property. 
*/
jb_String HTMLTableCellElement_bgColor(const HTMLTableCellElement *self);

/**
 * @brief Sets the `bgColor` property. 
*/
void HTMLTableCellElement_set_bgColor(HTMLTableCellElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
