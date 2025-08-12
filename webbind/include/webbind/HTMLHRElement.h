#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLHRElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement)
 */
DECLARE_EMLITE_TYPE(HTMLHRElement, HTMLElement);

/**
 * @brief Creates a new `HTMLHRElement` object. 
*/
HTMLHRElement HTMLHRElement_new();

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLHRElement_align(const HTMLHRElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLHRElement_set_align(HTMLHRElement* self, jb_String * value);

/**
 * @brief Gets the `color` property. 
*/
jb_String HTMLHRElement_color(const HTMLHRElement *self);

/**
 * @brief Sets the `color` property. 
*/
void HTMLHRElement_set_color(HTMLHRElement* self, jb_String * value);

/**
 * @brief Gets the `noShade` property. 
*/
bool HTMLHRElement_noShade(const HTMLHRElement *self);

/**
 * @brief Sets the `noShade` property. 
*/
void HTMLHRElement_set_noShade(HTMLHRElement* self, bool value);

/**
 * @brief Gets the `size` property. 
*/
jb_String HTMLHRElement_size(const HTMLHRElement *self);

/**
 * @brief Sets the `size` property. 
*/
void HTMLHRElement_set_size(HTMLHRElement* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLHRElement_width(const HTMLHRElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLHRElement_set_width(HTMLHRElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
