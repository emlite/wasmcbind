#include <webbind/FormDataEventInit.h>

#include <webbind/FormData.h>

DEFINE_EMLITE_TYPE(FormDataEventInit, EventInit);


FormData FormDataEventInit_formData(const FormDataEventInit *self) {
    return em_Val_as(FormData, em_Val_get(EventInit_as_val(self->inner), em_Val_from("formData")));
}


void FormDataEventInit_set_formData(FormDataEventInit* self, FormData * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("formData"), em_Val_from(value));
}


FormDataEventInit FormDataEventInit_new() {
    em_Val obj = em_Val_object();
    return FormDataEventInit_from_val(&obj);
}

