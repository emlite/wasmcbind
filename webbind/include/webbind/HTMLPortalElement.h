#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PortalActivateOptions PortalActivateOptions;
typedef struct StructuredSerializeOptions StructuredSerializeOptions;


/**
 * @brief Interface HTMLPortalElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement)
 */
DECLARE_EMLITE_TYPE(HTMLPortalElement, HTMLElement);

/**
 * @brief Creates a new `HTMLPortalElement` object. 
*/
HTMLPortalElement HTMLPortalElement_new();

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLPortalElement_src(const HTMLPortalElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLPortalElement_set_src(HTMLPortalElement* self, jb_String * value);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String HTMLPortalElement_referrerPolicy(const HTMLPortalElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void HTMLPortalElement_set_referrerPolicy(HTMLPortalElement* self, jb_String * value);

/**
 * @brief Calls the `activate` method. 
*/
jb_Promise HTMLPortalElement_activate0(HTMLPortalElement* self );

/**
 * @brief Calls the `activate` method. 
*/
jb_Promise HTMLPortalElement_activate1(HTMLPortalElement* self , PortalActivateOptions * options);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined HTMLPortalElement_postMessage0(HTMLPortalElement* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined HTMLPortalElement_postMessage1(HTMLPortalElement* self , jb_Any * message, StructuredSerializeOptions * options);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any HTMLPortalElement_onmessage(const HTMLPortalElement *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void HTMLPortalElement_set_onmessage(HTMLPortalElement* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any HTMLPortalElement_onmessageerror(const HTMLPortalElement *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void HTMLPortalElement_set_onmessageerror(HTMLPortalElement* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
