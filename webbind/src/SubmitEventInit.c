#include <webbind/SubmitEventInit.h>

#include <webbind/HTMLElement.h>

DEFINE_EMLITE_TYPE(SubmitEventInit, EventInit);


HTMLElement SubmitEventInit_submitter(const SubmitEventInit *self) {
    return em_Val_as(HTMLElement, em_Val_get(EventInit_as_val(self->inner), em_Val_from("submitter")));
}


void SubmitEventInit_set_submitter(SubmitEventInit* self, HTMLElement * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("submitter"), em_Val_from(value));
}


SubmitEventInit SubmitEventInit_new() {
    em_Val obj = em_Val_object();
    return SubmitEventInit_from_val(&obj);
}

