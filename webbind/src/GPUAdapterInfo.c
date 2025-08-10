#include <webbind/GPUAdapterInfo.h>

DEFINE_EMLITE_TYPE(GPUAdapterInfo, em_Val);


jb_String GPUAdapterInfo_vendor(const GPUAdapterInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vendor")));
}


jb_String GPUAdapterInfo_architecture(const GPUAdapterInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("architecture")));
}


jb_String GPUAdapterInfo_device(const GPUAdapterInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("device")));
}


jb_String GPUAdapterInfo_description(const GPUAdapterInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


unsigned long GPUAdapterInfo_subgroupMinSize(const GPUAdapterInfo *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subgroupMinSize")));
}


unsigned long GPUAdapterInfo_subgroupMaxSize(const GPUAdapterInfo *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subgroupMaxSize")));
}


bool GPUAdapterInfo_isFallbackAdapter(const GPUAdapterInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isFallbackAdapter")));
}

