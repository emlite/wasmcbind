#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleSheet CSSStyleSheet;


/**
 * @brief Interface SVGStyleElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement)
 */
DECLARE_EMLITE_TYPE(SVGStyleElement, SVGElement);

/**
 * @brief Gets the `type` property. 
*/
jb_String SVGStyleElement_type(const SVGStyleElement *self);

/**
 * @brief Sets the `type` property. 
*/
void SVGStyleElement_set_type(SVGStyleElement* self, jb_String * value);

/**
 * @brief Gets the `media` property. 
*/
jb_String SVGStyleElement_media(const SVGStyleElement *self);

/**
 * @brief Sets the `media` property. 
*/
void SVGStyleElement_set_media(SVGStyleElement* self, jb_String * value);

/**
 * @brief Gets the `title` property. 
*/
jb_String SVGStyleElement_title(const SVGStyleElement *self);

/**
 * @brief Sets the `title` property. 
*/
void SVGStyleElement_set_title(SVGStyleElement* self, jb_String * value);

/**
 * @brief Gets the `sheet` property. 
*/
CSSStyleSheet SVGStyleElement_sheet(const SVGStyleElement *self);

#ifdef __cplusplus
}
#endif
