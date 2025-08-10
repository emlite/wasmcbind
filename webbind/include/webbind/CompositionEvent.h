#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CompositionEventInit CompositionEventInit;

DECLARE_EMLITE_TYPE(CompositionEvent, UIEvent);

CompositionEvent CompositionEvent_new0(jb_String * type);

CompositionEvent CompositionEvent_new1(jb_String * type, CompositionEventInit * eventInitDict);

jb_String CompositionEvent_data(const CompositionEvent *self);

jb_Undefined CompositionEvent_initCompositionEvent0(CompositionEvent* self , jb_String * typeArg);

jb_Undefined CompositionEvent_initCompositionEvent1(CompositionEvent* self , jb_String * typeArg, bool bubblesArg);

jb_Undefined CompositionEvent_initCompositionEvent2(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg);

jb_Undefined CompositionEvent_initCompositionEvent3(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg);

jb_Undefined CompositionEvent_initCompositionEvent4(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg, jb_String * dataArg);

#ifdef __cplusplus
}
#endif
