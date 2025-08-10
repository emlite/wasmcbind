#include <webbind/GPUOrigin3DDict.h>

DEFINE_EMLITE_TYPE(GPUOrigin3DDict, em_Val);


jb_Any GPUOrigin3DDict_x(const GPUOrigin3DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void GPUOrigin3DDict_set_x(GPUOrigin3DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


jb_Any GPUOrigin3DDict_y(const GPUOrigin3DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void GPUOrigin3DDict_set_y(GPUOrigin3DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


jb_Any GPUOrigin3DDict_z(const GPUOrigin3DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("z")));
}


void GPUOrigin3DDict_set_z(GPUOrigin3DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}


GPUOrigin3DDict GPUOrigin3DDict_new() {
    em_Val obj = em_Val_object();
    return GPUOrigin3DDict_from_val(&obj);
}

