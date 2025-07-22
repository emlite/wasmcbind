#include <webbind/KeyframeEffect.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(KeyframeEffect, AnimationEffect);


KeyframeEffect KeyframeEffect_new(const KeyframeEffect* source) : AnimationEffect(em_Val_global("KeyframeEffect").new_(em_Val_from(source))) {
        return KeyframeEffect(em_Val_new(em_Val_global("KeyframeEffect", em_Val_from(source)));
      }


Element KeyframeEffect_target(const KeyframeEffect *self) {
    return em_Val_as(Element, em_Val_get(AnimationEffect_as_val(self->inner), "target"));
}


void KeyframeEffect_set_target(KeyframeEffect* self, const Element* value) {
    em_Val_set(AnimationEffect_as_val(self->inner), "target", value);
}


jb_CSSOMString KeyframeEffect_pseudoElement(const KeyframeEffect *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(AnimationEffect_as_val(self->inner), "pseudoElement"));
}


void KeyframeEffect_set_pseudoElement(KeyframeEffect* self, const jb_CSSOMString* value) {
    em_Val_set(AnimationEffect_as_val(self->inner), "pseudoElement", value);
}


CompositeOperation KeyframeEffect_composite(const KeyframeEffect *self) {
    return em_Val_as(CompositeOperation, em_Val_get(AnimationEffect_as_val(self->inner), "composite"));
}


void KeyframeEffect_set_composite(KeyframeEffect* self, const CompositeOperation* value) {
    em_Val_set(AnimationEffect_as_val(self->inner), "composite", value);
}


jb_Sequence KeyframeEffect_getKeyframes(KeyframeEffect* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(AnimationEffect_as_val(self->inner), "getKeyframes"));
}


jb_Undefined KeyframeEffect_setKeyframes(KeyframeEffect* self , const jb_Object* keyframes) {
    return em_Val_as(jb_Undefined, em_Val_call(AnimationEffect_as_val(self->inner), "setKeyframes", em_Val_from(keyframes)));
}


IterationCompositeOperation KeyframeEffect_iterationComposite(const KeyframeEffect *self) {
    return em_Val_as(IterationCompositeOperation, em_Val_get(AnimationEffect_as_val(self->inner), "iterationComposite"));
}


void KeyframeEffect_set_iterationComposite(KeyframeEffect* self, const IterationCompositeOperation* value) {
    em_Val_set(AnimationEffect_as_val(self->inner), "iterationComposite", value);
}

