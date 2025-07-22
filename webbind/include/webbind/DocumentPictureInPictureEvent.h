#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Window Window;


typedef struct {
  Event inner;
} DocumentPictureInPictureEvent;


DECLARE_EMLITE_TYPE(DocumentPictureInPictureEvent, Event);

DocumentPictureInPictureEvent DocumentPictureInPictureEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

Window DocumentPictureInPictureEvent_window( const DocumentPictureInPictureEvent *self);
