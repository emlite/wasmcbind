#include <webbind/PushEvent.h>
#include <webbind/PushMessageData.h>


DEFINE_EMLITE_TYPE(PushEvent, ExtendableEvent);


PushEvent PushEvent_new(const jb_DOMString* type) : ExtendableEvent(em_Val_global("PushEvent").new_(em_Val_from(type))) {
        return PushEvent(em_Val_new(em_Val_global("PushEvent", em_Val_from(type)));
      }


PushEvent PushEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("PushEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PushEvent(em_Val_new(em_Val_global("PushEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


PushMessageData PushEvent_data(const PushEvent *self) {
    return em_Val_as(PushMessageData, em_Val_get(ExtendableEvent_as_val(self->inner), "data"));
}

