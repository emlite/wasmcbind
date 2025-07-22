#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct TextTrackCue TextTrackCue;


typedef struct {
  em_Val inner;
} TextTrackCueList;


DECLARE_EMLITE_TYPE(TextTrackCueList, em_Val);

unsigned long TextTrackCueList_length( const TextTrackCueList *self);

TextTrackCue TextTrackCueList_getCueById(TextTrackCueList* self , const jb_DOMString* id);
