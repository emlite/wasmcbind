#include <webbind/MLContextLostInfo.h>

DEFINE_EMLITE_TYPE(MLContextLostInfo, em_Val);


jb_String MLContextLostInfo_message(const MLContextLostInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}


void MLContextLostInfo_set_message(MLContextLostInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


MLContextLostInfo MLContextLostInfo_new() {
    em_Val obj = em_Val_object();
    return MLContextLostInfo_from_val(&obj);
}

