#include <webbind/AnimationPlaybackEventInit.h>

DEFINE_EMLITE_TYPE(AnimationPlaybackEventInit, EventInit);


jb_Any AnimationPlaybackEventInit_currentTime(const AnimationPlaybackEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("currentTime")));
}


void AnimationPlaybackEventInit_set_currentTime(AnimationPlaybackEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("currentTime"), em_Val_from(value));
}


jb_Any AnimationPlaybackEventInit_timelineTime(const AnimationPlaybackEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("timelineTime")));
}


void AnimationPlaybackEventInit_set_timelineTime(AnimationPlaybackEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("timelineTime"), em_Val_from(value));
}


AnimationPlaybackEventInit AnimationPlaybackEventInit_new() {
    em_Val obj = em_Val_object();
    return AnimationPlaybackEventInit_from_val(&obj);
}

