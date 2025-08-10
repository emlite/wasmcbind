#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
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

DECLARE_EMLITE_TYPE(VideoEncoder, EventTarget);

VideoEncoder VideoEncoder_new(VideoEncoderInit * init);

CodecState VideoEncoder_state(const VideoEncoder *self);

unsigned long VideoEncoder_encodeQueueSize(const VideoEncoder *self);

jb_Any VideoEncoder_ondequeue(const VideoEncoder *self);

void VideoEncoder_set_ondequeue(VideoEncoder* self, jb_Any * value);

jb_Undefined VideoEncoder_configure(VideoEncoder* self , VideoEncoderConfig * config);

jb_Undefined VideoEncoder_encode0(VideoEncoder* self , VideoFrame * frame);

jb_Undefined VideoEncoder_encode1(VideoEncoder* self , VideoFrame * frame, VideoEncoderEncodeOptions * options);

jb_Promise VideoEncoder_flush(VideoEncoder* self );

jb_Undefined VideoEncoder_reset(VideoEncoder* self );

jb_Undefined VideoEncoder_close(VideoEncoder* self );

jb_Promise VideoEncoder_isConfigSupported(VideoEncoder* self , VideoEncoderConfig * config);

#ifdef __cplusplus
}
#endif
