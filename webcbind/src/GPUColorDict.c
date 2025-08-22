#include <webcbind/GPUColorDict.h>

DEFINE_EMLITE_TYPE(GPUColorDict, em_Val);


double GPUColorDict_r(const GPUColorDict *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("r")));
}


void GPUColorDict_set_r(GPUColorDict* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("r"), em_Val_from(value));
}


double GPUColorDict_g(const GPUColorDict *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("g")));
}


void GPUColorDict_set_g(GPUColorDict* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("g"), em_Val_from(value));
}


double GPUColorDict_b(const GPUColorDict *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("b")));
}


void GPUColorDict_set_b(GPUColorDict* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


double GPUColorDict_a(const GPUColorDict *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("a")));
}


void GPUColorDict_set_a(GPUColorDict* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


GPUColorDict GPUColorDict_new() {
    em_Val obj = em_Val_object();
    return GPUColorDict_from_val(&obj);
}

