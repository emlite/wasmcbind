#include <webcbind/NotificationEvent.h>

#include <webcbind/NotificationEventInit.h>
#include <webcbind/Notification.h>

DEFINE_EMLITE_TYPE(NotificationEvent, ExtendableEvent);


NotificationEvent NotificationEvent_new(jb_String * type, NotificationEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("NotificationEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return NotificationEvent_from_val(&vv);
      }


Notification NotificationEvent_notification(const NotificationEvent *self) {
    return em_Val_as(Notification, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("notification")));
}


jb_String NotificationEvent_action(const NotificationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("action")));
}

