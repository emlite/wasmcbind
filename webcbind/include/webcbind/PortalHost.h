#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StructuredSerializeOptions StructuredSerializeOptions;


/**
 * @brief Interface PortalHost
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost)
 */
DECLARE_EMLITE_TYPE(PortalHost, EventTarget);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined PortalHost_postMessage0(PortalHost* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined PortalHost_postMessage1(PortalHost* self , jb_Any * message, StructuredSerializeOptions * options);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any PortalHost_onmessage(const PortalHost *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void PortalHost_set_onmessage(PortalHost* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any PortalHost_onmessageerror(const PortalHost *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void PortalHost_set_onmessageerror(PortalHost* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
