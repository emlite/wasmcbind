#include <webbind/KeyframeEffectOptions.h>

DEFINE_EMLITE_TYPE(KeyframeEffectOptions, EffectTiming);


CompositeOperation KeyframeEffectOptions_composite(const KeyframeEffectOptions *self) {
    return em_Val_as(CompositeOperation, em_Val_get(EffectTiming_as_val(self->inner), em_Val_from("composite")));
}


void KeyframeEffectOptions_set_composite(KeyframeEffectOptions* self, CompositeOperation * value) {
    em_Val_set(EffectTiming_as_val(self->inner), em_Val_from("composite"), em_Val_from(value));
}


jb_String KeyframeEffectOptions_pseudoElement(const KeyframeEffectOptions *self) {
    return em_Val_as(jb_String, em_Val_get(EffectTiming_as_val(self->inner), em_Val_from("pseudoElement")));
}


void KeyframeEffectOptions_set_pseudoElement(KeyframeEffectOptions* self, jb_String * value) {
    em_Val_set(EffectTiming_as_val(self->inner), em_Val_from("pseudoElement"), em_Val_from(value));
}


KeyframeEffectOptions KeyframeEffectOptions_new() {
    em_Val obj = em_Val_object();
    return KeyframeEffectOptions_from_val(&obj);
}

