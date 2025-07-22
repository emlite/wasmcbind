#include <webbind/NotificationEvent.h>
#include <webbind/Notification.h>


DEFINE_EMLITE_TYPE(NotificationEvent, ExtendableEvent);


NotificationEvent NotificationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("NotificationEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return NotificationEvent(em_Val_new(em_Val_global("NotificationEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Notification NotificationEvent_notification(const NotificationEvent *self) {
    return em_Val_as(Notification, em_Val_get(ExtendableEvent_as_val(self->inner), "notification"));
}


jb_DOMString NotificationEvent_action(const NotificationEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "action"));
}

