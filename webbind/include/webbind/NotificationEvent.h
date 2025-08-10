#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NotificationEventInit NotificationEventInit;
typedef struct Notification Notification;

DECLARE_EMLITE_TYPE(NotificationEvent, ExtendableEvent);

NotificationEvent NotificationEvent_new(jb_String * type, NotificationEventInit * eventInitDict);

Notification NotificationEvent_notification(const NotificationEvent *self);

jb_String NotificationEvent_action(const NotificationEvent *self);

#ifdef __cplusplus
}
#endif
