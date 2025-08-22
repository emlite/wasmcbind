#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SyncEventInit SyncEventInit;


/**
 * @brief Interface SyncEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent)
 */
DECLARE_EMLITE_TYPE(SyncEvent, ExtendableEvent);

/**
 * @brief Creates a new `SyncEvent` object. 
*/
SyncEvent SyncEvent_new(jb_String * type, SyncEventInit * init);

/**
 * @brief Gets the `tag` property. 
*/
jb_String SyncEvent_tag(const SyncEvent *self);

/**
 * @brief Gets the `lastChance` property. 
*/
bool SyncEvent_lastChance(const SyncEvent *self);

#ifdef __cplusplus
}
#endif
