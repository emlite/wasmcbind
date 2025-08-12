#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCRtpScriptTransformer RTCRtpScriptTransformer;


/**
 * @brief Interface RTCTransformEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCTransformEvent)
 */
DECLARE_EMLITE_TYPE(RTCTransformEvent, Event);

/**
 * @brief Gets the `transformer` property. 
*/
RTCRtpScriptTransformer RTCTransformEvent_transformer(const RTCTransformEvent *self);

#ifdef __cplusplus
}
#endif
