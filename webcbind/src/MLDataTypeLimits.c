#include <webcbind/MLDataTypeLimits.h>

DEFINE_EMLITE_TYPE(MLDataTypeLimits, em_Val);


jb_Any MLDataTypeLimits_dataTypes(const MLDataTypeLimits *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataTypes")));
}


void MLDataTypeLimits_set_dataTypes(MLDataTypeLimits* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataTypes"), em_Val_from(value));
}


MLDataTypeLimits MLDataTypeLimits_new() {
    em_Val obj = em_Val_object();
    return MLDataTypeLimits_from_val(&obj);
}

