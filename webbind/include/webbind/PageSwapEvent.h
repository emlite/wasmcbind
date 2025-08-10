#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PageSwapEventInit PageSwapEventInit;
typedef struct NavigationActivation NavigationActivation;
typedef struct ViewTransition ViewTransition;

DECLARE_EMLITE_TYPE(PageSwapEvent, Event);

PageSwapEvent PageSwapEvent_new0(jb_String * type);

PageSwapEvent PageSwapEvent_new1(jb_String * type, PageSwapEventInit * eventInitDict);

NavigationActivation PageSwapEvent_activation(const PageSwapEvent *self);

ViewTransition PageSwapEvent_viewTransition(const PageSwapEvent *self);

#ifdef __cplusplus
}
#endif
