#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRLayerEventInit XRLayerEventInit;
typedef struct XRLayer XRLayer;


/**
 * @brief Interface XRLayerEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerEvent)
 */
DECLARE_EMLITE_TYPE(XRLayerEvent, Event);

/**
 * @brief Creates a new `XRLayerEvent` object. 
*/
XRLayerEvent XRLayerEvent_new(jb_String * type, XRLayerEventInit * eventInitDict);

/**
 * @brief Gets the `layer` property. 
*/
XRLayer XRLayerEvent_layer(const XRLayerEvent *self);

#ifdef __cplusplus
}
#endif
