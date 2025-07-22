#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SourceBuffer SourceBuffer;


typedef struct {
  em_Val inner;
} VideoTrack;


DECLARE_EMLITE_TYPE(VideoTrack, em_Val);

jb_DOMString VideoTrack_id( const VideoTrack *self);

jb_DOMString VideoTrack_kind( const VideoTrack *self);

jb_DOMString VideoTrack_label( const VideoTrack *self);

jb_DOMString VideoTrack_language( const VideoTrack *self);

bool VideoTrack_selected( const VideoTrack *self);

void VideoTrack_set_selected(VideoTrack* self, bool value);

SourceBuffer VideoTrack_sourceBuffer( const VideoTrack *self);
