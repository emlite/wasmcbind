#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLFontElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement)
 */
DECLARE_EMLITE_TYPE(HTMLFontElement, HTMLElement);

/**
 * @brief Creates a new `HTMLFontElement` object. 
*/
HTMLFontElement HTMLFontElement_new();

/**
 * @brief Gets the `color` property. 
*/
jb_String HTMLFontElement_color(const HTMLFontElement *self);

/**
 * @brief Sets the `color` property. 
*/
void HTMLFontElement_set_color(HTMLFontElement* self, jb_String * value);

/**
 * @brief Gets the `face` property. 
*/
jb_String HTMLFontElement_face(const HTMLFontElement *self);

/**
 * @brief Sets the `face` property. 
*/
void HTMLFontElement_set_face(HTMLFontElement* self, jb_String * value);

/**
 * @brief Gets the `size` property. 
*/
jb_String HTMLFontElement_size(const HTMLFontElement *self);

/**
 * @brief Sets the `size` property. 
*/
void HTMLFontElement_set_size(HTMLFontElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
