#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

typedef struct EventTarget EventTarget;


DECLARE_EMLITE_TYPE(FocusEvent, UIEvent);

FocusEvent FocusEvent_new0(jb_DOMString * type);

FocusEvent FocusEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

EventTarget FocusEvent_relatedTarget( const FocusEvent *self);
