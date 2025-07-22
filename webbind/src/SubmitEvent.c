#include <webbind/SubmitEvent.h>
#include <webbind/HTMLElement.h>


DEFINE_EMLITE_TYPE(SubmitEvent, Event);


SubmitEvent SubmitEvent_new(const jb_DOMString* type) : Event(em_Val_global("SubmitEvent").new_(em_Val_from(type))) {
        return SubmitEvent(em_Val_new(em_Val_global("SubmitEvent", em_Val_from(type)));
      }


SubmitEvent SubmitEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("SubmitEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SubmitEvent(em_Val_new(em_Val_global("SubmitEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


HTMLElement SubmitEvent_submitter(const SubmitEvent *self) {
    return em_Val_as(HTMLElement, em_Val_get(Event_as_val(self->inner), "submitter"));
}

