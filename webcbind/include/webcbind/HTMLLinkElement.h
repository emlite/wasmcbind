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
 * @brief Interface HTMLLinkElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement)
 */
DECLARE_EMLITE_TYPE(HTMLLinkElement, HTMLElement);

/**
 * @brief Creates a new `HTMLLinkElement` object. 
*/
HTMLLinkElement HTMLLinkElement_new();

/**
 * @brief Gets the `href` property. 
*/
jb_String HTMLLinkElement_href(const HTMLLinkElement *self);

/**
 * @brief Sets the `href` property. 
*/
void HTMLLinkElement_set_href(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `crossOrigin` property. 
*/
jb_String HTMLLinkElement_crossOrigin(const HTMLLinkElement *self);

/**
 * @brief Sets the `crossOrigin` property. 
*/
void HTMLLinkElement_set_crossOrigin(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `rel` property. 
*/
jb_String HTMLLinkElement_rel(const HTMLLinkElement *self);

/**
 * @brief Sets the `rel` property. 
*/
void HTMLLinkElement_set_rel(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `as` property. 
*/
jb_String HTMLLinkElement_as(const HTMLLinkElement *self);

/**
 * @brief Sets the `as` property. 
*/
void HTMLLinkElement_set_as(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `relList` property. 
*/
DOMTokenList HTMLLinkElement_relList(const HTMLLinkElement *self);

/**
 * @brief Gets the `media` property. 
*/
jb_String HTMLLinkElement_media(const HTMLLinkElement *self);

/**
 * @brief Sets the `media` property. 
*/
void HTMLLinkElement_set_media(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `integrity` property. 
*/
jb_String HTMLLinkElement_integrity(const HTMLLinkElement *self);

/**
 * @brief Sets the `integrity` property. 
*/
void HTMLLinkElement_set_integrity(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `hreflang` property. 
*/
jb_String HTMLLinkElement_hreflang(const HTMLLinkElement *self);

/**
 * @brief Sets the `hreflang` property. 
*/
void HTMLLinkElement_set_hreflang(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLLinkElement_type(const HTMLLinkElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLLinkElement_set_type(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `sizes` property. 
*/
DOMTokenList HTMLLinkElement_sizes(const HTMLLinkElement *self);

/**
 * @brief Gets the `imageSrcset` property. 
*/
jb_String HTMLLinkElement_imageSrcset(const HTMLLinkElement *self);

/**
 * @brief Sets the `imageSrcset` property. 
*/
void HTMLLinkElement_set_imageSrcset(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `imageSizes` property. 
*/
jb_String HTMLLinkElement_imageSizes(const HTMLLinkElement *self);

/**
 * @brief Sets the `imageSizes` property. 
*/
void HTMLLinkElement_set_imageSizes(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String HTMLLinkElement_referrerPolicy(const HTMLLinkElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void HTMLLinkElement_set_referrerPolicy(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `blocking` property. 
*/
DOMTokenList HTMLLinkElement_blocking(const HTMLLinkElement *self);

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLLinkElement_disabled(const HTMLLinkElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLLinkElement_set_disabled(HTMLLinkElement* self, bool value);

/**
 * @brief Gets the `fetchPriority` property. 
*/
jb_String HTMLLinkElement_fetchPriority(const HTMLLinkElement *self);

/**
 * @brief Sets the `fetchPriority` property. 
*/
void HTMLLinkElement_set_fetchPriority(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `charset` property. 
*/
jb_String HTMLLinkElement_charset(const HTMLLinkElement *self);

/**
 * @brief Sets the `charset` property. 
*/
void HTMLLinkElement_set_charset(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `rev` property. 
*/
jb_String HTMLLinkElement_rev(const HTMLLinkElement *self);

/**
 * @brief Sets the `rev` property. 
*/
void HTMLLinkElement_set_rev(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `target` property. 
*/
jb_String HTMLLinkElement_target(const HTMLLinkElement *self);

/**
 * @brief Sets the `target` property. 
*/
void HTMLLinkElement_set_target(HTMLLinkElement* self, jb_String * value);

/**
 * @brief Gets the `sheet` property. 
*/
CSSStyleSheet HTMLLinkElement_sheet(const HTMLLinkElement *self);

#ifdef __cplusplus
}
#endif
