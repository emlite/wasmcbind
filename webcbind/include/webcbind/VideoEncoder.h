#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoEncoderInit VideoEncoderInit;
typedef struct VideoEncoderConfig VideoEncoderConfig;
typedef struct VideoFrame VideoFrame;
typedef struct VideoEncoderEncodeOptions VideoEncoderEncodeOptions;
typedef struct VideoEncoderSupport VideoEncoderSupport;


/**
 * @brief Interface VideoEncoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder)
 */
DECLARE_EMLITE_TYPE(VideoEncoder, EventTarget);

/**
 * @brief Creates a new `VideoEncoder` object. 
*/
VideoEncoder VideoEncoder_new(VideoEncoderInit * init);

/**
 * @brief Gets the `state` property. 
*/
CodecState VideoEncoder_state(const VideoEncoder *self);

/**
 * @brief Gets the `encodeQueueSize` property. 
*/
unsigned long VideoEncoder_encodeQueueSize(const VideoEncoder *self);

/**
 * @brief Gets the `ondequeue` property. 
*/
jb_Any VideoEncoder_ondequeue(const VideoEncoder *self);

/**
 * @brief Sets the `ondequeue` property. 
*/
void VideoEncoder_set_ondequeue(VideoEncoder* self, jb_Any * value);

/**
 * @brief Calls the `configure` method. 
*/
jb_Undefined VideoEncoder_configure(VideoEncoder* self , VideoEncoderConfig * config);

/**
 * @brief Calls the `encode` method. 
*/
jb_Undefined VideoEncoder_encode0(VideoEncoder* self , VideoFrame * frame);

/**
 * @brief Calls the `encode` method. 
*/
jb_Undefined VideoEncoder_encode1(VideoEncoder* self , VideoFrame * frame, VideoEncoderEncodeOptions * options);

/**
 * @brief Calls the `flush` method. 
*/
jb_Promise VideoEncoder_flush(VideoEncoder* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined VideoEncoder_reset(VideoEncoder* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined VideoEncoder_close(VideoEncoder* self );

/**
 * @brief Calls the `isConfigSupported` method. 
*/
jb_Promise VideoEncoder_isConfigSupported(VideoEncoder* self , VideoEncoderConfig * config);

#ifdef __cplusplus
}
#endif
