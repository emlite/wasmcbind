#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IntersectionObserverInit, em_Val);

jb_Any IntersectionObserverInit_root(const IntersectionObserverInit *self);

void IntersectionObserverInit_set_root(IntersectionObserverInit* self, jb_Any * value);

jb_String IntersectionObserverInit_rootMargin(const IntersectionObserverInit *self);

void IntersectionObserverInit_set_rootMargin(IntersectionObserverInit* self, jb_String * value);

jb_String IntersectionObserverInit_scrollMargin(const IntersectionObserverInit *self);

void IntersectionObserverInit_set_scrollMargin(IntersectionObserverInit* self, jb_String * value);

jb_Any IntersectionObserverInit_threshold(const IntersectionObserverInit *self);

void IntersectionObserverInit_set_threshold(IntersectionObserverInit* self, jb_Any * value);

long IntersectionObserverInit_delay(const IntersectionObserverInit *self);

void IntersectionObserverInit_set_delay(IntersectionObserverInit* self, long value);

bool IntersectionObserverInit_trackVisibility(const IntersectionObserverInit *self);

void IntersectionObserverInit_set_trackVisibility(IntersectionObserverInit* self, bool value);

IntersectionObserverInit IntersectionObserverInit_new();

#ifdef __cplusplus
}
#endif
