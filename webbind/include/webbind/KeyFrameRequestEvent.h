#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(KeyFrameRequestEvent, Event);

KeyFrameRequestEvent KeyFrameRequestEvent_new0(jb_DOMString * type);

KeyFrameRequestEvent KeyFrameRequestEvent_new1(jb_DOMString * type, jb_DOMString * rid);

jb_DOMString KeyFrameRequestEvent_rid( const KeyFrameRequestEvent *self);
