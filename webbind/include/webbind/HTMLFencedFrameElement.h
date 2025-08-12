#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FencedFrameConfig FencedFrameConfig;
typedef struct DOMTokenList DOMTokenList;


/**
 * @brief Interface HTMLFencedFrameElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement)
 */
DECLARE_EMLITE_TYPE(HTMLFencedFrameElement, HTMLElement);

/**
 * @brief Creates a new `HTMLFencedFrameElement` object. 
*/
HTMLFencedFrameElement HTMLFencedFrameElement_new();

/**
 * @brief Gets the `config` property. 
*/
FencedFrameConfig HTMLFencedFrameElement_config(const HTMLFencedFrameElement *self);

/**
 * @brief Sets the `config` property. 
*/
void HTMLFencedFrameElement_set_config(HTMLFencedFrameElement* self, FencedFrameConfig * value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLFencedFrameElement_width(const HTMLFencedFrameElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLFencedFrameElement_set_width(HTMLFencedFrameElement* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
jb_String HTMLFencedFrameElement_height(const HTMLFencedFrameElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLFencedFrameElement_set_height(HTMLFencedFrameElement* self, jb_String * value);

/**
 * @brief Gets the `sandbox` property. 
*/
DOMTokenList HTMLFencedFrameElement_sandbox(const HTMLFencedFrameElement *self);

/**
 * @brief Gets the `allow` property. 
*/
jb_String HTMLFencedFrameElement_allow(const HTMLFencedFrameElement *self);

/**
 * @brief Sets the `allow` property. 
*/
void HTMLFencedFrameElement_set_allow(HTMLFencedFrameElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
