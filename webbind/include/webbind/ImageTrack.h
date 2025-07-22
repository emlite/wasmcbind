#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ImageTrack;


DECLARE_EMLITE_TYPE(ImageTrack, em_Val);

bool ImageTrack_animated( const ImageTrack *self);

unsigned long ImageTrack_frameCount( const ImageTrack *self);

float ImageTrack_repetitionCount( const ImageTrack *self);

bool ImageTrack_selected( const ImageTrack *self);

void ImageTrack_set_selected(ImageTrack* self, bool value);
