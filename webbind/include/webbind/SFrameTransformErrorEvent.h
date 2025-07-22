#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} SFrameTransformErrorEvent;


DECLARE_EMLITE_TYPE(SFrameTransformErrorEvent, Event);

SFrameTransformErrorEvent SFrameTransformErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

SFrameTransformErrorEventType SFrameTransformErrorEvent_errorType( const SFrameTransformErrorEvent *self);

jb_Any SFrameTransformErrorEvent_keyID( const SFrameTransformErrorEvent *self);

jb_Any SFrameTransformErrorEvent_frame( const SFrameTransformErrorEvent *self);
