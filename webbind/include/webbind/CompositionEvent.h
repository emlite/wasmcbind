#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CompositionEvent, UIEvent);

CompositionEvent CompositionEvent_new0(jb_DOMString * type);

CompositionEvent CompositionEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_USVString CompositionEvent_data( const CompositionEvent *self);

jb_Undefined CompositionEvent_initCompositionEvent0(CompositionEvent* self , jb_DOMString * typeArg);

jb_Undefined CompositionEvent_initCompositionEvent1(CompositionEvent* self , jb_DOMString * typeArg, bool bubblesArg);

jb_Undefined CompositionEvent_initCompositionEvent2(CompositionEvent* self , jb_DOMString * typeArg, bool bubblesArg, bool cancelableArg);

jb_Undefined CompositionEvent_initCompositionEvent3(CompositionEvent* self , jb_DOMString * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg);

jb_Undefined CompositionEvent_initCompositionEvent4(CompositionEvent* self , jb_DOMString * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg, jb_DOMString * dataArg);
