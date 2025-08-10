#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PopStateEventInit PopStateEventInit;

DECLARE_EMLITE_TYPE(PopStateEvent, Event);

PopStateEvent PopStateEvent_new0(jb_String * type);

PopStateEvent PopStateEvent_new1(jb_String * type, PopStateEventInit * eventInitDict);

jb_Any PopStateEvent_state(const PopStateEvent *self);

bool PopStateEvent_hasUAVisualTransition(const PopStateEvent *self);

#ifdef __cplusplus
}
#endif
