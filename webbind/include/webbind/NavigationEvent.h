#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

typedef struct EventTarget EventTarget;


typedef struct {
  UIEvent inner;
} NavigationEvent;


DECLARE_EMLITE_TYPE(NavigationEvent, UIEvent);

NavigationEvent NavigationEvent_new(const jb_DOMString* type);

NavigationEvent NavigationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

SpatialNavigationDirection NavigationEvent_dir( const NavigationEvent *self);

EventTarget NavigationEvent_relatedTarget( const NavigationEvent *self);
