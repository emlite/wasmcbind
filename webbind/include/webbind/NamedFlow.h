#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct Node Node;


/**
 * @brief Interface NamedFlow
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlow)
 */
DECLARE_EMLITE_TYPE(NamedFlow, EventTarget);

/**
 * @brief Gets the `name` property. 
*/
jb_String NamedFlow_name(const NamedFlow *self);

/**
 * @brief Gets the `overset` property. 
*/
bool NamedFlow_overset(const NamedFlow *self);

/**
 * @brief Calls the `getRegions` method. 
*/
jb_Array NamedFlow_getRegions(NamedFlow* self );

/**
 * @brief Gets the `firstEmptyRegionIndex` property. 
*/
short NamedFlow_firstEmptyRegionIndex(const NamedFlow *self);

/**
 * @brief Calls the `getContent` method. 
*/
jb_Array NamedFlow_getContent(NamedFlow* self );

/**
 * @brief Calls the `getRegionsByContent` method. 
*/
jb_Array NamedFlow_getRegionsByContent(NamedFlow* self , Node * node);

#ifdef __cplusplus
}
#endif
