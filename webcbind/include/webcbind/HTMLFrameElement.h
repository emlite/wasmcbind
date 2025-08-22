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
 * @brief Interface HTMLFrameElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement)
 */
DECLARE_EMLITE_TYPE(HTMLFrameElement, HTMLElement);

/**
 * @brief Creates a new `HTMLFrameElement` object. 
*/
HTMLFrameElement HTMLFrameElement_new();

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLFrameElement_name(const HTMLFrameElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLFrameElement_set_name(HTMLFrameElement* self, jb_String * value);

/**
 * @brief Gets the `scrolling` property. 
*/
jb_String HTMLFrameElement_scrolling(const HTMLFrameElement *self);

/**
 * @brief Sets the `scrolling` property. 
*/
void HTMLFrameElement_set_scrolling(HTMLFrameElement* self, jb_String * value);

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLFrameElement_src(const HTMLFrameElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLFrameElement_set_src(HTMLFrameElement* self, jb_String * value);

/**
 * @brief Gets the `frameBorder` property. 
*/
jb_String HTMLFrameElement_frameBorder(const HTMLFrameElement *self);

/**
 * @brief Sets the `frameBorder` property. 
*/
void HTMLFrameElement_set_frameBorder(HTMLFrameElement* self, jb_String * value);

/**
 * @brief Gets the `longDesc` property. 
*/
jb_String HTMLFrameElement_longDesc(const HTMLFrameElement *self);

/**
 * @brief Sets the `longDesc` property. 
*/
void HTMLFrameElement_set_longDesc(HTMLFrameElement* self, jb_String * value);

/**
 * @brief Gets the `noResize` property. 
*/
bool HTMLFrameElement_noResize(const HTMLFrameElement *self);

/**
 * @brief Sets the `noResize` property. 
*/
void HTMLFrameElement_set_noResize(HTMLFrameElement* self, bool value);

/**
 * @brief Gets the `contentDocument` property. 
*/
Document HTMLFrameElement_contentDocument(const HTMLFrameElement *self);

/**
 * @brief Gets the `contentWindow` property. 
*/
jb_Any HTMLFrameElement_contentWindow(const HTMLFrameElement *self);

/**
 * @brief Gets the `marginHeight` property. 
*/
jb_String HTMLFrameElement_marginHeight(const HTMLFrameElement *self);

/**
 * @brief Sets the `marginHeight` property. 
*/
void HTMLFrameElement_set_marginHeight(HTMLFrameElement* self, jb_String * value);

/**
 * @brief Gets the `marginWidth` property. 
*/
jb_String HTMLFrameElement_marginWidth(const HTMLFrameElement *self);

/**
 * @brief Sets the `marginWidth` property. 
*/
void HTMLFrameElement_set_marginWidth(HTMLFrameElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
