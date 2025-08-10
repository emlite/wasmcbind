#include <webbind/GPUOrigin2DDict.h>

DEFINE_EMLITE_TYPE(GPUOrigin2DDict, em_Val);


jb_Any GPUOrigin2DDict_x(const GPUOrigin2DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void GPUOrigin2DDict_set_x(GPUOrigin2DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


jb_Any GPUOrigin2DDict_y(const GPUOrigin2DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void GPUOrigin2DDict_set_y(GPUOrigin2DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


GPUOrigin2DDict GPUOrigin2DDict_new() {
    em_Val obj = em_Val_object();
    return GPUOrigin2DDict_from_val(&obj);
}

