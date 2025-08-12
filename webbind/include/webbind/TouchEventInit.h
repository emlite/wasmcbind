#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventModifierInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Touch Touch;

/** @brief Dictionary type TouchEventInit */
DECLARE_EMLITE_TYPE(TouchEventInit, EventModifierInit);

/** @brief Getter of the touches property */
jb_Array TouchEventInit_touches(const TouchEventInit *self);

/** @brief Setter of the touches property */
void TouchEventInit_set_touches(TouchEventInit* self, jb_Array * value);

/** @brief Getter of the targetTouches property */
jb_Array TouchEventInit_targetTouches(const TouchEventInit *self);

/** @brief Setter of the targetTouches property */
void TouchEventInit_set_targetTouches(TouchEventInit* self, jb_Array * value);

/** @brief Getter of the changedTouches property */
jb_Array TouchEventInit_changedTouches(const TouchEventInit *self);

/** @brief Setter of the changedTouches property */
void TouchEventInit_set_changedTouches(TouchEventInit* self, jb_Array * value);

/** @brief Constructor of the TouchEventInit dictionary type */
TouchEventInit TouchEventInit_new();

#ifdef __cplusplus
}
#endif
