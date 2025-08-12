#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLSourceElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement)
 */
DECLARE_EMLITE_TYPE(HTMLSourceElement, HTMLElement);

/**
 * @brief Creates a new `HTMLSourceElement` object. 
*/
HTMLSourceElement HTMLSourceElement_new();

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLSourceElement_src(const HTMLSourceElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLSourceElement_set_src(HTMLSourceElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLSourceElement_type(const HTMLSourceElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLSourceElement_set_type(HTMLSourceElement* self, jb_String * value);

/**
 * @brief Gets the `srcset` property. 
*/
jb_String HTMLSourceElement_srcset(const HTMLSourceElement *self);

/**
 * @brief Sets the `srcset` property. 
*/
void HTMLSourceElement_set_srcset(HTMLSourceElement* self, jb_String * value);

/**
 * @brief Gets the `sizes` property. 
*/
jb_String HTMLSourceElement_sizes(const HTMLSourceElement *self);

/**
 * @brief Sets the `sizes` property. 
*/
void HTMLSourceElement_set_sizes(HTMLSourceElement* self, jb_String * value);

/**
 * @brief Gets the `media` property. 
*/
jb_String HTMLSourceElement_media(const HTMLSourceElement *self);

/**
 * @brief Sets the `media` property. 
*/
void HTMLSourceElement_set_media(HTMLSourceElement* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
unsigned long HTMLSourceElement_width(const HTMLSourceElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLSourceElement_set_width(HTMLSourceElement* self, unsigned long value);

/**
 * @brief Gets the `height` property. 
*/
unsigned long HTMLSourceElement_height(const HTMLSourceElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLSourceElement_set_height(HTMLSourceElement* self, unsigned long value);

#ifdef __cplusplus
}
#endif
