#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ImageTrack ImageTrack;


typedef struct {
  em_Val inner;
} ImageTrackList;


DECLARE_EMLITE_TYPE(ImageTrackList, em_Val);

jb_Promise ImageTrackList_ready( const ImageTrackList *self);

unsigned long ImageTrackList_length( const ImageTrackList *self);

long ImageTrackList_selectedIndex( const ImageTrackList *self);

ImageTrack ImageTrackList_selectedTrack( const ImageTrackList *self);
