#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationEffect AnimationEffect;


/**
 * @brief Interface AnimationNodeList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnimationNodeList)
 */
DECLARE_EMLITE_TYPE(AnimationNodeList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long AnimationNodeList_length(const AnimationNodeList *self);

/**
 * @brief Calls the `item` method. 
*/
AnimationEffect AnimationNodeList_item(AnimationNodeList* self , unsigned long index);

#ifdef __cplusplus
}
#endif
