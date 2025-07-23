#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct TimeRanges TimeRanges;


DECLARE_EMLITE_TYPE(BufferedChangeEvent, Event);

BufferedChangeEvent BufferedChangeEvent_new0(jb_DOMString * type);

BufferedChangeEvent BufferedChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

TimeRanges BufferedChangeEvent_addedRanges(const BufferedChangeEvent *self);

TimeRanges BufferedChangeEvent_removedRanges(const BufferedChangeEvent *self);
