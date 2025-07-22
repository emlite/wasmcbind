#include <webbind/Notification.h>
#include <webbind/ServiceWorkerRegistration.h>


DEFINE_EMLITE_TYPE(NotificationAction, em_Val);


jb_DOMString NotificationAction_action(const NotificationAction *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "action"));
}


void NotificationAction_set_action(NotificationAction* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "action", value);
}


jb_DOMString NotificationAction_title(const NotificationAction *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


void NotificationAction_set_title(NotificationAction* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "title", value);
}


jb_USVString NotificationAction_icon(const NotificationAction *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "icon"));
}


void NotificationAction_set_icon(NotificationAction* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "icon", value);
}

DEFINE_EMLITE_TYPE(Notification, EventTarget);


Notification Notification_new(const jb_DOMString* title) : EventTarget(em_Val_global("Notification").new_(em_Val_from(title))) {
        return Notification(em_Val_new(em_Val_global("Notification", em_Val_from(title)));
      }


Notification Notification_new(const jb_DOMString* title, const NotificationOptions* options) : EventTarget(em_Val_global("Notification").new_(em_Val_from(title), em_Val_from(options))) {
        return Notification(em_Val_new(em_Val_global("Notification", em_Val_from(title), em_Val_from(options)));
      }


NotificationPermission Notification_permission() {
    return em_Val_as(NotificationPermission, em_Val_get(em_Val_global("notification", "permission")));
}


jb_Promise Notification_requestPermission(Notification* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("notification"), "requestPermission"));
}


jb_Promise Notification_requestPermission(Notification* self , const jb_Function* deprecatedCallback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("notification"), "requestPermission", em_Val_from(deprecatedCallback)));
}


unsigned long Notification_maxActions() {
    return em_Val_as(unsigned long, em_Val_get(em_Val_global("notification", "maxActions")));
}


jb_Any Notification_onclick(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclick"));
}


void Notification_set_onclick(Notification* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclick", value);
}


jb_Any Notification_onshow(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onshow"));
}


void Notification_set_onshow(Notification* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onshow", value);
}


jb_Any Notification_onerror(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void Notification_set_onerror(Notification* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any Notification_onclose(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclose"));
}


void Notification_set_onclose(Notification* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclose", value);
}


jb_DOMString Notification_title(const Notification *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "title"));
}


NotificationDirection Notification_dir(const Notification *self) {
    return em_Val_as(NotificationDirection, em_Val_get(EventTarget_as_val(self->inner), "dir"));
}


jb_DOMString Notification_lang(const Notification *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "lang"));
}


jb_DOMString Notification_body(const Notification *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "body"));
}


jb_DOMString Notification_tag(const Notification *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "tag"));
}


jb_USVString Notification_image(const Notification *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "image"));
}


jb_USVString Notification_icon(const Notification *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "icon"));
}


jb_USVString Notification_badge(const Notification *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "badge"));
}


jb_FrozenArray Notification_vibrate(const Notification *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), "vibrate"));
}


jb_Any Notification_timestamp(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "timestamp"));
}


bool Notification_renotify(const Notification *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "renotify"));
}


bool Notification_silent(const Notification *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "silent"));
}


bool Notification_requireInteraction(const Notification *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "requireInteraction"));
}


jb_Any Notification_data(const Notification *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "data"));
}


jb_FrozenArray Notification_actions(const Notification *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), "actions"));
}


jb_Undefined Notification_close(Notification* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}

