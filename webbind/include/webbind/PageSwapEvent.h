#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct NavigationActivation NavigationActivation;
typedef struct ViewTransition ViewTransition;


DECLARE_EMLITE_TYPE(PageSwapEvent, Event);

PageSwapEvent PageSwapEvent_new0(jb_DOMString * type);

PageSwapEvent PageSwapEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

NavigationActivation PageSwapEvent_activation( const PageSwapEvent *self);

ViewTransition PageSwapEvent_viewTransition( const PageSwapEvent *self);
