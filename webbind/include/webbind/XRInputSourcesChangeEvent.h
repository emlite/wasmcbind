#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRInputSourcesChangeEventInit XRInputSourcesChangeEventInit;
typedef struct XRSession XRSession;
typedef struct XRInputSource XRInputSource;


/**
 * @brief Interface XRInputSourcesChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourcesChangeEvent)
 */
DECLARE_EMLITE_TYPE(XRInputSourcesChangeEvent, Event);

/**
 * @brief Creates a new `XRInputSourcesChangeEvent` object. 
*/
XRInputSourcesChangeEvent XRInputSourcesChangeEvent_new(jb_String * type, XRInputSourcesChangeEventInit * eventInitDict);

/**
 * @brief Gets the `session` property. 
*/
XRSession XRInputSourcesChangeEvent_session(const XRInputSourcesChangeEvent *self);

/**
 * @brief Gets the `added` property. 
*/
jb_Array XRInputSourcesChangeEvent_added(const XRInputSourcesChangeEvent *self);

/**
 * @brief Gets the `removed` property. 
*/
jb_Array XRInputSourcesChangeEvent_removed(const XRInputSourcesChangeEvent *self);

#ifdef __cplusplus
}
#endif
