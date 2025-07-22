#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct ViewTransition ViewTransition;


typedef struct {
  Event inner;
} PageRevealEvent;


DECLARE_EMLITE_TYPE(PageRevealEvent, Event);

PageRevealEvent PageRevealEvent_new(const jb_DOMString* type);

PageRevealEvent PageRevealEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

ViewTransition PageRevealEvent_viewTransition( const PageRevealEvent *self);
