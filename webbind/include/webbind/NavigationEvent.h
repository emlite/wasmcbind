#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationEventInit NavigationEventInit;
typedef struct EventTarget EventTarget;

DECLARE_EMLITE_TYPE(NavigationEvent, UIEvent);

NavigationEvent NavigationEvent_new0(jb_String * type);

NavigationEvent NavigationEvent_new1(jb_String * type, NavigationEventInit * eventInitDict);

SpatialNavigationDirection NavigationEvent_dir(const NavigationEvent *self);

EventTarget NavigationEvent_relatedTarget(const NavigationEvent *self);

#ifdef __cplusplus
}
#endif
