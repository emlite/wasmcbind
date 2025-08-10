#include <webbind/GPUExtent3DDict.h>

DEFINE_EMLITE_TYPE(GPUExtent3DDict, em_Val);


jb_Any GPUExtent3DDict_width(const GPUExtent3DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void GPUExtent3DDict_set_width(GPUExtent3DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_Any GPUExtent3DDict_height(const GPUExtent3DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void GPUExtent3DDict_set_height(GPUExtent3DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


jb_Any GPUExtent3DDict_depthOrArrayLayers(const GPUExtent3DDict *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthOrArrayLayers")));
}


void GPUExtent3DDict_set_depthOrArrayLayers(GPUExtent3DDict* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthOrArrayLayers"), em_Val_from(value));
}


GPUExtent3DDict GPUExtent3DDict_new() {
    em_Val obj = em_Val_object();
    return GPUExtent3DDict_from_val(&obj);
}

