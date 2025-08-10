#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

DECLARE_EMLITE_TYPE(NavigationEventInit, UIEventInit);

SpatialNavigationDirection NavigationEventInit_dir(const NavigationEventInit *self);

void NavigationEventInit_set_dir(NavigationEventInit* self, SpatialNavigationDirection * value);

EventTarget NavigationEventInit_relatedTarget(const NavigationEventInit *self);

void NavigationEventInit_set_relatedTarget(NavigationEventInit* self, EventTarget * value);

NavigationEventInit NavigationEventInit_new();

#ifdef __cplusplus
}
#endif
