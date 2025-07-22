#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} ContentVisibilityAutoStateChangeEvent;


DECLARE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEvent, Event);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new(const jb_DOMString* type);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

bool ContentVisibilityAutoStateChangeEvent_skipped( const ContentVisibilityAutoStateChangeEvent *self);
