#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PerformanceObserverInit, em_Val);

jb_Array PerformanceObserverInit_entryTypes(const PerformanceObserverInit *self);

void PerformanceObserverInit_set_entryTypes(PerformanceObserverInit* self, jb_Array * value);

jb_String PerformanceObserverInit_type(const PerformanceObserverInit *self);

void PerformanceObserverInit_set_type(PerformanceObserverInit* self, jb_String * value);

bool PerformanceObserverInit_buffered(const PerformanceObserverInit *self);

void PerformanceObserverInit_set_buffered(PerformanceObserverInit* self, bool value);

PerformanceObserverInit PerformanceObserverInit_new();

#ifdef __cplusplus
}
#endif
