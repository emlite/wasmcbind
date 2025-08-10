#include <webbind/MLRankRange.h>

DEFINE_EMLITE_TYPE(MLRankRange, em_Val);


unsigned long MLRankRange_min(const MLRankRange *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("min")));
}


void MLRankRange_set_min(MLRankRange* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}


unsigned long MLRankRange_max(const MLRankRange *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("max")));
}


void MLRankRange_set_max(MLRankRange* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("max"), em_Val_from(value));
}


MLRankRange MLRankRange_new() {
    em_Val obj = em_Val_object();
    return MLRankRange_from_val(&obj);
}

