#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ReadableStream ReadableStream;


typedef struct {
  em_Val inner;
} MediaStreamTrackProcessor;


DECLARE_EMLITE_TYPE(MediaStreamTrackProcessor, em_Val);

MediaStreamTrackProcessor MediaStreamTrackProcessor_new(const jb_Any* init);

ReadableStream MediaStreamTrackProcessor_readable( const MediaStreamTrackProcessor *self);
