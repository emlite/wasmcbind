#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDConnectionEventInit HIDConnectionEventInit;
typedef struct HIDDevice HIDDevice;


/**
 * @brief Interface HIDConnectionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HIDConnectionEvent)
 */
DECLARE_EMLITE_TYPE(HIDConnectionEvent, Event);

/**
 * @brief Creates a new `HIDConnectionEvent` object. 
*/
HIDConnectionEvent HIDConnectionEvent_new(jb_String * type, HIDConnectionEventInit * eventInitDict);

/**
 * @brief Gets the `device` property. 
*/
HIDDevice HIDConnectionEvent_device(const HIDConnectionEvent *self);

#ifdef __cplusplus
}
#endif
