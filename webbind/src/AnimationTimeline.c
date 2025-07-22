#include <webbind/AnimationTimeline.h>
#include <webbind/Animation.h>
#include <webbind/AnimationEffect.h>


DEFINE_EMLITE_TYPE(AnimationTimeline, em_Val);


jb_Any AnimationTimeline_currentTime(const AnimationTimeline *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "currentTime"));
}


jb_Any AnimationTimeline_duration(const AnimationTimeline *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


Animation AnimationTimeline_play(AnimationTimeline* self ) {
    return em_Val_as(Animation, em_Val_call(em_Val_as_val(self->inner), "play"));
}


Animation AnimationTimeline_play(AnimationTimeline* self , const AnimationEffect* effect) {
    return em_Val_as(Animation, em_Val_call(em_Val_as_val(self->inner), "play", em_Val_from(effect)));
}

