#include <webbind/FormDataEvent.h>

#include <webbind/FormDataEventInit.h>
#include <webbind/FormData.h>

DEFINE_EMLITE_TYPE(FormDataEvent, Event);


FormDataEvent FormDataEvent_new(jb_String * type, FormDataEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("FormDataEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return FormDataEvent_from_val(&vv);
      }


FormData FormDataEvent_formData(const FormDataEvent *self) {
    return em_Val_as(FormData, em_Val_get(Event_as_val(self->inner), em_Val_from("formData")));
}

