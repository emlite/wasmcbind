#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCEncodedVideoFrameOptions RTCEncodedVideoFrameOptions;
typedef struct RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameMetadata;


/**
 * @brief Interface RTCEncodedVideoFrame
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrame)
 */
DECLARE_EMLITE_TYPE(RTCEncodedVideoFrame, em_Val);

/**
 * @brief Creates a new `RTCEncodedVideoFrame` object. 
*/
RTCEncodedVideoFrame RTCEncodedVideoFrame_new0(RTCEncodedVideoFrame * originalFrame);

/**
 * @brief Creates a new `RTCEncodedVideoFrame` object. 
*/
RTCEncodedVideoFrame RTCEncodedVideoFrame_new1(RTCEncodedVideoFrame * originalFrame, RTCEncodedVideoFrameOptions * options);

/**
 * @brief Gets the `type` property. 
*/
RTCEncodedVideoFrameType RTCEncodedVideoFrame_type(const RTCEncodedVideoFrame *self);

/**
 * @brief Gets the `data` property. 
*/
jb_ArrayBuffer RTCEncodedVideoFrame_data(const RTCEncodedVideoFrame *self);

/**
 * @brief Sets the `data` property. 
*/
void RTCEncodedVideoFrame_set_data(RTCEncodedVideoFrame* self, jb_ArrayBuffer * value);

/**
 * @brief Calls the `getMetadata` method. 
*/
RTCEncodedVideoFrameMetadata RTCEncodedVideoFrame_getMetadata(RTCEncodedVideoFrame* self );

#ifdef __cplusplus
}
#endif
