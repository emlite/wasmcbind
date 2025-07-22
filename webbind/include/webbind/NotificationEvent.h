#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct Notification Notification;


typedef struct {
  ExtendableEvent inner;
} NotificationEvent;


DECLARE_EMLITE_TYPE(NotificationEvent, ExtendableEvent);

NotificationEvent NotificationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

Notification NotificationEvent_notification( const NotificationEvent *self);

jb_DOMString NotificationEvent_action( const NotificationEvent *self);
