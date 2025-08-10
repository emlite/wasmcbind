#include <webbind/GPUCopyExternalImageDestInfo.h>

DEFINE_EMLITE_TYPE(GPUCopyExternalImageDestInfo, GPUTexelCopyTextureInfo);


PredefinedColorSpace GPUCopyExternalImageDestInfo_colorSpace(const GPUCopyExternalImageDestInfo *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(GPUTexelCopyTextureInfo_as_val(self->inner), em_Val_from("colorSpace")));
}


void GPUCopyExternalImageDestInfo_set_colorSpace(GPUCopyExternalImageDestInfo* self, PredefinedColorSpace * value) {
    em_Val_set(GPUTexelCopyTextureInfo_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


bool GPUCopyExternalImageDestInfo_premultipliedAlpha(const GPUCopyExternalImageDestInfo *self) {
    return em_Val_as(bool, em_Val_get(GPUTexelCopyTextureInfo_as_val(self->inner), em_Val_from("premultipliedAlpha")));
}


void GPUCopyExternalImageDestInfo_set_premultipliedAlpha(GPUCopyExternalImageDestInfo* self, bool value) {
    em_Val_set(GPUTexelCopyTextureInfo_as_val(self->inner), em_Val_from("premultipliedAlpha"), em_Val_from(value));
}


GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo_new() {
    em_Val obj = em_Val_object();
    return GPUCopyExternalImageDestInfo_from_val(&obj);
}

