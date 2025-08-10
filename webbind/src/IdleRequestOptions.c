#include <webbind/IdleRequestOptions.h>

DEFINE_EMLITE_TYPE(IdleRequestOptions, em_Val);


unsigned long IdleRequestOptions_timeout(const IdleRequestOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void IdleRequestOptions_set_timeout(IdleRequestOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


IdleRequestOptions IdleRequestOptions_new() {
    em_Val obj = em_Val_object();
    return IdleRequestOptions_from_val(&obj);
}

