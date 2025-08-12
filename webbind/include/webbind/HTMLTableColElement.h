#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLTableColElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement)
 */
DECLARE_EMLITE_TYPE(HTMLTableColElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTableColElement` object. 
*/
HTMLTableColElement HTMLTableColElement_new();

/**
 * @brief Gets the `span` property. 
*/
unsigned long HTMLTableColElement_span(const HTMLTableColElement *self);

/**
 * @brief Sets the `span` property. 
*/
void HTMLTableColElement_set_span(HTMLTableColElement* self, unsigned long value);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLTableColElement_align(const HTMLTableColElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLTableColElement_set_align(HTMLTableColElement* self, jb_String * value);

/**
 * @brief Gets the `ch` property. 
*/
jb_String HTMLTableColElement_ch(const HTMLTableColElement *self);

/**
 * @brief Sets the `ch` property. 
*/
void HTMLTableColElement_set_ch(HTMLTableColElement* self, jb_String * value);

/**
 * @brief Gets the `chOff` property. 
*/
jb_String HTMLTableColElement_chOff(const HTMLTableColElement *self);

/**
 * @brief Sets the `chOff` property. 
*/
void HTMLTableColElement_set_chOff(HTMLTableColElement* self, jb_String * value);

/**
 * @brief Gets the `vAlign` property. 
*/
jb_String HTMLTableColElement_vAlign(const HTMLTableColElement *self);

/**
 * @brief Sets the `vAlign` property. 
*/
void HTMLTableColElement_set_vAlign(HTMLTableColElement* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLTableColElement_width(const HTMLTableColElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLTableColElement_set_width(HTMLTableColElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
