#include <webcbind/MLOpSupportLimits.h>

DEFINE_EMLITE_TYPE(MLOpSupportLimits, em_Val);


MLWhereSupportLimits MLOpSupportLimits_where(const MLOpSupportLimits *self) {
    return em_Val_as(MLWhereSupportLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("where")));
}


void MLOpSupportLimits_set_where(MLOpSupportLimits* self, MLWhereSupportLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("where"), em_Val_from(value));
}


MLOpSupportLimits MLOpSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLOpSupportLimits_from_val(&obj);
}

