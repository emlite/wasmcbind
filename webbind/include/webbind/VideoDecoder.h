#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoDecoderInit VideoDecoderInit;
typedef struct VideoDecoderConfig VideoDecoderConfig;
typedef struct EncodedVideoChunk EncodedVideoChunk;
typedef struct VideoDecoderSupport VideoDecoderSupport;


/**
 * @brief Interface VideoDecoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder)
 */
DECLARE_EMLITE_TYPE(VideoDecoder, EventTarget);

/**
 * @brief Creates a new `VideoDecoder` object. 
*/
VideoDecoder VideoDecoder_new(VideoDecoderInit * init);

/**
 * @brief Gets the `state` property. 
*/
CodecState VideoDecoder_state(const VideoDecoder *self);

/**
 * @brief Gets the `decodeQueueSize` property. 
*/
unsigned long VideoDecoder_decodeQueueSize(const VideoDecoder *self);

/**
 * @brief Gets the `ondequeue` property. 
*/
jb_Any VideoDecoder_ondequeue(const VideoDecoder *self);

/**
 * @brief Sets the `ondequeue` property. 
*/
void VideoDecoder_set_ondequeue(VideoDecoder* self, jb_Any * value);

/**
 * @brief Calls the `configure` method. 
*/
jb_Undefined VideoDecoder_configure(VideoDecoder* self , VideoDecoderConfig * config);

/**
 * @brief Calls the `decode` method. 
*/
jb_Undefined VideoDecoder_decode(VideoDecoder* self , EncodedVideoChunk * chunk);

/**
 * @brief Calls the `flush` method. 
*/
jb_Promise VideoDecoder_flush(VideoDecoder* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined VideoDecoder_reset(VideoDecoder* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined VideoDecoder_close(VideoDecoder* self );

/**
 * @brief Calls the `isConfigSupported` method. 
*/
jb_Promise VideoDecoder_isConfigSupported(VideoDecoder* self , VideoDecoderConfig * config);

#ifdef __cplusplus
}
#endif
