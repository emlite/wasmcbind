#include <webbind/AnimationNodeList.h>

#include <webbind/AnimationEffect.h>

DEFINE_EMLITE_TYPE(AnimationNodeList, em_Val);


unsigned long AnimationNodeList_length(const AnimationNodeList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


AnimationEffect AnimationNodeList_item(AnimationNodeList* self , unsigned long index) {
    return em_Val_as(AnimationEffect, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}

