#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMTokenList DOMTokenList;


/**
 * @brief Interface HTMLAnchorElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement)
 */
DECLARE_EMLITE_TYPE(HTMLAnchorElement, HTMLElement);

/**
 * @brief Creates a new `HTMLAnchorElement` object. 
*/
HTMLAnchorElement HTMLAnchorElement_new();

/**
 * @brief Gets the `target` property. 
*/
jb_String HTMLAnchorElement_target(const HTMLAnchorElement *self);

/**
 * @brief Sets the `target` property. 
*/
void HTMLAnchorElement_set_target(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `download` property. 
*/
jb_String HTMLAnchorElement_download(const HTMLAnchorElement *self);

/**
 * @brief Sets the `download` property. 
*/
void HTMLAnchorElement_set_download(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `ping` property. 
*/
jb_String HTMLAnchorElement_ping(const HTMLAnchorElement *self);

/**
 * @brief Sets the `ping` property. 
*/
void HTMLAnchorElement_set_ping(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `rel` property. 
*/
jb_String HTMLAnchorElement_rel(const HTMLAnchorElement *self);

/**
 * @brief Sets the `rel` property. 
*/
void HTMLAnchorElement_set_rel(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `relList` property. 
*/
DOMTokenList HTMLAnchorElement_relList(const HTMLAnchorElement *self);

/**
 * @brief Gets the `hreflang` property. 
*/
jb_String HTMLAnchorElement_hreflang(const HTMLAnchorElement *self);

/**
 * @brief Sets the `hreflang` property. 
*/
void HTMLAnchorElement_set_hreflang(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLAnchorElement_type(const HTMLAnchorElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLAnchorElement_set_type(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `text` property. 
*/
jb_String HTMLAnchorElement_text(const HTMLAnchorElement *self);

/**
 * @brief Sets the `text` property. 
*/
void HTMLAnchorElement_set_text(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String HTMLAnchorElement_referrerPolicy(const HTMLAnchorElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void HTMLAnchorElement_set_referrerPolicy(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `coords` property. 
*/
jb_String HTMLAnchorElement_coords(const HTMLAnchorElement *self);

/**
 * @brief Sets the `coords` property. 
*/
void HTMLAnchorElement_set_coords(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `charset` property. 
*/
jb_String HTMLAnchorElement_charset(const HTMLAnchorElement *self);

/**
 * @brief Sets the `charset` property. 
*/
void HTMLAnchorElement_set_charset(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLAnchorElement_name(const HTMLAnchorElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLAnchorElement_set_name(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `rev` property. 
*/
jb_String HTMLAnchorElement_rev(const HTMLAnchorElement *self);

/**
 * @brief Sets the `rev` property. 
*/
void HTMLAnchorElement_set_rev(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `shape` property. 
*/
jb_String HTMLAnchorElement_shape(const HTMLAnchorElement *self);

/**
 * @brief Sets the `shape` property. 
*/
void HTMLAnchorElement_set_shape(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `attributionSourceId` property. 
*/
unsigned long HTMLAnchorElement_attributionSourceId(const HTMLAnchorElement *self);

/**
 * @brief Sets the `attributionSourceId` property. 
*/
void HTMLAnchorElement_set_attributionSourceId(HTMLAnchorElement* self, unsigned long value);

/**
 * @brief Gets the `attributionSrc` property. 
*/
jb_String HTMLAnchorElement_attributionSrc(const HTMLAnchorElement *self);

/**
 * @brief Sets the `attributionSrc` property. 
*/
void HTMLAnchorElement_set_attributionSrc(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `href` property. 
*/
jb_String HTMLAnchorElement_href(const HTMLAnchorElement *self);

/**
 * @brief Sets the `href` property. 
*/
void HTMLAnchorElement_set_href(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `origin` property. 
*/
jb_String HTMLAnchorElement_origin(const HTMLAnchorElement *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String HTMLAnchorElement_protocol(const HTMLAnchorElement *self);

/**
 * @brief Sets the `protocol` property. 
*/
void HTMLAnchorElement_set_protocol(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `username` property. 
*/
jb_String HTMLAnchorElement_username(const HTMLAnchorElement *self);

/**
 * @brief Sets the `username` property. 
*/
void HTMLAnchorElement_set_username(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `password` property. 
*/
jb_String HTMLAnchorElement_password(const HTMLAnchorElement *self);

/**
 * @brief Sets the `password` property. 
*/
void HTMLAnchorElement_set_password(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `host` property. 
*/
jb_String HTMLAnchorElement_host(const HTMLAnchorElement *self);

/**
 * @brief Sets the `host` property. 
*/
void HTMLAnchorElement_set_host(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `hostname` property. 
*/
jb_String HTMLAnchorElement_hostname(const HTMLAnchorElement *self);

/**
 * @brief Sets the `hostname` property. 
*/
void HTMLAnchorElement_set_hostname(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `port` property. 
*/
jb_String HTMLAnchorElement_port(const HTMLAnchorElement *self);

/**
 * @brief Sets the `port` property. 
*/
void HTMLAnchorElement_set_port(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `pathname` property. 
*/
jb_String HTMLAnchorElement_pathname(const HTMLAnchorElement *self);

/**
 * @brief Sets the `pathname` property. 
*/
void HTMLAnchorElement_set_pathname(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `search` property. 
*/
jb_String HTMLAnchorElement_search(const HTMLAnchorElement *self);

/**
 * @brief Sets the `search` property. 
*/
void HTMLAnchorElement_set_search(HTMLAnchorElement* self, jb_String * value);

/**
 * @brief Gets the `hash` property. 
*/
jb_String HTMLAnchorElement_hash(const HTMLAnchorElement *self);

/**
 * @brief Sets the `hash` property. 
*/
void HTMLAnchorElement_set_hash(HTMLAnchorElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
