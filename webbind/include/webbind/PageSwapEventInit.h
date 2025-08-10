#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationActivation NavigationActivation;
typedef struct ViewTransition ViewTransition;

DECLARE_EMLITE_TYPE(PageSwapEventInit, EventInit);

NavigationActivation PageSwapEventInit_activation(const PageSwapEventInit *self);

void PageSwapEventInit_set_activation(PageSwapEventInit* self, NavigationActivation * value);

ViewTransition PageSwapEventInit_viewTransition(const PageSwapEventInit *self);

void PageSwapEventInit_set_viewTransition(PageSwapEventInit* self, ViewTransition * value);

PageSwapEventInit PageSwapEventInit_new();

#ifdef __cplusplus
}
#endif
