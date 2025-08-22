#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Notification Notification;

/** @brief Dictionary type NotificationEventInit */
DECLARE_EMLITE_TYPE(NotificationEventInit, ExtendableEventInit);

/** @brief Getter of the notification property */
Notification NotificationEventInit_notification(const NotificationEventInit *self);

/** @brief Setter of the notification property */
void NotificationEventInit_set_notification(NotificationEventInit* self, Notification * value);

/** @brief Getter of the action property */
jb_String NotificationEventInit_action(const NotificationEventInit *self);

/** @brief Setter of the action property */
void NotificationEventInit_set_action(NotificationEventInit* self, jb_String * value);

/** @brief Constructor of the NotificationEventInit dictionary type */
NotificationEventInit NotificationEventInit_new();

#ifdef __cplusplus
}
#endif
