#include <webbind/Notification.h>
#include <webbind/ServiceWorkerRegistration.h>


DEFINE_EMLITE_TYPE(NotificationAction, em_Val);


jb_String NotificationAction_action(const NotificationAction *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("action")));
}


void NotificationAction_set_action(NotificationAction* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("action"), em_Val_from(value));
}


jb_String NotificationAction_title(const NotificationAction *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void NotificationAction_set_title(NotificationAction* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_String NotificationAction_icon(const NotificationAction *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icon")));
}


void NotificationAction_set_icon(NotificationAction* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icon"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Notification, EventTarget);


Notification Notification_new0(jb_String * title) {
        em_Val vv = em_Val_new(em_Val_global("Notification") , em_Val_from(title));
        return Notification_from_val(&vv);
      }


Notification Notification_new1(jb_String * title, NotificationOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("Notification") , em_Val_from(title), em_Val_from(options));
        return Notification_from_val(&vv);
      }


NotificationPermission Notification_permission(const Notification *self) {
    return em_Val_as(NotificationPermission, em_Val_get(em_Val_global("notification"), em_Val_from("permission")));
}


jb_Promise Notification_requestPermission0(Notification* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("notification"), "requestPermission"));
}


jb_Promise Notification_requestPermission1(Notification* self , jb_Function * deprecatedCallback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("notification"), "requestPermission", em_Val_from(deprecatedCallback)));
}


unsigned long Notification_maxActions(const Notification *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_global("notification"), em_Val_from("maxActions")));
}


jb_Any Notification_onclick(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclick")));
}


void Notification_set_onclick(Notification* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclick"), em_Val_from(value));
}


jb_Any Notification_onshow(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onshow")));
}


void Notification_set_onshow(Notification* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onshow"), em_Val_from(value));
}


jb_Any Notification_onerror(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void Notification_set_onerror(Notification* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any Notification_onclose(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclose")));
}


void Notification_set_onclose(Notification* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclose"), em_Val_from(value));
}


jb_String Notification_title(const Notification *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("title")));
}


NotificationDirection Notification_dir(const Notification *self) {
    return em_Val_as(NotificationDirection, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("dir")));
}


jb_String Notification_lang(const Notification *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("lang")));
}


jb_String Notification_body(const Notification *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("body")));
}


jb_String Notification_tag(const Notification *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("tag")));
}


jb_String Notification_image(const Notification *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("image")));
}


jb_String Notification_icon(const Notification *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("icon")));
}


jb_String Notification_badge(const Notification *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("badge")));
}


jb_Array Notification_vibrate(const Notification *self) {
    return em_Val_as(jb_Array, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("vibrate")));
}


jb_Any Notification_timestamp(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("timestamp")));
}


bool Notification_renotify(const Notification *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("renotify")));
}


bool Notification_silent(const Notification *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("silent")));
}


bool Notification_requireInteraction(const Notification *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("requireInteraction")));
}


jb_Any Notification_data(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("data")));
}


jb_Array Notification_actions(const Notification *self) {
    return em_Val_as(jb_Array, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("actions")));
}


jb_Undefined Notification_close(Notification* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}

