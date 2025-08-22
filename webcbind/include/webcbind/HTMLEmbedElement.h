#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Document Document;


/**
 * @brief Interface HTMLEmbedElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement)
 */
DECLARE_EMLITE_TYPE(HTMLEmbedElement, HTMLElement);

/**
 * @brief Creates a new `HTMLEmbedElement` object. 
*/
HTMLEmbedElement HTMLEmbedElement_new();

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLEmbedElement_src(const HTMLEmbedElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLEmbedElement_set_src(HTMLEmbedElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLEmbedElement_type(const HTMLEmbedElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLEmbedElement_set_type(HTMLEmbedElement* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLEmbedElement_width(const HTMLEmbedElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLEmbedElement_set_width(HTMLEmbedElement* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
jb_String HTMLEmbedElement_height(const HTMLEmbedElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLEmbedElement_set_height(HTMLEmbedElement* self, jb_String * value);

/**
 * @brief Calls the `getSVGDocument` method. 
*/
Document HTMLEmbedElement_getSVGDocument(HTMLEmbedElement* self );

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLEmbedElement_align(const HTMLEmbedElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLEmbedElement_set_align(HTMLEmbedElement* self, jb_String * value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLEmbedElement_name(const HTMLEmbedElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLEmbedElement_set_name(HTMLEmbedElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
