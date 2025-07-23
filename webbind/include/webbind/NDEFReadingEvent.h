#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct NDEFMessage NDEFMessage;


DECLARE_EMLITE_TYPE(NDEFReadingEvent, Event);

NDEFReadingEvent NDEFReadingEvent_new(jb_DOMString * type, jb_Any * readingEventInitDict);

jb_DOMString NDEFReadingEvent_serialNumber(const NDEFReadingEvent *self);

NDEFMessage NDEFReadingEvent_message(const NDEFReadingEvent *self);
