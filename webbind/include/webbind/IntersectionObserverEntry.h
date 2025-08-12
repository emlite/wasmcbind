#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IntersectionObserverEntryInit IntersectionObserverEntryInit;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct Element Element;


/**
 * @brief Interface IntersectionObserverEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntry)
 */
DECLARE_EMLITE_TYPE(IntersectionObserverEntry, em_Val);

/**
 * @brief Creates a new `IntersectionObserverEntry` object. 
*/
IntersectionObserverEntry IntersectionObserverEntry_new(IntersectionObserverEntryInit * intersectionObserverEntryInit);

/**
 * @brief Gets the `time` property. 
*/
jb_Any IntersectionObserverEntry_time(const IntersectionObserverEntry *self);

/**
 * @brief Gets the `rootBounds` property. 
*/
DOMRectReadOnly IntersectionObserverEntry_rootBounds(const IntersectionObserverEntry *self);

/**
 * @brief Gets the `boundingClientRect` property. 
*/
DOMRectReadOnly IntersectionObserverEntry_boundingClientRect(const IntersectionObserverEntry *self);

/**
 * @brief Gets the `intersectionRect` property. 
*/
DOMRectReadOnly IntersectionObserverEntry_intersectionRect(const IntersectionObserverEntry *self);

/**
 * @brief Gets the `isIntersecting` property. 
*/
bool IntersectionObserverEntry_isIntersecting(const IntersectionObserverEntry *self);

/**
 * @brief Gets the `isVisible` property. 
*/
bool IntersectionObserverEntry_isVisible(const IntersectionObserverEntry *self);

/**
 * @brief Gets the `intersectionRatio` property. 
*/
double IntersectionObserverEntry_intersectionRatio(const IntersectionObserverEntry *self);

/**
 * @brief Gets the `target` property. 
*/
Element IntersectionObserverEntry_target(const IntersectionObserverEntry *self);

#ifdef __cplusplus
}
#endif
