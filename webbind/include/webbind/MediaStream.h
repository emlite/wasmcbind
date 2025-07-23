#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStream MediaStream;


DECLARE_EMLITE_TYPE(MediaStream, EventTarget);

MediaStream MediaStream_new(jb_Sequence * tracks);

jb_DOMString MediaStream_id(const MediaStream *self);

jb_Sequence MediaStream_getAudioTracks(MediaStream* self );

jb_Sequence MediaStream_getVideoTracks(MediaStream* self );

jb_Sequence MediaStream_getTracks(MediaStream* self );

MediaStreamTrack MediaStream_getTrackById(MediaStream* self , jb_DOMString * trackId);

jb_Undefined MediaStream_addTrack(MediaStream* self , MediaStreamTrack * track);

jb_Undefined MediaStream_removeTrack(MediaStream* self , MediaStreamTrack * track);

MediaStream MediaStream_clone(MediaStream* self );

bool MediaStream_active(const MediaStream *self);

jb_Any MediaStream_onaddtrack(const MediaStream *self);

void MediaStream_set_onaddtrack(MediaStream* self, jb_Any * value);

jb_Any MediaStream_onremovetrack(const MediaStream *self);

void MediaStream_set_onremovetrack(MediaStream* self, jb_Any * value);
