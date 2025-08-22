#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMRectInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

/** @brief Dictionary type IntersectionObserverEntryInit */
DECLARE_EMLITE_TYPE(IntersectionObserverEntryInit, em_Val);

/** @brief Getter of the time property */
jb_Any IntersectionObserverEntryInit_time(const IntersectionObserverEntryInit *self);

/** @brief Setter of the time property */
void IntersectionObserverEntryInit_set_time(IntersectionObserverEntryInit* self, jb_Any * value);

/** @brief Getter of the rootBounds property */
DOMRectInit IntersectionObserverEntryInit_rootBounds(const IntersectionObserverEntryInit *self);

/** @brief Setter of the rootBounds property */
void IntersectionObserverEntryInit_set_rootBounds(IntersectionObserverEntryInit* self, DOMRectInit * value);

/** @brief Getter of the boundingClientRect property */
DOMRectInit IntersectionObserverEntryInit_boundingClientRect(const IntersectionObserverEntryInit *self);

/** @brief Setter of the boundingClientRect property */
void IntersectionObserverEntryInit_set_boundingClientRect(IntersectionObserverEntryInit* self, DOMRectInit * value);

/** @brief Getter of the intersectionRect property */
DOMRectInit IntersectionObserverEntryInit_intersectionRect(const IntersectionObserverEntryInit *self);

/** @brief Setter of the intersectionRect property */
void IntersectionObserverEntryInit_set_intersectionRect(IntersectionObserverEntryInit* self, DOMRectInit * value);

/** @brief Getter of the isIntersecting property */
bool IntersectionObserverEntryInit_isIntersecting(const IntersectionObserverEntryInit *self);

/** @brief Setter of the isIntersecting property */
void IntersectionObserverEntryInit_set_isIntersecting(IntersectionObserverEntryInit* self, bool value);

/** @brief Getter of the isVisible property */
bool IntersectionObserverEntryInit_isVisible(const IntersectionObserverEntryInit *self);

/** @brief Setter of the isVisible property */
void IntersectionObserverEntryInit_set_isVisible(IntersectionObserverEntryInit* self, bool value);

/** @brief Getter of the intersectionRatio property */
double IntersectionObserverEntryInit_intersectionRatio(const IntersectionObserverEntryInit *self);

/** @brief Setter of the intersectionRatio property */
void IntersectionObserverEntryInit_set_intersectionRatio(IntersectionObserverEntryInit* self, double value);

/** @brief Getter of the target property */
Element IntersectionObserverEntryInit_target(const IntersectionObserverEntryInit *self);

/** @brief Setter of the target property */
void IntersectionObserverEntryInit_set_target(IntersectionObserverEntryInit* self, Element * value);

/** @brief Constructor of the IntersectionObserverEntryInit dictionary type */
IntersectionObserverEntryInit IntersectionObserverEntryInit_new();

#ifdef __cplusplus
}
#endif
