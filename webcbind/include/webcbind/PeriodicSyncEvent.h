#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PeriodicSyncEventInit PeriodicSyncEventInit;


/**
 * @brief Interface PeriodicSyncEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncEvent)
 */
DECLARE_EMLITE_TYPE(PeriodicSyncEvent, ExtendableEvent);

/**
 * @brief Creates a new `PeriodicSyncEvent` object. 
*/
PeriodicSyncEvent PeriodicSyncEvent_new(jb_String * type, PeriodicSyncEventInit * init);

/**
 * @brief Gets the `tag` property. 
*/
jb_String PeriodicSyncEvent_tag(const PeriodicSyncEvent *self);

#ifdef __cplusplus
}
#endif
