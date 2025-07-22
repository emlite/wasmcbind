#include <webbind/FormDataEvent.h>
#include <webbind/FormData.h>


DEFINE_EMLITE_TYPE(FormDataEvent, Event);


FormDataEvent FormDataEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("FormDataEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return FormDataEvent(em_Val_new(em_Val_global("FormDataEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


FormData FormDataEvent_formData(const FormDataEvent *self) {
    return em_Val_as(FormData, em_Val_get(Event_as_val(self->inner), "formData"));
}

