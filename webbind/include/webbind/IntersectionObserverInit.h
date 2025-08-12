#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IntersectionObserverInit */
DECLARE_EMLITE_TYPE(IntersectionObserverInit, em_Val);

/** @brief Getter of the root property */
jb_Any IntersectionObserverInit_root(const IntersectionObserverInit *self);

/** @brief Setter of the root property */
void IntersectionObserverInit_set_root(IntersectionObserverInit* self, jb_Any * value);

/** @brief Getter of the rootMargin property */
jb_String IntersectionObserverInit_rootMargin(const IntersectionObserverInit *self);

/** @brief Setter of the rootMargin property */
void IntersectionObserverInit_set_rootMargin(IntersectionObserverInit* self, jb_String * value);

/** @brief Getter of the scrollMargin property */
jb_String IntersectionObserverInit_scrollMargin(const IntersectionObserverInit *self);

/** @brief Setter of the scrollMargin property */
void IntersectionObserverInit_set_scrollMargin(IntersectionObserverInit* self, jb_String * value);

/** @brief Getter of the threshold property */
jb_Any IntersectionObserverInit_threshold(const IntersectionObserverInit *self);

/** @brief Setter of the threshold property */
void IntersectionObserverInit_set_threshold(IntersectionObserverInit* self, jb_Any * value);

/** @brief Getter of the delay property */
long IntersectionObserverInit_delay(const IntersectionObserverInit *self);

/** @brief Setter of the delay property */
void IntersectionObserverInit_set_delay(IntersectionObserverInit* self, long value);

/** @brief Getter of the trackVisibility property */
bool IntersectionObserverInit_trackVisibility(const IntersectionObserverInit *self);

/** @brief Setter of the trackVisibility property */
void IntersectionObserverInit_set_trackVisibility(IntersectionObserverInit* self, bool value);

/** @brief Constructor of the IntersectionObserverInit dictionary type */
IntersectionObserverInit IntersectionObserverInit_new();

#ifdef __cplusplus
}
#endif
