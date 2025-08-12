#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Worker Worker;


/**
 * @brief Interface RTCRtpScriptTransform
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransform)
 */
DECLARE_EMLITE_TYPE(RTCRtpScriptTransform, em_Val);

/**
 * @brief Creates a new `RTCRtpScriptTransform` object. 
*/
RTCRtpScriptTransform RTCRtpScriptTransform_new0(Worker * worker);

/**
 * @brief Creates a new `RTCRtpScriptTransform` object. 
*/
RTCRtpScriptTransform RTCRtpScriptTransform_new1(Worker * worker, jb_Any * options);

/**
 * @brief Creates a new `RTCRtpScriptTransform` object. 
*/
RTCRtpScriptTransform RTCRtpScriptTransform_new2(Worker * worker, jb_Any * options, jb_Array * transfer);

#ifdef __cplusplus
}
#endif
