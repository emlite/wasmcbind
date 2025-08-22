#include <webcbind/GPUSamplerDescriptor.h>

DEFINE_EMLITE_TYPE(GPUSamplerDescriptor, GPUObjectDescriptorBase);


GPUAddressMode GPUSamplerDescriptor_addressModeU(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("addressModeU")));
}


void GPUSamplerDescriptor_set_addressModeU(GPUSamplerDescriptor* self, GPUAddressMode * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("addressModeU"), em_Val_from(value));
}


GPUAddressMode GPUSamplerDescriptor_addressModeV(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("addressModeV")));
}


void GPUSamplerDescriptor_set_addressModeV(GPUSamplerDescriptor* self, GPUAddressMode * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("addressModeV"), em_Val_from(value));
}


GPUAddressMode GPUSamplerDescriptor_addressModeW(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("addressModeW")));
}


void GPUSamplerDescriptor_set_addressModeW(GPUSamplerDescriptor* self, GPUAddressMode * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("addressModeW"), em_Val_from(value));
}


GPUFilterMode GPUSamplerDescriptor_magFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUFilterMode, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("magFilter")));
}


void GPUSamplerDescriptor_set_magFilter(GPUSamplerDescriptor* self, GPUFilterMode * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("magFilter"), em_Val_from(value));
}


GPUFilterMode GPUSamplerDescriptor_minFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUFilterMode, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("minFilter")));
}


void GPUSamplerDescriptor_set_minFilter(GPUSamplerDescriptor* self, GPUFilterMode * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("minFilter"), em_Val_from(value));
}


GPUMipmapFilterMode GPUSamplerDescriptor_mipmapFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUMipmapFilterMode, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mipmapFilter")));
}


void GPUSamplerDescriptor_set_mipmapFilter(GPUSamplerDescriptor* self, GPUMipmapFilterMode * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mipmapFilter"), em_Val_from(value));
}


float GPUSamplerDescriptor_lodMinClamp(const GPUSamplerDescriptor *self) {
    return em_Val_as(float, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("lodMinClamp")));
}


void GPUSamplerDescriptor_set_lodMinClamp(GPUSamplerDescriptor* self, float value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("lodMinClamp"), em_Val_from(value));
}


float GPUSamplerDescriptor_lodMaxClamp(const GPUSamplerDescriptor *self) {
    return em_Val_as(float, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("lodMaxClamp")));
}


void GPUSamplerDescriptor_set_lodMaxClamp(GPUSamplerDescriptor* self, float value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("lodMaxClamp"), em_Val_from(value));
}


GPUCompareFunction GPUSamplerDescriptor_compare(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUCompareFunction, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("compare")));
}


void GPUSamplerDescriptor_set_compare(GPUSamplerDescriptor* self, GPUCompareFunction * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("compare"), em_Val_from(value));
}


unsigned short GPUSamplerDescriptor_maxAnisotropy(const GPUSamplerDescriptor *self) {
    return em_Val_as(unsigned short, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("maxAnisotropy")));
}


void GPUSamplerDescriptor_set_maxAnisotropy(GPUSamplerDescriptor* self, unsigned short value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("maxAnisotropy"), em_Val_from(value));
}


GPUSamplerDescriptor GPUSamplerDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUSamplerDescriptor_from_val(&obj);
}

