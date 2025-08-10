#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PageTransitionEventInit, EventInit);

bool PageTransitionEventInit_persisted(const PageTransitionEventInit *self);

void PageTransitionEventInit_set_persisted(PageTransitionEventInit* self, bool value);

PageTransitionEventInit PageTransitionEventInit_new();

#ifdef __cplusplus
}
#endif
