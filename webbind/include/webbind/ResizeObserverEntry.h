#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct ResizeObserverSize ResizeObserverSize;


/**
 * @brief Interface ResizeObserverEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry)
 */
DECLARE_EMLITE_TYPE(ResizeObserverEntry, em_Val);

/**
 * @brief Gets the `target` property. 
*/
Element ResizeObserverEntry_target(const ResizeObserverEntry *self);

/**
 * @brief Gets the `contentRect` property. 
*/
DOMRectReadOnly ResizeObserverEntry_contentRect(const ResizeObserverEntry *self);

/**
 * @brief Gets the `borderBoxSize` property. 
*/
jb_Array ResizeObserverEntry_borderBoxSize(const ResizeObserverEntry *self);

/**
 * @brief Gets the `contentBoxSize` property. 
*/
jb_Array ResizeObserverEntry_contentBoxSize(const ResizeObserverEntry *self);

/**
 * @brief Gets the `devicePixelContentBoxSize` property. 
*/
jb_Array ResizeObserverEntry_devicePixelContentBoxSize(const ResizeObserverEntry *self);

#ifdef __cplusplus
}
#endif
