#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"


typedef struct {
  UIEvent inner;
} CompositionEvent;


DECLARE_EMLITE_TYPE(CompositionEvent, UIEvent);

CompositionEvent CompositionEvent_new(const jb_DOMString* type);

CompositionEvent CompositionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_USVString CompositionEvent_data( const CompositionEvent *self);

jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg);

jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg);

jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg);

jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const jb_Any* viewArg);

jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const jb_Any* viewArg, const jb_DOMString* dataArg);
