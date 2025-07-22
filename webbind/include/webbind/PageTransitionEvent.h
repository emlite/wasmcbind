#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} PageTransitionEvent;


DECLARE_EMLITE_TYPE(PageTransitionEvent, Event);

PageTransitionEvent PageTransitionEvent_new(const jb_DOMString* type);

PageTransitionEvent PageTransitionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

bool PageTransitionEvent_persisted( const PageTransitionEvent *self);
