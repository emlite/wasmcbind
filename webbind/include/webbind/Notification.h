#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct NotificationAction NotificationAction;
typedef struct NotificationOptions NotificationOptions;


typedef struct {
  em_Val inner;
} NotificationAction;


DECLARE_EMLITE_TYPE(NotificationAction, em_Val);

jb_DOMString NotificationAction_action( const NotificationAction *self);

void NotificationAction_set_action(NotificationAction* self, const jb_DOMString* value);

jb_DOMString NotificationAction_title( const NotificationAction *self);

void NotificationAction_set_title(NotificationAction* self, const jb_DOMString* value);

jb_USVString NotificationAction_icon( const NotificationAction *self);

void NotificationAction_set_icon(NotificationAction* self, const jb_USVString* value);
typedef struct {
  EventTarget inner;
} Notification;


DECLARE_EMLITE_TYPE(Notification, EventTarget);

Notification Notification_new(const jb_DOMString* title);

Notification Notification_new(const jb_DOMString* title, const NotificationOptions* options);

NotificationPermission Notification_permission( Notification *self);

jb_Promise Notification_requestPermission(Notification* self );

jb_Promise Notification_requestPermission(Notification* self , const jb_Function* deprecatedCallback);

unsigned long Notification_maxActions( Notification *self);

jb_Any Notification_onclick( const Notification *self);

void Notification_set_onclick(Notification* self, const jb_Any* value);

jb_Any Notification_onshow( const Notification *self);

void Notification_set_onshow(Notification* self, const jb_Any* value);

jb_Any Notification_onerror( const Notification *self);

void Notification_set_onerror(Notification* self, const jb_Any* value);

jb_Any Notification_onclose( const Notification *self);

void Notification_set_onclose(Notification* self, const jb_Any* value);

jb_DOMString Notification_title( const Notification *self);

NotificationDirection Notification_dir( const Notification *self);

jb_DOMString Notification_lang( const Notification *self);

jb_DOMString Notification_body( const Notification *self);

jb_DOMString Notification_tag( const Notification *self);

jb_USVString Notification_image( const Notification *self);

jb_USVString Notification_icon( const Notification *self);

jb_USVString Notification_badge( const Notification *self);

jb_FrozenArray Notification_vibrate( const Notification *self);

jb_Any Notification_timestamp( const Notification *self);

bool Notification_renotify( const Notification *self);

bool Notification_silent( const Notification *self);

bool Notification_requireInteraction( const Notification *self);

jb_Any Notification_data( const Notification *self);

jb_FrozenArray Notification_actions( const Notification *self);

jb_Undefined Notification_close(Notification* self );
