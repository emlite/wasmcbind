#include <webcbind/LockInfo.h>

DEFINE_EMLITE_TYPE(LockInfo, em_Val);


jb_String LockInfo_name(const LockInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void LockInfo_set_name(LockInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


LockMode LockInfo_mode(const LockInfo *self) {
    return em_Val_as(LockMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void LockInfo_set_mode(LockInfo* self, LockMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


jb_String LockInfo_clientId(const LockInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientId")));
}


void LockInfo_set_clientId(LockInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientId"), em_Val_from(value));
}


LockInfo LockInfo_new() {
    em_Val obj = em_Val_object();
    return LockInfo_from_val(&obj);
}

