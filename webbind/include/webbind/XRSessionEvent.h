#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSessionEventInit XRSessionEventInit;
typedef struct XRSession XRSession;


/**
 * @brief Interface XRSessionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionEvent)
 */
DECLARE_EMLITE_TYPE(XRSessionEvent, Event);

/**
 * @brief Creates a new `XRSessionEvent` object. 
*/
XRSessionEvent XRSessionEvent_new(jb_String * type, XRSessionEventInit * eventInitDict);

/**
 * @brief Gets the `session` property. 
*/
XRSession XRSessionEvent_session(const XRSessionEvent *self);

#ifdef __cplusplus
}
#endif
