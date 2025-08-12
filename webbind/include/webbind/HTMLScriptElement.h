#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMTokenList DOMTokenList;


/**
 * @brief Interface HTMLScriptElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement)
 */
DECLARE_EMLITE_TYPE(HTMLScriptElement, HTMLElement);

/**
 * @brief Creates a new `HTMLScriptElement` object. 
*/
HTMLScriptElement HTMLScriptElement_new();

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLScriptElement_type(const HTMLScriptElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLScriptElement_set_type(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLScriptElement_src(const HTMLScriptElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLScriptElement_set_src(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `noModule` property. 
*/
bool HTMLScriptElement_noModule(const HTMLScriptElement *self);

/**
 * @brief Sets the `noModule` property. 
*/
void HTMLScriptElement_set_noModule(HTMLScriptElement* self, bool value);

/**
 * @brief Gets the `async` property. 
*/
bool HTMLScriptElement_async(const HTMLScriptElement *self);

/**
 * @brief Sets the `async` property. 
*/
void HTMLScriptElement_set_async(HTMLScriptElement* self, bool value);

/**
 * @brief Gets the `defer` property. 
*/
bool HTMLScriptElement_defer(const HTMLScriptElement *self);

/**
 * @brief Sets the `defer` property. 
*/
void HTMLScriptElement_set_defer(HTMLScriptElement* self, bool value);

/**
 * @brief Gets the `blocking` property. 
*/
DOMTokenList HTMLScriptElement_blocking(const HTMLScriptElement *self);

/**
 * @brief Gets the `crossOrigin` property. 
*/
jb_String HTMLScriptElement_crossOrigin(const HTMLScriptElement *self);

/**
 * @brief Sets the `crossOrigin` property. 
*/
void HTMLScriptElement_set_crossOrigin(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String HTMLScriptElement_referrerPolicy(const HTMLScriptElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void HTMLScriptElement_set_referrerPolicy(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `integrity` property. 
*/
jb_String HTMLScriptElement_integrity(const HTMLScriptElement *self);

/**
 * @brief Sets the `integrity` property. 
*/
void HTMLScriptElement_set_integrity(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `fetchPriority` property. 
*/
jb_String HTMLScriptElement_fetchPriority(const HTMLScriptElement *self);

/**
 * @brief Sets the `fetchPriority` property. 
*/
void HTMLScriptElement_set_fetchPriority(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `text` property. 
*/
jb_String HTMLScriptElement_text(const HTMLScriptElement *self);

/**
 * @brief Sets the `text` property. 
*/
void HTMLScriptElement_set_text(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Calls the `supports` method. 
*/
bool HTMLScriptElement_supports(HTMLScriptElement* self , jb_String * type);

/**
 * @brief Gets the `charset` property. 
*/
jb_String HTMLScriptElement_charset(const HTMLScriptElement *self);

/**
 * @brief Sets the `charset` property. 
*/
void HTMLScriptElement_set_charset(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `event` property. 
*/
jb_String HTMLScriptElement_event(const HTMLScriptElement *self);

/**
 * @brief Sets the `event` property. 
*/
void HTMLScriptElement_set_event(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `htmlFor` property. 
*/
jb_String HTMLScriptElement_htmlFor(const HTMLScriptElement *self);

/**
 * @brief Sets the `htmlFor` property. 
*/
void HTMLScriptElement_set_htmlFor(HTMLScriptElement* self, jb_String * value);

/**
 * @brief Gets the `attributionSrc` property. 
*/
jb_String HTMLScriptElement_attributionSrc(const HTMLScriptElement *self);

/**
 * @brief Sets the `attributionSrc` property. 
*/
void HTMLScriptElement_set_attributionSrc(HTMLScriptElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
