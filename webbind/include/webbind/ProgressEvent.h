#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ProgressEvent, Event);

ProgressEvent ProgressEvent_new0(jb_DOMString * type);

ProgressEvent ProgressEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

bool ProgressEvent_lengthComputable(const ProgressEvent *self);

double ProgressEvent_loaded(const ProgressEvent *self);

double ProgressEvent_total(const ProgressEvent *self);
