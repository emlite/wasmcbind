#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

typedef struct EventTarget EventTarget;


typedef struct {
  UIEvent inner;
} FocusEvent;


DECLARE_EMLITE_TYPE(FocusEvent, UIEvent);

FocusEvent FocusEvent_new(const jb_DOMString* type);

FocusEvent FocusEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

EventTarget FocusEvent_relatedTarget( const FocusEvent *self);
