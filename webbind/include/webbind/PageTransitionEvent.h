#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PageTransitionEventInit PageTransitionEventInit;

DECLARE_EMLITE_TYPE(PageTransitionEvent, Event);

PageTransitionEvent PageTransitionEvent_new0(jb_String * type);

PageTransitionEvent PageTransitionEvent_new1(jb_String * type, PageTransitionEventInit * eventInitDict);

bool PageTransitionEvent_persisted(const PageTransitionEvent *self);

#ifdef __cplusplus
}
#endif
