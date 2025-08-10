#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEventInit, EventInit);

bool ContentVisibilityAutoStateChangeEventInit_skipped(const ContentVisibilityAutoStateChangeEventInit *self);

void ContentVisibilityAutoStateChangeEventInit_set_skipped(ContentVisibilityAutoStateChangeEventInit* self, bool value);

ContentVisibilityAutoStateChangeEventInit ContentVisibilityAutoStateChangeEventInit_new();

#ifdef __cplusplus
}
#endif
