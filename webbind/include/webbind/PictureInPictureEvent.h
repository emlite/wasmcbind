#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct PictureInPictureWindow PictureInPictureWindow;


typedef struct {
  Event inner;
} PictureInPictureEvent;


DECLARE_EMLITE_TYPE(PictureInPictureEvent, Event);

PictureInPictureEvent PictureInPictureEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

PictureInPictureWindow PictureInPictureEvent_pictureInPictureWindow( const PictureInPictureEvent *self);
