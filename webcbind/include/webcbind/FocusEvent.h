#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FocusEventInit FocusEventInit;
typedef struct EventTarget EventTarget;


/**
 * @brief Interface FocusEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FocusEvent)
 */
DECLARE_EMLITE_TYPE(FocusEvent, UIEvent);

/**
 * @brief Creates a new `FocusEvent` object. 
*/
FocusEvent FocusEvent_new0(jb_String * type);

/**
 * @brief Creates a new `FocusEvent` object. 
*/
FocusEvent FocusEvent_new1(jb_String * type, FocusEventInit * eventInitDict);

/**
 * @brief Gets the `relatedTarget` property. 
*/
EventTarget FocusEvent_relatedTarget(const FocusEvent *self);

#ifdef __cplusplus
}
#endif
