#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushEventInit PushEventInit;
typedef struct PushMessageData PushMessageData;


/**
 * @brief Interface PushEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PushEvent)
 */
DECLARE_EMLITE_TYPE(PushEvent, ExtendableEvent);

/**
 * @brief Creates a new `PushEvent` object. 
*/
PushEvent PushEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PushEvent` object. 
*/
PushEvent PushEvent_new1(jb_String * type, PushEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
PushMessageData PushEvent_data(const PushEvent *self);

#ifdef __cplusplus
}
#endif
