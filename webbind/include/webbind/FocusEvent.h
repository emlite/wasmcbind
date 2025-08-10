#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FocusEventInit FocusEventInit;
typedef struct EventTarget EventTarget;

DECLARE_EMLITE_TYPE(FocusEvent, UIEvent);

FocusEvent FocusEvent_new0(jb_String * type);

FocusEvent FocusEvent_new1(jb_String * type, FocusEventInit * eventInitDict);

EventTarget FocusEvent_relatedTarget(const FocusEvent *self);

#ifdef __cplusplus
}
#endif
