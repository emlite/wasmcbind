#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SourceBuffer SourceBuffer;


DECLARE_EMLITE_TYPE(AudioTrack, em_Val);

jb_DOMString AudioTrack_id( const AudioTrack *self);

jb_DOMString AudioTrack_kind( const AudioTrack *self);

jb_DOMString AudioTrack_label( const AudioTrack *self);

jb_DOMString AudioTrack_language( const AudioTrack *self);

bool AudioTrack_enabled( const AudioTrack *self);

void AudioTrack_set_enabled(AudioTrack* self, bool value);

SourceBuffer AudioTrack_sourceBuffer( const AudioTrack *self);
