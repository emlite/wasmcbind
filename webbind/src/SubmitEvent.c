#include <webbind/SubmitEvent.h>
#include <webbind/HTMLElement.h>


DEFINE_EMLITE_TYPE(SubmitEvent, Event);


SubmitEvent SubmitEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("SubmitEvent") , em_Val_from(type));
        return SubmitEvent_from_val(&vv);
      }


SubmitEvent SubmitEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SubmitEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SubmitEvent_from_val(&vv);
      }


HTMLElement SubmitEvent_submitter(const SubmitEvent *self) {
    return em_Val_as(HTMLElement, em_Val_get(Event_as_val(self->inner), em_Val_from("submitter")));
}

