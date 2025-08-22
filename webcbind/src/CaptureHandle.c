#include <webcbind/CaptureHandle.h>

DEFINE_EMLITE_TYPE(CaptureHandle, em_Val);


jb_String CaptureHandle_origin(const CaptureHandle *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


void CaptureHandle_set_origin(CaptureHandle* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


jb_String CaptureHandle_handle(const CaptureHandle *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("handle")));
}


void CaptureHandle_set_handle(CaptureHandle* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("handle"), em_Val_from(value));
}


CaptureHandle CaptureHandle_new() {
    em_Val obj = em_Val_object();
    return CaptureHandle_from_val(&obj);
}

