#include <webcbind/GPURequestAdapterOptions.h>

DEFINE_EMLITE_TYPE(GPURequestAdapterOptions, em_Val);


jb_String GPURequestAdapterOptions_featureLevel(const GPURequestAdapterOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("featureLevel")));
}


void GPURequestAdapterOptions_set_featureLevel(GPURequestAdapterOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("featureLevel"), em_Val_from(value));
}


GPUPowerPreference GPURequestAdapterOptions_powerPreference(const GPURequestAdapterOptions *self) {
    return em_Val_as(GPUPowerPreference, em_Val_get(em_Val_as_val(self->inner), em_Val_from("powerPreference")));
}


void GPURequestAdapterOptions_set_powerPreference(GPURequestAdapterOptions* self, GPUPowerPreference * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("powerPreference"), em_Val_from(value));
}


bool GPURequestAdapterOptions_forceFallbackAdapter(const GPURequestAdapterOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("forceFallbackAdapter")));
}


void GPURequestAdapterOptions_set_forceFallbackAdapter(GPURequestAdapterOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("forceFallbackAdapter"), em_Val_from(value));
}


bool GPURequestAdapterOptions_xrCompatible(const GPURequestAdapterOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("xrCompatible")));
}


void GPURequestAdapterOptions_set_xrCompatible(GPURequestAdapterOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("xrCompatible"), em_Val_from(value));
}


GPURequestAdapterOptions GPURequestAdapterOptions_new() {
    em_Val obj = em_Val_object();
    return GPURequestAdapterOptions_from_val(&obj);
}

