#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLMetaElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement)
 */
DECLARE_EMLITE_TYPE(HTMLMetaElement, HTMLElement);

/**
 * @brief Creates a new `HTMLMetaElement` object. 
*/
HTMLMetaElement HTMLMetaElement_new();

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLMetaElement_name(const HTMLMetaElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLMetaElement_set_name(HTMLMetaElement* self, jb_String * value);

/**
 * @brief Gets the `httpEquiv` property. 
*/
jb_String HTMLMetaElement_httpEquiv(const HTMLMetaElement *self);

/**
 * @brief Sets the `httpEquiv` property. 
*/
void HTMLMetaElement_set_httpEquiv(HTMLMetaElement* self, jb_String * value);

/**
 * @brief Gets the `content` property. 
*/
jb_String HTMLMetaElement_content(const HTMLMetaElement *self);

/**
 * @brief Sets the `content` property. 
*/
void HTMLMetaElement_set_content(HTMLMetaElement* self, jb_String * value);

/**
 * @brief Gets the `media` property. 
*/
jb_String HTMLMetaElement_media(const HTMLMetaElement *self);

/**
 * @brief Sets the `media` property. 
*/
void HTMLMetaElement_set_media(HTMLMetaElement* self, jb_String * value);

/**
 * @brief Gets the `scheme` property. 
*/
jb_String HTMLMetaElement_scheme(const HTMLMetaElement *self);

/**
 * @brief Sets the `scheme` property. 
*/
void HTMLMetaElement_set_scheme(HTMLMetaElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
