#include <webbind/Animation.h>
#include <webbind/AnimationEffect.h>
#include <webbind/AnimationTimeline.h>
#include <webbind/AnimationTrigger.h>


DEFINE_EMLITE_TYPE(Animation, EventTarget);


Animation Animation_new() : EventTarget(em_Val_global("Animation").new_()) {
        return Animation(em_Val_new(em_Val_global("Animation", ));
      }


Animation Animation_new(const AnimationEffect* effect) : EventTarget(em_Val_global("Animation").new_(em_Val_from(effect))) {
        return Animation(em_Val_new(em_Val_global("Animation", em_Val_from(effect)));
      }


Animation Animation_new(const AnimationEffect* effect, const AnimationTimeline* timeline) : EventTarget(em_Val_global("Animation").new_(em_Val_from(effect), em_Val_from(timeline))) {
        return Animation(em_Val_new(em_Val_global("Animation", em_Val_from(effect), em_Val_from(timeline)));
      }


jb_DOMString Animation_id(const Animation *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


void Animation_set_id(Animation* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "id", value);
}


AnimationEffect Animation_effect(const Animation *self) {
    return em_Val_as(AnimationEffect, em_Val_get(EventTarget_as_val(self->inner), "effect"));
}


void Animation_set_effect(Animation* self, const AnimationEffect* value) {
    em_Val_set(EventTarget_as_val(self->inner), "effect", value);
}


AnimationTimeline Animation_timeline(const Animation *self) {
    return em_Val_as(AnimationTimeline, em_Val_get(EventTarget_as_val(self->inner), "timeline"));
}


void Animation_set_timeline(Animation* self, const AnimationTimeline* value) {
    em_Val_set(EventTarget_as_val(self->inner), "timeline", value);
}


double Animation_playbackRate(const Animation *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "playbackRate"));
}


void Animation_set_playbackRate(Animation* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), "playbackRate", value);
}


AnimationPlayState Animation_playState(const Animation *self) {
    return em_Val_as(AnimationPlayState, em_Val_get(EventTarget_as_val(self->inner), "playState"));
}


AnimationReplaceState Animation_replaceState(const Animation *self) {
    return em_Val_as(AnimationReplaceState, em_Val_get(EventTarget_as_val(self->inner), "replaceState"));
}


bool Animation_pending(const Animation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "pending"));
}


jb_Promise Animation_ready(const Animation *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), "ready"));
}


jb_Promise Animation_finished(const Animation *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), "finished"));
}


jb_Any Animation_onfinish(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onfinish"));
}


void Animation_set_onfinish(Animation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onfinish", value);
}


jb_Any Animation_oncancel(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncancel"));
}


void Animation_set_oncancel(Animation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncancel", value);
}


jb_Any Animation_onremove(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onremove"));
}


void Animation_set_onremove(Animation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onremove", value);
}


jb_Undefined Animation_cancel(Animation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancel"));
}


jb_Undefined Animation_finish(Animation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "finish"));
}


jb_Undefined Animation_play(Animation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "play"));
}


jb_Undefined Animation_pause(Animation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "pause"));
}


jb_Undefined Animation_updatePlaybackRate(Animation* self , double playbackRate) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updatePlaybackRate", em_Val_from(playbackRate)));
}


jb_Undefined Animation_reverse(Animation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "reverse"));
}


jb_Undefined Animation_persist(Animation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "persist"));
}


jb_Undefined Animation_commitStyles(Animation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "commitStyles"));
}


jb_Any Animation_startTime(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "startTime"));
}


void Animation_set_startTime(Animation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "startTime", value);
}


jb_Any Animation_currentTime(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "currentTime"));
}


void Animation_set_currentTime(Animation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "currentTime", value);
}


AnimationTrigger Animation_trigger(const Animation *self) {
    return em_Val_as(AnimationTrigger, em_Val_get(EventTarget_as_val(self->inner), "trigger"));
}


void Animation_set_trigger(Animation* self, const AnimationTrigger* value) {
    em_Val_set(EventTarget_as_val(self->inner), "trigger", value);
}


double Animation_overallProgress(const Animation *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "overallProgress"));
}

