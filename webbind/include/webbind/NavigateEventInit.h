#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationDestination NavigationDestination;
typedef struct AbortSignal AbortSignal;
typedef struct FormData FormData;
typedef struct Element Element;

DECLARE_EMLITE_TYPE(NavigateEventInit, EventInit);

NavigationType NavigateEventInit_navigationType(const NavigateEventInit *self);

void NavigateEventInit_set_navigationType(NavigateEventInit* self, NavigationType * value);

NavigationDestination NavigateEventInit_destination(const NavigateEventInit *self);

void NavigateEventInit_set_destination(NavigateEventInit* self, NavigationDestination * value);

bool NavigateEventInit_canIntercept(const NavigateEventInit *self);

void NavigateEventInit_set_canIntercept(NavigateEventInit* self, bool value);

bool NavigateEventInit_userInitiated(const NavigateEventInit *self);

void NavigateEventInit_set_userInitiated(NavigateEventInit* self, bool value);

bool NavigateEventInit_hashChange(const NavigateEventInit *self);

void NavigateEventInit_set_hashChange(NavigateEventInit* self, bool value);

AbortSignal NavigateEventInit_signal(const NavigateEventInit *self);

void NavigateEventInit_set_signal(NavigateEventInit* self, AbortSignal * value);

FormData NavigateEventInit_formData(const NavigateEventInit *self);

void NavigateEventInit_set_formData(NavigateEventInit* self, FormData * value);

jb_String NavigateEventInit_downloadRequest(const NavigateEventInit *self);

void NavigateEventInit_set_downloadRequest(NavigateEventInit* self, jb_String * value);

jb_Any NavigateEventInit_info(const NavigateEventInit *self);

void NavigateEventInit_set_info(NavigateEventInit* self, jb_Any * value);

bool NavigateEventInit_hasUAVisualTransition(const NavigateEventInit *self);

void NavigateEventInit_set_hasUAVisualTransition(NavigateEventInit* self, bool value);

Element NavigateEventInit_sourceElement(const NavigateEventInit *self);

void NavigateEventInit_set_sourceElement(NavigateEventInit* self, Element * value);

NavigateEventInit NavigateEventInit_new();

#ifdef __cplusplus
}
#endif
