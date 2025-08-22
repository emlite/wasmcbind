#include <webcbind/NotificationAction.h>

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


jb_String NotificationAction_navigate(const NotificationAction *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("navigate")));
}


void NotificationAction_set_navigate(NotificationAction* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("navigate"), em_Val_from(value));
}


jb_String NotificationAction_icon(const NotificationAction *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icon")));
}


void NotificationAction_set_icon(NotificationAction* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icon"), em_Val_from(value));
}


NotificationAction NotificationAction_new() {
    em_Val obj = em_Val_object();
    return NotificationAction_from_val(&obj);
}

