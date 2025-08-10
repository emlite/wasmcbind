#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFReadingEventInit NDEFReadingEventInit;
typedef struct NDEFMessage NDEFMessage;

DECLARE_EMLITE_TYPE(NDEFReadingEvent, Event);

NDEFReadingEvent NDEFReadingEvent_new(jb_String * type, NDEFReadingEventInit * readingEventInitDict);

jb_String NDEFReadingEvent_serialNumber(const NDEFReadingEvent *self);

NDEFMessage NDEFReadingEvent_message(const NDEFReadingEvent *self);

#ifdef __cplusplus
}
#endif
