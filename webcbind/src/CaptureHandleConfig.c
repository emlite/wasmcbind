#include <webcbind/CaptureHandleConfig.h>

DEFINE_EMLITE_TYPE(CaptureHandleConfig, em_Val);


bool CaptureHandleConfig_exposeOrigin(const CaptureHandleConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exposeOrigin")));
}


void CaptureHandleConfig_set_exposeOrigin(CaptureHandleConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exposeOrigin"), em_Val_from(value));
}


jb_String CaptureHandleConfig_handle(const CaptureHandleConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("handle")));
}


void CaptureHandleConfig_set_handle(CaptureHandleConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("handle"), em_Val_from(value));
}


jb_Array CaptureHandleConfig_permittedOrigins(const CaptureHandleConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("permittedOrigins")));
}


void CaptureHandleConfig_set_permittedOrigins(CaptureHandleConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("permittedOrigins"), em_Val_from(value));
}


CaptureHandleConfig CaptureHandleConfig_new() {
    em_Val obj = em_Val_object();
    return CaptureHandleConfig_from_val(&obj);
}

