#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct TextTrackCueList TextTrackCueList;
typedef struct TextTrackCue TextTrackCue;
typedef struct SourceBuffer SourceBuffer;


typedef struct {
  EventTarget inner;
} TextTrack;


DECLARE_EMLITE_TYPE(TextTrack, EventTarget);

TextTrackKind TextTrack_kind( const TextTrack *self);

jb_DOMString TextTrack_label( const TextTrack *self);

jb_DOMString TextTrack_language( const TextTrack *self);

jb_DOMString TextTrack_id( const TextTrack *self);

jb_DOMString TextTrack_inBandMetadataTrackDispatchType( const TextTrack *self);

TextTrackMode TextTrack_mode( const TextTrack *self);

void TextTrack_set_mode(TextTrack* self, const TextTrackMode* value);

TextTrackCueList TextTrack_cues( const TextTrack *self);

TextTrackCueList TextTrack_activeCues( const TextTrack *self);

jb_Undefined TextTrack_addCue(TextTrack* self , const TextTrackCue* cue);

jb_Undefined TextTrack_removeCue(TextTrack* self , const TextTrackCue* cue);

jb_Any TextTrack_oncuechange( const TextTrack *self);

void TextTrack_set_oncuechange(TextTrack* self, const jb_Any* value);

SourceBuffer TextTrack_sourceBuffer( const TextTrack *self);
