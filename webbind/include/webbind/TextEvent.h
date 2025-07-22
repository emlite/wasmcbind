#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

typedef struct Window Window;


typedef struct {
  UIEvent inner;
} TextEvent;


DECLARE_EMLITE_TYPE(TextEvent, UIEvent);

jb_DOMString TextEvent_data( const TextEvent *self);

jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type);

jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles);

jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable);

jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const Window* view);

jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const Window* view, const jb_DOMString* data);
