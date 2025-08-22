#include <webcbind/BasePropertyIndexedKeyframe.h>

DEFINE_EMLITE_TYPE(BasePropertyIndexedKeyframe, em_Val);


jb_Any BasePropertyIndexedKeyframe_offset(const BasePropertyIndexedKeyframe *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void BasePropertyIndexedKeyframe_set_offset(BasePropertyIndexedKeyframe* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


jb_Any BasePropertyIndexedKeyframe_easing(const BasePropertyIndexedKeyframe *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("easing")));
}


void BasePropertyIndexedKeyframe_set_easing(BasePropertyIndexedKeyframe* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("easing"), em_Val_from(value));
}


jb_Any BasePropertyIndexedKeyframe_composite(const BasePropertyIndexedKeyframe *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("composite")));
}


void BasePropertyIndexedKeyframe_set_composite(BasePropertyIndexedKeyframe* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("composite"), em_Val_from(value));
}


BasePropertyIndexedKeyframe BasePropertyIndexedKeyframe_new() {
    em_Val obj = em_Val_object();
    return BasePropertyIndexedKeyframe_from_val(&obj);
}

