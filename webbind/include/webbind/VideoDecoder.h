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

DECLARE_EMLITE_TYPE(VideoDecoder, EventTarget);

VideoDecoder VideoDecoder_new(VideoDecoderInit * init);

CodecState VideoDecoder_state(const VideoDecoder *self);

unsigned long VideoDecoder_decodeQueueSize(const VideoDecoder *self);

jb_Any VideoDecoder_ondequeue(const VideoDecoder *self);

void VideoDecoder_set_ondequeue(VideoDecoder* self, jb_Any * value);

jb_Undefined VideoDecoder_configure(VideoDecoder* self , VideoDecoderConfig * config);

jb_Undefined VideoDecoder_decode(VideoDecoder* self , EncodedVideoChunk * chunk);

jb_Promise VideoDecoder_flush(VideoDecoder* self );

jb_Undefined VideoDecoder_reset(VideoDecoder* self );

jb_Undefined VideoDecoder_close(VideoDecoder* self );

jb_Promise VideoDecoder_isConfigSupported(VideoDecoder* self , VideoDecoderConfig * config);

#ifdef __cplusplus
}
#endif
