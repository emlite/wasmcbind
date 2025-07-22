#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} KeyFrameRequestEvent;


DECLARE_EMLITE_TYPE(KeyFrameRequestEvent, Event);

KeyFrameRequestEvent KeyFrameRequestEvent_new(const jb_DOMString* type);

KeyFrameRequestEvent KeyFrameRequestEvent_new(const jb_DOMString* type, const jb_DOMString* rid);

jb_DOMString KeyFrameRequestEvent_rid( const KeyFrameRequestEvent *self);
