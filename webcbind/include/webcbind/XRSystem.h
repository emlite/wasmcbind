#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRSessionInit XRSessionInit;


/**
 * @brief Interface XRSystem
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem)
 */
DECLARE_EMLITE_TYPE(XRSystem, EventTarget);

/**
 * @brief Calls the `isSessionSupported` method. 
*/
jb_Promise XRSystem_isSessionSupported(XRSystem* self , XRSessionMode * mode);

/**
 * @brief Calls the `requestSession` method. 
*/
jb_Promise XRSystem_requestSession0(XRSystem* self , XRSessionMode * mode);

/**
 * @brief Calls the `requestSession` method. 
*/
jb_Promise XRSystem_requestSession1(XRSystem* self , XRSessionMode * mode, XRSessionInit * options);

/**
 * @brief Gets the `ondevicechange` property. 
*/
jb_Any XRSystem_ondevicechange(const XRSystem *self);

/**
 * @brief Sets the `ondevicechange` property. 
*/
void XRSystem_set_ondevicechange(XRSystem* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
