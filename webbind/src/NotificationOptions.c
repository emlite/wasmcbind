#include <webbind/NotificationOptions.h>

DEFINE_EMLITE_TYPE(NotificationOptions, em_Val);


NotificationDirection NotificationOptions_dir(const NotificationOptions *self) {
    return em_Val_as(NotificationDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dir")));
}


void NotificationOptions_set_dir(NotificationOptions* self, NotificationDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dir"), em_Val_from(value));
}


jb_String NotificationOptions_lang(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lang")));
}


void NotificationOptions_set_lang(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lang"), em_Val_from(value));
}


jb_String NotificationOptions_body(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("body")));
}


void NotificationOptions_set_body(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("body"), em_Val_from(value));
}


jb_String NotificationOptions_navigate(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("navigate")));
}


void NotificationOptions_set_navigate(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("navigate"), em_Val_from(value));
}


jb_String NotificationOptions_tag(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tag")));
}


void NotificationOptions_set_tag(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tag"), em_Val_from(value));
}


jb_String NotificationOptions_image(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("image")));
}


void NotificationOptions_set_image(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("image"), em_Val_from(value));
}


jb_String NotificationOptions_icon(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icon")));
}


void NotificationOptions_set_icon(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icon"), em_Val_from(value));
}


jb_String NotificationOptions_badge(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("badge")));
}


void NotificationOptions_set_badge(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("badge"), em_Val_from(value));
}


jb_Any NotificationOptions_vibrate(const NotificationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vibrate")));
}


void NotificationOptions_set_vibrate(NotificationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("vibrate"), em_Val_from(value));
}


jb_Any NotificationOptions_timestamp(const NotificationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void NotificationOptions_set_timestamp(NotificationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


bool NotificationOptions_renotify(const NotificationOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renotify")));
}


void NotificationOptions_set_renotify(NotificationOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renotify"), em_Val_from(value));
}


bool NotificationOptions_silent(const NotificationOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("silent")));
}


void NotificationOptions_set_silent(NotificationOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("silent"), em_Val_from(value));
}


bool NotificationOptions_requireInteraction(const NotificationOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requireInteraction")));
}


void NotificationOptions_set_requireInteraction(NotificationOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requireInteraction"), em_Val_from(value));
}


jb_Any NotificationOptions_data(const NotificationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void NotificationOptions_set_data(NotificationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_Array NotificationOptions_actions(const NotificationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("actions")));
}


void NotificationOptions_set_actions(NotificationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("actions"), em_Val_from(value));
}


NotificationOptions NotificationOptions_new() {
    em_Val obj = em_Val_object();
    return NotificationOptions_from_val(&obj);
}

