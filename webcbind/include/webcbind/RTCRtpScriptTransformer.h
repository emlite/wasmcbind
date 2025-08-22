#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


/**
 * @brief Interface RTCRtpScriptTransformer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer)
 */
DECLARE_EMLITE_TYPE(RTCRtpScriptTransformer, EventTarget);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream RTCRtpScriptTransformer_readable(const RTCRtpScriptTransformer *self);

/**
 * @brief Calls the `generateKeyFrame` method. 
*/
jb_Promise RTCRtpScriptTransformer_generateKeyFrame0(RTCRtpScriptTransformer* self );

/**
 * @brief Calls the `generateKeyFrame` method. 
*/
jb_Promise RTCRtpScriptTransformer_generateKeyFrame1(RTCRtpScriptTransformer* self , jb_String * rid);

/**
 * @brief Calls the `sendKeyFrameRequest` method. 
*/
jb_Promise RTCRtpScriptTransformer_sendKeyFrameRequest(RTCRtpScriptTransformer* self );

/**
 * @brief Gets the `writable` property. 
*/
WritableStream RTCRtpScriptTransformer_writable(const RTCRtpScriptTransformer *self);

/**
 * @brief Gets the `onkeyframerequest` property. 
*/
jb_Any RTCRtpScriptTransformer_onkeyframerequest(const RTCRtpScriptTransformer *self);

/**
 * @brief Sets the `onkeyframerequest` property. 
*/
void RTCRtpScriptTransformer_set_onkeyframerequest(RTCRtpScriptTransformer* self, jb_Any * value);

/**
 * @brief Gets the `options` property. 
*/
jb_Any RTCRtpScriptTransformer_options(const RTCRtpScriptTransformer *self);

#ifdef __cplusplus
}
#endif
