#include <webbind/Presentation.h>

#include <webbind/PresentationRequest.h>
#include <webbind/PresentationReceiver.h>

DEFINE_EMLITE_TYPE(Presentation, em_Val);


PresentationRequest Presentation_defaultRequest(const Presentation *self) {
    return em_Val_as(PresentationRequest, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultRequest")));
}


void Presentation_set_defaultRequest(Presentation* self, PresentationRequest * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("defaultRequest"), em_Val_from(value));
}


PresentationReceiver Presentation_receiver(const Presentation *self) {
    return em_Val_as(PresentationReceiver, em_Val_get(em_Val_as_val(self->inner), em_Val_from("receiver")));
}

