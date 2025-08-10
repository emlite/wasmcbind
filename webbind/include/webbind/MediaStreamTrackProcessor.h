#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrackProcessorInit MediaStreamTrackProcessorInit;
typedef struct ReadableStream ReadableStream;

DECLARE_EMLITE_TYPE(MediaStreamTrackProcessor, em_Val);

MediaStreamTrackProcessor MediaStreamTrackProcessor_new(MediaStreamTrackProcessorInit * init);

ReadableStream MediaStreamTrackProcessor_readable(const MediaStreamTrackProcessor *self);

#ifdef __cplusplus
}
#endif
