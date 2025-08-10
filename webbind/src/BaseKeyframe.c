#include <webbind/BaseKeyframe.h>

DEFINE_EMLITE_TYPE(BaseKeyframe, em_Val);


double BaseKeyframe_offset(const BaseKeyframe *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void BaseKeyframe_set_offset(BaseKeyframe* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


jb_String BaseKeyframe_easing(const BaseKeyframe *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("easing")));
}


void BaseKeyframe_set_easing(BaseKeyframe* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("easing"), em_Val_from(value));
}


CompositeOperationOrAuto BaseKeyframe_composite(const BaseKeyframe *self) {
    return em_Val_as(CompositeOperationOrAuto, em_Val_get(em_Val_as_val(self->inner), em_Val_from("composite")));
}


void BaseKeyframe_set_composite(BaseKeyframe* self, CompositeOperationOrAuto * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("composite"), em_Val_from(value));
}


BaseKeyframe BaseKeyframe_new() {
    em_Val obj = em_Val_object();
    return BaseKeyframe_from_val(&obj);
}

