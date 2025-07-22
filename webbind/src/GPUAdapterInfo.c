#include <webbind/GPUAdapterInfo.h>


DEFINE_EMLITE_TYPE(GPUAdapterInfo, em_Val);


jb_DOMString GPUAdapterInfo_vendor(const GPUAdapterInfo *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "vendor"));
}


jb_DOMString GPUAdapterInfo_architecture(const GPUAdapterInfo *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "architecture"));
}


jb_DOMString GPUAdapterInfo_device(const GPUAdapterInfo *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "device"));
}


jb_DOMString GPUAdapterInfo_description(const GPUAdapterInfo *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "description"));
}


unsigned long GPUAdapterInfo_subgroupMinSize(const GPUAdapterInfo *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "subgroupMinSize"));
}


unsigned long GPUAdapterInfo_subgroupMaxSize(const GPUAdapterInfo *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "subgroupMaxSize"));
}


bool GPUAdapterInfo_isFallbackAdapter(const GPUAdapterInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "isFallbackAdapter"));
}

