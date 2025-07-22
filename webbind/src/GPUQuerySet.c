#include <webbind/GPUQuerySet.h>


DEFINE_EMLITE_TYPE(GPUQuerySet, em_Val);


jb_Undefined GPUQuerySet_destroy(GPUQuerySet* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}


GPUQueryType GPUQuerySet_type(const GPUQuerySet *self) {
    return em_Val_as(GPUQueryType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_Any GPUQuerySet_count(const GPUQuerySet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("count")));
}


jb_USVString GPUQuerySet_label(const GPUQuerySet *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUQuerySet_set_label(GPUQuerySet* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

