#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PerformanceObserverInit */
DECLARE_EMLITE_TYPE(PerformanceObserverInit, em_Val);

/** @brief Getter of the entryTypes property */
jb_Array PerformanceObserverInit_entryTypes(const PerformanceObserverInit *self);

/** @brief Setter of the entryTypes property */
void PerformanceObserverInit_set_entryTypes(PerformanceObserverInit* self, jb_Array * value);

/** @brief Getter of the type property */
jb_String PerformanceObserverInit_type(const PerformanceObserverInit *self);

/** @brief Setter of the type property */
void PerformanceObserverInit_set_type(PerformanceObserverInit* self, jb_String * value);

/** @brief Getter of the buffered property */
bool PerformanceObserverInit_buffered(const PerformanceObserverInit *self);

/** @brief Setter of the buffered property */
void PerformanceObserverInit_set_buffered(PerformanceObserverInit* self, bool value);

/** @brief Constructor of the PerformanceObserverInit dictionary type */
PerformanceObserverInit PerformanceObserverInit_new();

#ifdef __cplusplus
}
#endif
