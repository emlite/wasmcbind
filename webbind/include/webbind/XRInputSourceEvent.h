#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRInputSourceEventInit XRInputSourceEventInit;
typedef struct XRFrame XRFrame;
typedef struct XRInputSource XRInputSource;


/**
 * @brief Interface XRInputSourceEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent)
 */
DECLARE_EMLITE_TYPE(XRInputSourceEvent, Event);

/**
 * @brief Creates a new `XRInputSourceEvent` object. 
*/
XRInputSourceEvent XRInputSourceEvent_new(jb_String * type, XRInputSourceEventInit * eventInitDict);

/**
 * @brief Gets the `frame` property. 
*/
XRFrame XRInputSourceEvent_frame(const XRInputSourceEvent *self);

/**
 * @brief Gets the `inputSource` property. 
*/
XRInputSource XRInputSourceEvent_inputSource(const XRInputSourceEvent *self);

#ifdef __cplusplus
}
#endif
