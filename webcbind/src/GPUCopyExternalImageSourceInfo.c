#include <webcbind/GPUCopyExternalImageSourceInfo.h>

DEFINE_EMLITE_TYPE(GPUCopyExternalImageSourceInfo, em_Val);


jb_Any GPUCopyExternalImageSourceInfo_source(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void GPUCopyExternalImageSourceInfo_set_source(GPUCopyExternalImageSourceInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


jb_Any GPUCopyExternalImageSourceInfo_origin(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


void GPUCopyExternalImageSourceInfo_set_origin(GPUCopyExternalImageSourceInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


bool GPUCopyExternalImageSourceInfo_flipY(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flipY")));
}


void GPUCopyExternalImageSourceInfo_set_flipY(GPUCopyExternalImageSourceInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flipY"), em_Val_from(value));
}


GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo_new() {
    em_Val obj = em_Val_object();
    return GPUCopyExternalImageSourceInfo_from_val(&obj);
}

