#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMTokenList DOMTokenList;
typedef struct CSSStyleSheet CSSStyleSheet;


/**
 * @brief Interface HTMLStyleElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement)
 */
DECLARE_EMLITE_TYPE(HTMLStyleElement, HTMLElement);

/**
 * @brief Creates a new `HTMLStyleElement` object. 
*/
HTMLStyleElement HTMLStyleElement_new();

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLStyleElement_disabled(const HTMLStyleElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLStyleElement_set_disabled(HTMLStyleElement* self, bool value);

/**
 * @brief Gets the `media` property. 
*/
jb_String HTMLStyleElement_media(const HTMLStyleElement *self);

/**
 * @brief Sets the `media` property. 
*/
void HTMLStyleElement_set_media(HTMLStyleElement* self, jb_String * value);

/**
 * @brief Gets the `blocking` property. 
*/
DOMTokenList HTMLStyleElement_blocking(const HTMLStyleElement *self);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLStyleElement_type(const HTMLStyleElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLStyleElement_set_type(HTMLStyleElement* self, jb_String * value);

/**
 * @brief Gets the `sheet` property. 
*/
CSSStyleSheet HTMLStyleElement_sheet(const HTMLStyleElement *self);

#ifdef __cplusplus
}
#endif
