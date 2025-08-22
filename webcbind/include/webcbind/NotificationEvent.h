#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NotificationEventInit NotificationEventInit;
typedef struct Notification Notification;


/**
 * @brief Interface NotificationEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent)
 */
DECLARE_EMLITE_TYPE(NotificationEvent, ExtendableEvent);

/**
 * @brief Creates a new `NotificationEvent` object. 
*/
NotificationEvent NotificationEvent_new(jb_String * type, NotificationEventInit * eventInitDict);

/**
 * @brief Gets the `notification` property. 
*/
Notification NotificationEvent_notification(const NotificationEvent *self);

/**
 * @brief Gets the `action` property. 
*/
jb_String NotificationEvent_action(const NotificationEvent *self);

#ifdef __cplusplus
}
#endif
