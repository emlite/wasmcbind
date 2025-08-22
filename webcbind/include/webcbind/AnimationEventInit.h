#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AnimationEventInit */
DECLARE_EMLITE_TYPE(AnimationEventInit, EventInit);

/** @brief Getter of the animationName property */
jb_String AnimationEventInit_animationName(const AnimationEventInit *self);

/** @brief Setter of the animationName property */
void AnimationEventInit_set_animationName(AnimationEventInit* self, jb_String * value);

/** @brief Getter of the elapsedTime property */
double AnimationEventInit_elapsedTime(const AnimationEventInit *self);

/** @brief Setter of the elapsedTime property */
void AnimationEventInit_set_elapsedTime(AnimationEventInit* self, double value);

/** @brief Getter of the pseudoElement property */
jb_String AnimationEventInit_pseudoElement(const AnimationEventInit *self);

/** @brief Setter of the pseudoElement property */
void AnimationEventInit_set_pseudoElement(AnimationEventInit* self, jb_String * value);

/** @brief Constructor of the AnimationEventInit dictionary type */
AnimationEventInit AnimationEventInit_new();

#ifdef __cplusplus
}
#endif
