#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentVisibilityAutoStateChangeEventInit ContentVisibilityAutoStateChangeEventInit;

DECLARE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEvent, Event);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new0(jb_String * type);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new1(jb_String * type, ContentVisibilityAutoStateChangeEventInit * eventInitDict);

bool ContentVisibilityAutoStateChangeEvent_skipped(const ContentVisibilityAutoStateChangeEvent *self);

#ifdef __cplusplus
}
#endif
