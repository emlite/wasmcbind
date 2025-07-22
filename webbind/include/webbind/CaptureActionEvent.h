#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} CaptureActionEvent;


DECLARE_EMLITE_TYPE(CaptureActionEvent, Event);

CaptureActionEvent CaptureActionEvent_new();

CaptureActionEvent CaptureActionEvent_new(const jb_Any* init);

CaptureAction CaptureActionEvent_action( const CaptureActionEvent *self);
