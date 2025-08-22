#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationEffect AnimationEffect;
typedef struct AnimationNodeList AnimationNodeList;


/**
 * @brief Interface GroupEffect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect)
 */
DECLARE_EMLITE_TYPE(GroupEffect, em_Val);

/**
 * @brief Creates a new `GroupEffect` object. 
*/
GroupEffect GroupEffect_new0(jb_Array * children);

/**
 * @brief Creates a new `GroupEffect` object. 
*/
GroupEffect GroupEffect_new1(jb_Array * children, jb_Any * timing);

/**
 * @brief Gets the `children` property. 
*/
AnimationNodeList GroupEffect_children(const GroupEffect *self);

/**
 * @brief Gets the `firstChild` property. 
*/
AnimationEffect GroupEffect_firstChild(const GroupEffect *self);

/**
 * @brief Gets the `lastChild` property. 
*/
AnimationEffect GroupEffect_lastChild(const GroupEffect *self);

/**
 * @brief Calls the `clone` method. 
*/
GroupEffect GroupEffect_clone(GroupEffect* self );

/**
 * @brief Calls the `prepend` method. 
*/
jb_Undefined GroupEffect_prepend(GroupEffect* self , AnimationEffect * effects);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined GroupEffect_append(GroupEffect* self , AnimationEffect * effects);

#ifdef __cplusplus
}
#endif
