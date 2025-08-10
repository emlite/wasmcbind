#include <webbind/AnimationEffect.h>

#include <webbind/EffectTiming.h>
#include <webbind/ComputedEffectTiming.h>
#include <webbind/OptionalEffectTiming.h>
#include <webbind/GroupEffect.h>

DEFINE_EMLITE_TYPE(AnimationEffect, em_Val);


EffectTiming AnimationEffect_getTiming(AnimationEffect* self ) {
    return em_Val_as(EffectTiming, em_Val_call(em_Val_as_val(self->inner), "getTiming"));
}


ComputedEffectTiming AnimationEffect_getComputedTiming(AnimationEffect* self ) {
    return em_Val_as(ComputedEffectTiming, em_Val_call(em_Val_as_val(self->inner), "getComputedTiming"));
}


jb_Undefined AnimationEffect_updateTiming0(AnimationEffect* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateTiming"));
}


jb_Undefined AnimationEffect_updateTiming1(AnimationEffect* self , OptionalEffectTiming * timing) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateTiming", em_Val_from(timing)));
}


GroupEffect AnimationEffect_parent(const AnimationEffect *self) {
    return em_Val_as(GroupEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parent")));
}


AnimationEffect AnimationEffect_previousSibling(const AnimationEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("previousSibling")));
}


AnimationEffect AnimationEffect_nextSibling(const AnimationEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("nextSibling")));
}


jb_Undefined AnimationEffect_before(AnimationEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "before", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_after(AnimationEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "after", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_replace(AnimationEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replace", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_remove(AnimationEffect* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "remove"));
}

