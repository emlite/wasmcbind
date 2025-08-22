#include <webcbind/KeyframeAnimationOptions.h>

#include <webcbind/AnimationTimeline.h>

DEFINE_EMLITE_TYPE(KeyframeAnimationOptions, KeyframeEffectOptions);


jb_String KeyframeAnimationOptions_id(const KeyframeAnimationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(KeyframeEffectOptions_as_val(self->inner), em_Val_from("id")));
}


void KeyframeAnimationOptions_set_id(KeyframeAnimationOptions* self, jb_String * value) {
    em_Val_set(KeyframeEffectOptions_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


AnimationTimeline KeyframeAnimationOptions_timeline(const KeyframeAnimationOptions *self) {
    return em_Val_as(AnimationTimeline, em_Val_get(KeyframeEffectOptions_as_val(self->inner), em_Val_from("timeline")));
}


void KeyframeAnimationOptions_set_timeline(KeyframeAnimationOptions* self, AnimationTimeline * value) {
    em_Val_set(KeyframeEffectOptions_as_val(self->inner), em_Val_from("timeline"), em_Val_from(value));
}


KeyframeAnimationOptions KeyframeAnimationOptions_new() {
    em_Val obj = em_Val_object();
    return KeyframeAnimationOptions_from_val(&obj);
}

