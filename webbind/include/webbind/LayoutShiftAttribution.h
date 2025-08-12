#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct DOMRectReadOnly DOMRectReadOnly;


/**
 * @brief Interface LayoutShiftAttribution
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShiftAttribution)
 */
DECLARE_EMLITE_TYPE(LayoutShiftAttribution, em_Val);

/**
 * @brief Gets the `node` property. 
*/
Node LayoutShiftAttribution_node(const LayoutShiftAttribution *self);

/**
 * @brief Gets the `previousRect` property. 
*/
DOMRectReadOnly LayoutShiftAttribution_previousRect(const LayoutShiftAttribution *self);

/**
 * @brief Gets the `currentRect` property. 
*/
DOMRectReadOnly LayoutShiftAttribution_currentRect(const LayoutShiftAttribution *self);

#ifdef __cplusplus
}
#endif
