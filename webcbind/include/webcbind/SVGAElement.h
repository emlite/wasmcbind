#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct DOMTokenList DOMTokenList;


/**
 * @brief Interface SVGAElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement)
 */
DECLARE_EMLITE_TYPE(SVGAElement, SVGGraphicsElement);

/**
 * @brief Gets the `target` property. 
*/
SVGAnimatedString SVGAElement_target(const SVGAElement *self);

/**
 * @brief Gets the `download` property. 
*/
jb_String SVGAElement_download(const SVGAElement *self);

/**
 * @brief Sets the `download` property. 
*/
void SVGAElement_set_download(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `ping` property. 
*/
jb_String SVGAElement_ping(const SVGAElement *self);

/**
 * @brief Sets the `ping` property. 
*/
void SVGAElement_set_ping(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `rel` property. 
*/
jb_String SVGAElement_rel(const SVGAElement *self);

/**
 * @brief Sets the `rel` property. 
*/
void SVGAElement_set_rel(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `relList` property. 
*/
DOMTokenList SVGAElement_relList(const SVGAElement *self);

/**
 * @brief Gets the `hreflang` property. 
*/
jb_String SVGAElement_hreflang(const SVGAElement *self);

/**
 * @brief Sets the `hreflang` property. 
*/
void SVGAElement_set_hreflang(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String SVGAElement_type(const SVGAElement *self);

/**
 * @brief Sets the `type` property. 
*/
void SVGAElement_set_type(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `text` property. 
*/
jb_String SVGAElement_text(const SVGAElement *self);

/**
 * @brief Sets the `text` property. 
*/
void SVGAElement_set_text(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String SVGAElement_referrerPolicy(const SVGAElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void SVGAElement_set_referrerPolicy(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `origin` property. 
*/
jb_String SVGAElement_origin(const SVGAElement *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String SVGAElement_protocol(const SVGAElement *self);

/**
 * @brief Sets the `protocol` property. 
*/
void SVGAElement_set_protocol(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `username` property. 
*/
jb_String SVGAElement_username(const SVGAElement *self);

/**
 * @brief Sets the `username` property. 
*/
void SVGAElement_set_username(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `password` property. 
*/
jb_String SVGAElement_password(const SVGAElement *self);

/**
 * @brief Sets the `password` property. 
*/
void SVGAElement_set_password(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `host` property. 
*/
jb_String SVGAElement_host(const SVGAElement *self);

/**
 * @brief Sets the `host` property. 
*/
void SVGAElement_set_host(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `hostname` property. 
*/
jb_String SVGAElement_hostname(const SVGAElement *self);

/**
 * @brief Sets the `hostname` property. 
*/
void SVGAElement_set_hostname(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `port` property. 
*/
jb_String SVGAElement_port(const SVGAElement *self);

/**
 * @brief Sets the `port` property. 
*/
void SVGAElement_set_port(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `pathname` property. 
*/
jb_String SVGAElement_pathname(const SVGAElement *self);

/**
 * @brief Sets the `pathname` property. 
*/
void SVGAElement_set_pathname(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `search` property. 
*/
jb_String SVGAElement_search(const SVGAElement *self);

/**
 * @brief Sets the `search` property. 
*/
void SVGAElement_set_search(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `hash` property. 
*/
jb_String SVGAElement_hash(const SVGAElement *self);

/**
 * @brief Sets the `hash` property. 
*/
void SVGAElement_set_hash(SVGAElement* self, jb_String * value);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGAElement_href(const SVGAElement *self);

#ifdef __cplusplus
}
#endif
