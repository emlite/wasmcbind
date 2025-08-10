#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMRectInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(IntersectionObserverEntryInit, em_Val);

jb_Any IntersectionObserverEntryInit_time(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_time(IntersectionObserverEntryInit* self, jb_Any * value);

DOMRectInit IntersectionObserverEntryInit_rootBounds(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_rootBounds(IntersectionObserverEntryInit* self, DOMRectInit * value);

DOMRectInit IntersectionObserverEntryInit_boundingClientRect(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_boundingClientRect(IntersectionObserverEntryInit* self, DOMRectInit * value);

DOMRectInit IntersectionObserverEntryInit_intersectionRect(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_intersectionRect(IntersectionObserverEntryInit* self, DOMRectInit * value);

bool IntersectionObserverEntryInit_isIntersecting(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_isIntersecting(IntersectionObserverEntryInit* self, bool value);

bool IntersectionObserverEntryInit_isVisible(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_isVisible(IntersectionObserverEntryInit* self, bool value);

double IntersectionObserverEntryInit_intersectionRatio(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_intersectionRatio(IntersectionObserverEntryInit* self, double value);

Element IntersectionObserverEntryInit_target(const IntersectionObserverEntryInit *self);

void IntersectionObserverEntryInit_set_target(IntersectionObserverEntryInit* self, Element * value);

IntersectionObserverEntryInit IntersectionObserverEntryInit_new();

#ifdef __cplusplus
}
#endif
