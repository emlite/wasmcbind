#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLBodyElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement)
 */
DECLARE_EMLITE_TYPE(HTMLBodyElement, HTMLElement);

/**
 * @brief Creates a new `HTMLBodyElement` object. 
*/
HTMLBodyElement HTMLBodyElement_new();

/**
 * @brief Gets the `onorientationchange` property. 
*/
jb_Any HTMLBodyElement_onorientationchange(const HTMLBodyElement *self);

/**
 * @brief Sets the `onorientationchange` property. 
*/
void HTMLBodyElement_set_onorientationchange(HTMLBodyElement* self, jb_Any * value);

/**
 * @brief Gets the `text` property. 
*/
jb_String HTMLBodyElement_text(const HTMLBodyElement *self);

/**
 * @brief Sets the `text` property. 
*/
void HTMLBodyElement_set_text(HTMLBodyElement* self, jb_String * value);

/**
 * @brief Gets the `link` property. 
*/
jb_String HTMLBodyElement_link(const HTMLBodyElement *self);

/**
 * @brief Sets the `link` property. 
*/
void HTMLBodyElement_set_link(HTMLBodyElement* self, jb_String * value);

/**
 * @brief Gets the `vLink` property. 
*/
jb_String HTMLBodyElement_vLink(const HTMLBodyElement *self);

/**
 * @brief Sets the `vLink` property. 
*/
void HTMLBodyElement_set_vLink(HTMLBodyElement* self, jb_String * value);

/**
 * @brief Gets the `aLink` property. 
*/
jb_String HTMLBodyElement_aLink(const HTMLBodyElement *self);

/**
 * @brief Sets the `aLink` property. 
*/
void HTMLBodyElement_set_aLink(HTMLBodyElement* self, jb_String * value);

/**
 * @brief Gets the `bgColor` property. 
*/
jb_String HTMLBodyElement_bgColor(const HTMLBodyElement *self);

/**
 * @brief Sets the `bgColor` property. 
*/
void HTMLBodyElement_set_bgColor(HTMLBodyElement* self, jb_String * value);

/**
 * @brief Gets the `background` property. 
*/
jb_String HTMLBodyElement_background(const HTMLBodyElement *self);

/**
 * @brief Sets the `background` property. 
*/
void HTMLBodyElement_set_background(HTMLBodyElement* self, jb_String * value);

/**
 * @brief Gets the `onportalactivate` property. 
*/
jb_Any HTMLBodyElement_onportalactivate(const HTMLBodyElement *self);

/**
 * @brief Sets the `onportalactivate` property. 
*/
void HTMLBodyElement_set_onportalactivate(HTMLBodyElement* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
