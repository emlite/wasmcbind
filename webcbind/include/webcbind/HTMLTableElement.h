#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLTableCaptionElement HTMLTableCaptionElement;
typedef struct HTMLTableSectionElement HTMLTableSectionElement;
typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableRowElement HTMLTableRowElement;


/**
 * @brief Interface HTMLTableElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement)
 */
DECLARE_EMLITE_TYPE(HTMLTableElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTableElement` object. 
*/
HTMLTableElement HTMLTableElement_new();

/**
 * @brief Gets the `caption` property. 
*/
HTMLTableCaptionElement HTMLTableElement_caption(const HTMLTableElement *self);

/**
 * @brief Sets the `caption` property. 
*/
void HTMLTableElement_set_caption(HTMLTableElement* self, HTMLTableCaptionElement * value);

/**
 * @brief Calls the `createCaption` method. 
*/
HTMLTableCaptionElement HTMLTableElement_createCaption(HTMLTableElement* self );

/**
 * @brief Calls the `deleteCaption` method. 
*/
jb_Undefined HTMLTableElement_deleteCaption(HTMLTableElement* self );

/**
 * @brief Gets the `tHead` property. 
*/
HTMLTableSectionElement HTMLTableElement_tHead(const HTMLTableElement *self);

/**
 * @brief Sets the `tHead` property. 
*/
void HTMLTableElement_set_tHead(HTMLTableElement* self, HTMLTableSectionElement * value);

/**
 * @brief Calls the `createTHead` method. 
*/
HTMLTableSectionElement HTMLTableElement_createTHead(HTMLTableElement* self );

/**
 * @brief Calls the `deleteTHead` method. 
*/
jb_Undefined HTMLTableElement_deleteTHead(HTMLTableElement* self );

/**
 * @brief Gets the `tFoot` property. 
*/
HTMLTableSectionElement HTMLTableElement_tFoot(const HTMLTableElement *self);

/**
 * @brief Sets the `tFoot` property. 
*/
void HTMLTableElement_set_tFoot(HTMLTableElement* self, HTMLTableSectionElement * value);

/**
 * @brief Calls the `createTFoot` method. 
*/
HTMLTableSectionElement HTMLTableElement_createTFoot(HTMLTableElement* self );

/**
 * @brief Calls the `deleteTFoot` method. 
*/
jb_Undefined HTMLTableElement_deleteTFoot(HTMLTableElement* self );

/**
 * @brief Gets the `tBodies` property. 
*/
HTMLCollection HTMLTableElement_tBodies(const HTMLTableElement *self);

/**
 * @brief Calls the `createTBody` method. 
*/
HTMLTableSectionElement HTMLTableElement_createTBody(HTMLTableElement* self );

/**
 * @brief Gets the `rows` property. 
*/
HTMLCollection HTMLTableElement_rows(const HTMLTableElement *self);

/**
 * @brief Calls the `insertRow` method. 
*/
HTMLTableRowElement HTMLTableElement_insertRow0(HTMLTableElement* self );

/**
 * @brief Calls the `insertRow` method. 
*/
HTMLTableRowElement HTMLTableElement_insertRow1(HTMLTableElement* self , long index);

/**
 * @brief Calls the `deleteRow` method. 
*/
jb_Undefined HTMLTableElement_deleteRow(HTMLTableElement* self , long index);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLTableElement_align(const HTMLTableElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLTableElement_set_align(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `border` property. 
*/
jb_String HTMLTableElement_border(const HTMLTableElement *self);

/**
 * @brief Sets the `border` property. 
*/
void HTMLTableElement_set_border(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `frame` property. 
*/
jb_String HTMLTableElement_frame(const HTMLTableElement *self);

/**
 * @brief Sets the `frame` property. 
*/
void HTMLTableElement_set_frame(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `rules` property. 
*/
jb_String HTMLTableElement_rules(const HTMLTableElement *self);

/**
 * @brief Sets the `rules` property. 
*/
void HTMLTableElement_set_rules(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `summary` property. 
*/
jb_String HTMLTableElement_summary(const HTMLTableElement *self);

/**
 * @brief Sets the `summary` property. 
*/
void HTMLTableElement_set_summary(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLTableElement_width(const HTMLTableElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLTableElement_set_width(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `bgColor` property. 
*/
jb_String HTMLTableElement_bgColor(const HTMLTableElement *self);

/**
 * @brief Sets the `bgColor` property. 
*/
void HTMLTableElement_set_bgColor(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `cellPadding` property. 
*/
jb_String HTMLTableElement_cellPadding(const HTMLTableElement *self);

/**
 * @brief Sets the `cellPadding` property. 
*/
void HTMLTableElement_set_cellPadding(HTMLTableElement* self, jb_String * value);

/**
 * @brief Gets the `cellSpacing` property. 
*/
jb_String HTMLTableElement_cellSpacing(const HTMLTableElement *self);

/**
 * @brief Sets the `cellSpacing` property. 
*/
void HTMLTableElement_set_cellSpacing(HTMLTableElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
