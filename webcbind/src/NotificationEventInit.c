#include <webcbind/NotificationEventInit.h>

#include <webcbind/Notification.h>

DEFINE_EMLITE_TYPE(NotificationEventInit, ExtendableEventInit);


Notification NotificationEventInit_notification(const NotificationEventInit *self) {
    return em_Val_as(Notification, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("notification")));
}


void NotificationEventInit_set_notification(NotificationEventInit* self, Notification * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("notification"), em_Val_from(value));
}


jb_String NotificationEventInit_action(const NotificationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("action")));
}


void NotificationEventInit_set_action(NotificationEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("action"), em_Val_from(value));
}


NotificationEventInit NotificationEventInit_new() {
    em_Val obj = em_Val_object();
    return NotificationEventInit_from_val(&obj);
}

