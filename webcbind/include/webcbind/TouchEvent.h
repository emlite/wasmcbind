#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TouchEventInit TouchEventInit;
typedef struct TouchList TouchList;


/**
 * @brief Interface TouchEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent)
 */
DECLARE_EMLITE_TYPE(TouchEvent, UIEvent);

/**
 * @brief Creates a new `TouchEvent` object. 
*/
TouchEvent TouchEvent_new0(jb_String * type);

/**
 * @brief Creates a new `TouchEvent` object. 
*/
TouchEvent TouchEvent_new1(jb_String * type, TouchEventInit * eventInitDict);

/**
 * @brief Gets the `touches` property. 
*/
TouchList TouchEvent_touches(const TouchEvent *self);

/**
 * @brief Gets the `targetTouches` property. 
*/
TouchList TouchEvent_targetTouches(const TouchEvent *self);

/**
 * @brief Gets the `changedTouches` property. 
*/
TouchList TouchEvent_changedTouches(const TouchEvent *self);

/**
 * @brief Gets the `altKey` property. 
*/
bool TouchEvent_altKey(const TouchEvent *self);

/**
 * @brief Gets the `metaKey` property. 
*/
bool TouchEvent_metaKey(const TouchEvent *self);

/**
 * @brief Gets the `ctrlKey` property. 
*/
bool TouchEvent_ctrlKey(const TouchEvent *self);

/**
 * @brief Gets the `shiftKey` property. 
*/
bool TouchEvent_shiftKey(const TouchEvent *self);

/**
 * @brief Calls the `getModifierState` method. 
*/
bool TouchEvent_getModifierState(TouchEvent* self , jb_String * keyArg);

#ifdef __cplusplus
}
#endif
