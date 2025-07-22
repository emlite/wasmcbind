#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct AudioTrack AudioTrack;


typedef struct {
  EventTarget inner;
} AudioTrackList;


DECLARE_EMLITE_TYPE(AudioTrackList, EventTarget);

unsigned long AudioTrackList_length( const AudioTrackList *self);

AudioTrack AudioTrackList_getTrackById(AudioTrackList* self , const jb_DOMString* id);

jb_Any AudioTrackList_onchange( const AudioTrackList *self);

void AudioTrackList_set_onchange(AudioTrackList* self, const jb_Any* value);

jb_Any AudioTrackList_onaddtrack( const AudioTrackList *self);

void AudioTrackList_set_onaddtrack(AudioTrackList* self, const jb_Any* value);

jb_Any AudioTrackList_onremovetrack( const AudioTrackList *self);

void AudioTrackList_set_onremovetrack(AudioTrackList* self, const jb_Any* value);
