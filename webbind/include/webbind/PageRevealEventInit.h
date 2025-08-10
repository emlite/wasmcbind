#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ViewTransition ViewTransition;

DECLARE_EMLITE_TYPE(PageRevealEventInit, EventInit);

ViewTransition PageRevealEventInit_viewTransition(const PageRevealEventInit *self);

void PageRevealEventInit_set_viewTransition(PageRevealEventInit* self, ViewTransition * value);

PageRevealEventInit PageRevealEventInit_new();

#ifdef __cplusplus
}
#endif
