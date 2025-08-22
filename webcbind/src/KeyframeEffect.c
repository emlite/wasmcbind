#include <webcbind/KeyframeEffect.h>

#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(KeyframeEffect, AnimationEffect);


KeyframeEffect KeyframeEffect_new(KeyframeEffect * source) {
        em_Val vv = em_Val_new(em_Val_global("KeyframeEffect") , em_Val_from(source));
        return KeyframeEffect_from_val(&vv);
      }


Element KeyframeEffect_target(const KeyframeEffect *self) {
    return em_Val_as(Element, em_Val_get(AnimationEffect_as_val(self->inner), em_Val_from("target")));
}


void KeyframeEffect_set_target(KeyframeEffect* self, Element * value) {
    em_Val_set(AnimationEffect_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}


jb_String KeyframeEffect_pseudoElement(const KeyframeEffect *self) {
    return em_Val_as(jb_String, em_Val_get(AnimationEffect_as_val(self->inner), em_Val_from("pseudoElement")));
}


void KeyframeEffect_set_pseudoElement(KeyframeEffect* self, jb_String * value) {
    em_Val_set(AnimationEffect_as_val(self->inner), em_Val_from("pseudoElement"), em_Val_from(value));
}


CompositeOperation KeyframeEffect_composite(const KeyframeEffect *self) {
    return em_Val_as(CompositeOperation, em_Val_get(AnimationEffect_as_val(self->inner), em_Val_from("composite")));
}


void KeyframeEffect_set_composite(KeyframeEffect* self, CompositeOperation * value) {
    em_Val_set(AnimationEffect_as_val(self->inner), em_Val_from("composite"), em_Val_from(value));
}


jb_Array KeyframeEffect_getKeyframes(KeyframeEffect* self ) {
    return em_Val_as(jb_Array, em_Val_call(AnimationEffect_as_val(self->inner), "getKeyframes"));
}


jb_Undefined KeyframeEffect_setKeyframes(KeyframeEffect* self , jb_Object * keyframes) {
    return em_Val_as(jb_Undefined, em_Val_call(AnimationEffect_as_val(self->inner), "setKeyframes", em_Val_from(keyframes)));
}


IterationCompositeOperation KeyframeEffect_iterationComposite(const KeyframeEffect *self) {
    return em_Val_as(IterationCompositeOperation, em_Val_get(AnimationEffect_as_val(self->inner), em_Val_from("iterationComposite")));
}


void KeyframeEffect_set_iterationComposite(KeyframeEffect* self, IterationCompositeOperation * value) {
    em_Val_set(AnimationEffect_as_val(self->inner), em_Val_from("iterationComposite"), em_Val_from(value));
}

