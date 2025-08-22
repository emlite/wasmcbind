#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCEncodedAudioFrameOptions RTCEncodedAudioFrameOptions;
typedef struct RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata;


/**
 * @brief Interface RTCEncodedAudioFrame
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame)
 */
DECLARE_EMLITE_TYPE(RTCEncodedAudioFrame, em_Val);

/**
 * @brief Creates a new `RTCEncodedAudioFrame` object. 
*/
RTCEncodedAudioFrame RTCEncodedAudioFrame_new0(RTCEncodedAudioFrame * originalFrame);

/**
 * @brief Creates a new `RTCEncodedAudioFrame` object. 
*/
RTCEncodedAudioFrame RTCEncodedAudioFrame_new1(RTCEncodedAudioFrame * originalFrame, RTCEncodedAudioFrameOptions * options);

/**
 * @brief Gets the `data` property. 
*/
jb_ArrayBuffer RTCEncodedAudioFrame_data(const RTCEncodedAudioFrame *self);

/**
 * @brief Sets the `data` property. 
*/
void RTCEncodedAudioFrame_set_data(RTCEncodedAudioFrame* self, jb_ArrayBuffer * value);

/**
 * @brief Calls the `getMetadata` method. 
*/
RTCEncodedAudioFrameMetadata RTCEncodedAudioFrame_getMetadata(RTCEncodedAudioFrame* self );

#ifdef __cplusplus
}
#endif
