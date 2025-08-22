#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CaptureActionEventInit CaptureActionEventInit;


/**
 * @brief Interface CaptureActionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CaptureActionEvent)
 */
DECLARE_EMLITE_TYPE(CaptureActionEvent, Event);

/**
 * @brief Creates a new `CaptureActionEvent` object. 
*/
CaptureActionEvent CaptureActionEvent_new0();

/**
 * @brief Creates a new `CaptureActionEvent` object. 
*/
CaptureActionEvent CaptureActionEvent_new1(CaptureActionEventInit * init);

/**
 * @brief Gets the `action` property. 
*/
CaptureAction CaptureActionEvent_action(const CaptureActionEvent *self);

#ifdef __cplusplus
}
#endif
