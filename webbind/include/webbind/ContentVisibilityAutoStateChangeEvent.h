#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEvent, Event);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new0(jb_DOMString * type);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

bool ContentVisibilityAutoStateChangeEvent_skipped(const ContentVisibilityAutoStateChangeEvent *self);
