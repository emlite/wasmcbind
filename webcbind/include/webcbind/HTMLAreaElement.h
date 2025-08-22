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
 * @brief Interface HTMLAreaElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement)
 */
DECLARE_EMLITE_TYPE(HTMLAreaElement, HTMLElement);

/**
 * @brief Creates a new `HTMLAreaElement` object. 
*/
HTMLAreaElement HTMLAreaElement_new();

/**
 * @brief Gets the `alt` property. 
*/
jb_String HTMLAreaElement_alt(const HTMLAreaElement *self);

/**
 * @brief Sets the `alt` property. 
*/
void HTMLAreaElement_set_alt(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `coords` property. 
*/
jb_String HTMLAreaElement_coords(const HTMLAreaElement *self);

/**
 * @brief Sets the `coords` property. 
*/
void HTMLAreaElement_set_coords(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `shape` property. 
*/
jb_String HTMLAreaElement_shape(const HTMLAreaElement *self);

/**
 * @brief Sets the `shape` property. 
*/
void HTMLAreaElement_set_shape(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `target` property. 
*/
jb_String HTMLAreaElement_target(const HTMLAreaElement *self);

/**
 * @brief Sets the `target` property. 
*/
void HTMLAreaElement_set_target(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `download` property. 
*/
jb_String HTMLAreaElement_download(const HTMLAreaElement *self);

/**
 * @brief Sets the `download` property. 
*/
void HTMLAreaElement_set_download(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `ping` property. 
*/
jb_String HTMLAreaElement_ping(const HTMLAreaElement *self);

/**
 * @brief Sets the `ping` property. 
*/
void HTMLAreaElement_set_ping(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `rel` property. 
*/
jb_String HTMLAreaElement_rel(const HTMLAreaElement *self);

/**
 * @brief Sets the `rel` property. 
*/
void HTMLAreaElement_set_rel(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `relList` property. 
*/
DOMTokenList HTMLAreaElement_relList(const HTMLAreaElement *self);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String HTMLAreaElement_referrerPolicy(const HTMLAreaElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void HTMLAreaElement_set_referrerPolicy(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `noHref` property. 
*/
bool HTMLAreaElement_noHref(const HTMLAreaElement *self);

/**
 * @brief Sets the `noHref` property. 
*/
void HTMLAreaElement_set_noHref(HTMLAreaElement* self, bool value);

/**
 * @brief Gets the `attributionSrc` property. 
*/
jb_String HTMLAreaElement_attributionSrc(const HTMLAreaElement *self);

/**
 * @brief Sets the `attributionSrc` property. 
*/
void HTMLAreaElement_set_attributionSrc(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `href` property. 
*/
jb_String HTMLAreaElement_href(const HTMLAreaElement *self);

/**
 * @brief Sets the `href` property. 
*/
void HTMLAreaElement_set_href(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `origin` property. 
*/
jb_String HTMLAreaElement_origin(const HTMLAreaElement *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String HTMLAreaElement_protocol(const HTMLAreaElement *self);

/**
 * @brief Sets the `protocol` property. 
*/
void HTMLAreaElement_set_protocol(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `username` property. 
*/
jb_String HTMLAreaElement_username(const HTMLAreaElement *self);

/**
 * @brief Sets the `username` property. 
*/
void HTMLAreaElement_set_username(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `password` property. 
*/
jb_String HTMLAreaElement_password(const HTMLAreaElement *self);

/**
 * @brief Sets the `password` property. 
*/
void HTMLAreaElement_set_password(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `host` property. 
*/
jb_String HTMLAreaElement_host(const HTMLAreaElement *self);

/**
 * @brief Sets the `host` property. 
*/
void HTMLAreaElement_set_host(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `hostname` property. 
*/
jb_String HTMLAreaElement_hostname(const HTMLAreaElement *self);

/**
 * @brief Sets the `hostname` property. 
*/
void HTMLAreaElement_set_hostname(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `port` property. 
*/
jb_String HTMLAreaElement_port(const HTMLAreaElement *self);

/**
 * @brief Sets the `port` property. 
*/
void HTMLAreaElement_set_port(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `pathname` property. 
*/
jb_String HTMLAreaElement_pathname(const HTMLAreaElement *self);

/**
 * @brief Sets the `pathname` property. 
*/
void HTMLAreaElement_set_pathname(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `search` property. 
*/
jb_String HTMLAreaElement_search(const HTMLAreaElement *self);

/**
 * @brief Sets the `search` property. 
*/
void HTMLAreaElement_set_search(HTMLAreaElement* self, jb_String * value);

/**
 * @brief Gets the `hash` property. 
*/
jb_String HTMLAreaElement_hash(const HTMLAreaElement *self);

/**
 * @brief Sets the `hash` property. 
*/
void HTMLAreaElement_set_hash(HTMLAreaElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
