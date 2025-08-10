#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoFrameBufferInit VideoFrameBufferInit;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct VideoColorSpace VideoColorSpace;
typedef struct VideoFrameMetadata VideoFrameMetadata;
typedef struct VideoFrameCopyToOptions VideoFrameCopyToOptions;
typedef struct PlaneLayout PlaneLayout;

DECLARE_EMLITE_TYPE(VideoFrame, em_Val);

VideoFrame VideoFrame_new(jb_Any * data, VideoFrameBufferInit * init);

VideoPixelFormat VideoFrame_format(const VideoFrame *self);

unsigned long VideoFrame_codedWidth(const VideoFrame *self);

unsigned long VideoFrame_codedHeight(const VideoFrame *self);

DOMRectReadOnly VideoFrame_codedRect(const VideoFrame *self);

DOMRectReadOnly VideoFrame_visibleRect(const VideoFrame *self);

double VideoFrame_rotation(const VideoFrame *self);

bool VideoFrame_flip(const VideoFrame *self);

unsigned long VideoFrame_displayWidth(const VideoFrame *self);

unsigned long VideoFrame_displayHeight(const VideoFrame *self);

long long VideoFrame_duration(const VideoFrame *self);

long long VideoFrame_timestamp(const VideoFrame *self);

VideoColorSpace VideoFrame_colorSpace(const VideoFrame *self);

VideoFrameMetadata VideoFrame_metadata(VideoFrame* self );

unsigned long VideoFrame_allocationSize0(VideoFrame* self );

unsigned long VideoFrame_allocationSize1(VideoFrame* self , VideoFrameCopyToOptions * options);

jb_Promise VideoFrame_copyTo0(VideoFrame* self , jb_Any * destination);

jb_Promise VideoFrame_copyTo1(VideoFrame* self , jb_Any * destination, VideoFrameCopyToOptions * options);

VideoFrame VideoFrame_clone(VideoFrame* self );

jb_Undefined VideoFrame_close(VideoFrame* self );

#ifdef __cplusplus
}
#endif
