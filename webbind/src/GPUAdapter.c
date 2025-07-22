#include <webbind/GPUAdapter.h>
#include <webbind/GPUSupportedFeatures.h>
#include <webbind/GPUSupportedLimits.h>
#include <webbind/GPUAdapterInfo.h>
#include <webbind/GPUDevice.h>


DEFINE_EMLITE_TYPE(GPUDeviceDescriptor, em_Val);


jb_Sequence GPUDeviceDescriptor_requiredFeatures(const GPUDeviceDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requiredFeatures")));
}


void GPUDeviceDescriptor_set_requiredFeatures(GPUDeviceDescriptor* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requiredFeatures"), em_Val_from(value));
}


jb_Record GPUDeviceDescriptor_requiredLimits(const GPUDeviceDescriptor *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requiredLimits")));
}


void GPUDeviceDescriptor_set_requiredLimits(GPUDeviceDescriptor* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requiredLimits"), em_Val_from(value));
}


jb_Any GPUDeviceDescriptor_defaultQueue(const GPUDeviceDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultQueue")));
}


void GPUDeviceDescriptor_set_defaultQueue(GPUDeviceDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("defaultQueue"), em_Val_from(value));
}

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

