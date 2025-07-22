#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} ProgressEvent;


DECLARE_EMLITE_TYPE(ProgressEvent, Event);

ProgressEvent ProgressEvent_new(const jb_DOMString* type);

ProgressEvent ProgressEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

bool ProgressEvent_lengthComputable( const ProgressEvent *self);

double ProgressEvent_loaded( const ProgressEvent *self);

double ProgressEvent_total( const ProgressEvent *self);
