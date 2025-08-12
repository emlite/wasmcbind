#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLFrameSetElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement)
 */
DECLARE_EMLITE_TYPE(HTMLFrameSetElement, HTMLElement);

/**
 * @brief Creates a new `HTMLFrameSetElement` object. 
*/
HTMLFrameSetElement HTMLFrameSetElement_new();

/**
 * @brief Gets the `cols` property. 
*/
jb_String HTMLFrameSetElement_cols(const HTMLFrameSetElement *self);

/**
 * @brief Sets the `cols` property. 
*/
void HTMLFrameSetElement_set_cols(HTMLFrameSetElement* self, jb_String * value);

/**
 * @brief Gets the `rows` property. 
*/
jb_String HTMLFrameSetElement_rows(const HTMLFrameSetElement *self);

/**
 * @brief Sets the `rows` property. 
*/
void HTMLFrameSetElement_set_rows(HTMLFrameSetElement* self, jb_String * value);

/**
 * @brief Gets the `onportalactivate` property. 
*/
jb_Any HTMLFrameSetElement_onportalactivate(const HTMLFrameSetElement *self);

/**
 * @brief Sets the `onportalactivate` property. 
*/
void HTMLFrameSetElement_set_onportalactivate(HTMLFrameSetElement* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
