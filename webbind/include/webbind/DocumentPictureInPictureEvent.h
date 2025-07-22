#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Window Window;


DECLARE_EMLITE_TYPE(DocumentPictureInPictureEvent, Event);

DocumentPictureInPictureEvent DocumentPictureInPictureEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

Window DocumentPictureInPictureEvent_window( const DocumentPictureInPictureEvent *self);
