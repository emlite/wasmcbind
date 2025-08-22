#include <webcbind/BaseComputedKeyframe.h>

DEFINE_EMLITE_TYPE(BaseComputedKeyframe, em_Val);


double BaseComputedKeyframe_offset(const BaseComputedKeyframe *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void BaseComputedKeyframe_set_offset(BaseComputedKeyframe* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


double BaseComputedKeyframe_computedOffset(const BaseComputedKeyframe *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("computedOffset")));
}


void BaseComputedKeyframe_set_computedOffset(BaseComputedKeyframe* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("computedOffset"), em_Val_from(value));
}


jb_String BaseComputedKeyframe_easing(const BaseComputedKeyframe *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("easing")));
}


void BaseComputedKeyframe_set_easing(BaseComputedKeyframe* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("easing"), em_Val_from(value));
}


CompositeOperationOrAuto BaseComputedKeyframe_composite(const BaseComputedKeyframe *self) {
    return em_Val_as(CompositeOperationOrAuto, em_Val_get(em_Val_as_val(self->inner), em_Val_from("composite")));
}


void BaseComputedKeyframe_set_composite(BaseComputedKeyframe* self, CompositeOperationOrAuto * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("composite"), em_Val_from(value));
}


BaseComputedKeyframe BaseComputedKeyframe_new() {
    em_Val obj = em_Val_object();
    return BaseComputedKeyframe_from_val(&obj);
}

