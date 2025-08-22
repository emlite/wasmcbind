#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XMLHttpRequestEventTarget
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestEventTarget)
 */
DECLARE_EMLITE_TYPE(XMLHttpRequestEventTarget, EventTarget);

/**
 * @brief Gets the `onloadstart` property. 
*/
jb_Any XMLHttpRequestEventTarget_onloadstart(const XMLHttpRequestEventTarget *self);

/**
 * @brief Sets the `onloadstart` property. 
*/
void XMLHttpRequestEventTarget_set_onloadstart(XMLHttpRequestEventTarget* self, jb_Any * value);

/**
 * @brief Gets the `onprogress` property. 
*/
jb_Any XMLHttpRequestEventTarget_onprogress(const XMLHttpRequestEventTarget *self);

/**
 * @brief Sets the `onprogress` property. 
*/
void XMLHttpRequestEventTarget_set_onprogress(XMLHttpRequestEventTarget* self, jb_Any * value);

/**
 * @brief Gets the `onabort` property. 
*/
jb_Any XMLHttpRequestEventTarget_onabort(const XMLHttpRequestEventTarget *self);

/**
 * @brief Sets the `onabort` property. 
*/
void XMLHttpRequestEventTarget_set_onabort(XMLHttpRequestEventTarget* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any XMLHttpRequestEventTarget_onerror(const XMLHttpRequestEventTarget *self);

/**
 * @brief Sets the `onerror` property. 
*/
void XMLHttpRequestEventTarget_set_onerror(XMLHttpRequestEventTarget* self, jb_Any * value);

/**
 * @brief Gets the `onload` property. 
*/
jb_Any XMLHttpRequestEventTarget_onload(const XMLHttpRequestEventTarget *self);

/**
 * @brief Sets the `onload` property. 
*/
void XMLHttpRequestEventTarget_set_onload(XMLHttpRequestEventTarget* self, jb_Any * value);

/**
 * @brief Gets the `ontimeout` property. 
*/
jb_Any XMLHttpRequestEventTarget_ontimeout(const XMLHttpRequestEventTarget *self);

/**
 * @brief Sets the `ontimeout` property. 
*/
void XMLHttpRequestEventTarget_set_ontimeout(XMLHttpRequestEventTarget* self, jb_Any * value);

/**
 * @brief Gets the `onloadend` property. 
*/
jb_Any XMLHttpRequestEventTarget_onloadend(const XMLHttpRequestEventTarget *self);

/**
 * @brief Sets the `onloadend` property. 
*/
void XMLHttpRequestEventTarget_set_onloadend(XMLHttpRequestEventTarget* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
