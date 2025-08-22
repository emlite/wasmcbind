#include <webcbind/GPUAdapter.h>

#include <webcbind/GPUSupportedFeatures.h>
#include <webcbind/GPUSupportedLimits.h>
#include <webcbind/GPUAdapterInfo.h>
#include <webcbind/GPUDevice.h>
#include <webcbind/GPUDeviceDescriptor.h>

DEFINE_EMLITE_TYPE(GPUAdapter, em_Val);


GPUSupportedFeatures GPUAdapter_features(const GPUAdapter *self) {
    return em_Val_as(GPUSupportedFeatures, em_Val_get(em_Val_as_val(self->inner), em_Val_from("features")));
}


GPUSupportedLimits GPUAdapter_limits(const GPUAdapter *self) {
    return em_Val_as(GPUSupportedLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("limits")));
}


GPUAdapterInfo GPUAdapter_info(const GPUAdapter *self) {
    return em_Val_as(GPUAdapterInfo, em_Val_get(em_Val_as_val(self->inner), em_Val_from("info")));
}


jb_Promise GPUAdapter_requestDevice0(GPUAdapter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestDevice"));
}


jb_Promise GPUAdapter_requestDevice1(GPUAdapter* self , GPUDeviceDescriptor * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestDevice", em_Val_from(descriptor)));
}

