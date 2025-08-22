#include <webcbind/UALowEntropyJSON.h>

DEFINE_EMLITE_TYPE(UALowEntropyJSON, em_Val);


jb_Array UALowEntropyJSON_brands(const UALowEntropyJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("brands")));
}


void UALowEntropyJSON_set_brands(UALowEntropyJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("brands"), em_Val_from(value));
}


bool UALowEntropyJSON_mobile(const UALowEntropyJSON *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mobile")));
}


void UALowEntropyJSON_set_mobile(UALowEntropyJSON* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mobile"), em_Val_from(value));
}


jb_String UALowEntropyJSON_platform(const UALowEntropyJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platform")));
}


void UALowEntropyJSON_set_platform(UALowEntropyJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("platform"), em_Val_from(value));
}


UALowEntropyJSON UALowEntropyJSON_new() {
    em_Val obj = em_Val_object();
    return UALowEntropyJSON_from_val(&obj);
}

