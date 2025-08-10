#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Notification Notification;

DECLARE_EMLITE_TYPE(NotificationEventInit, ExtendableEventInit);

Notification NotificationEventInit_notification(const NotificationEventInit *self);

void NotificationEventInit_set_notification(NotificationEventInit* self, Notification * value);

jb_String NotificationEventInit_action(const NotificationEventInit *self);

void NotificationEventInit_set_action(NotificationEventInit* self, jb_String * value);

NotificationEventInit NotificationEventInit_new();

#ifdef __cplusplus
}
#endif
