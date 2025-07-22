#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct Notification Notification;


DECLARE_EMLITE_TYPE(NotificationEvent, ExtendableEvent);

NotificationEvent NotificationEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

Notification NotificationEvent_notification( const NotificationEvent *self);

jb_DOMString NotificationEvent_action( const NotificationEvent *self);
