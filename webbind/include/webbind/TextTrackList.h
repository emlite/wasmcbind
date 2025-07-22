#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct TextTrack TextTrack;


typedef struct {
  EventTarget inner;
} TextTrackList;


DECLARE_EMLITE_TYPE(TextTrackList, EventTarget);

unsigned long TextTrackList_length( const TextTrackList *self);

TextTrack TextTrackList_getTrackById(TextTrackList* self , const jb_DOMString* id);

jb_Any TextTrackList_onchange( const TextTrackList *self);

void TextTrackList_set_onchange(TextTrackList* self, const jb_Any* value);

jb_Any TextTrackList_onaddtrack( const TextTrackList *self);

void TextTrackList_set_onaddtrack(TextTrackList* self, const jb_Any* value);

jb_Any TextTrackList_onremovetrack( const TextTrackList *self);

void TextTrackList_set_onremovetrack(TextTrackList* self, const jb_Any* value);
