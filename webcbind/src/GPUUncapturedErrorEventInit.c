#include <webcbind/GPUUncapturedErrorEventInit.h>

#include <webcbind/GPUError.h>

DEFINE_EMLITE_TYPE(GPUUncapturedErrorEventInit, EventInit);


GPUError GPUUncapturedErrorEventInit_error(const GPUUncapturedErrorEventInit *self) {
    return em_Val_as(GPUError, em_Val_get(EventInit_as_val(self->inner), em_Val_from("error")));
}


void GPUUncapturedErrorEventInit_set_error(GPUUncapturedErrorEventInit* self, GPUError * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


GPUUncapturedErrorEventInit GPUUncapturedErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return GPUUncapturedErrorEventInit_from_val(&obj);
}

