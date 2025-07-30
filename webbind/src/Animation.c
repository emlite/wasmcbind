#include <webbind/Animation.h>
#include <webbind/AnimationEffect.h>
#include <webbind/AnimationTimeline.h>
#include <webbind/AnimationTrigger.h>


DEFINE_EMLITE_TYPE(Animation, EventTarget);


Animation Animation_new0() {
        em_Val vv = em_Val_new(em_Val_global("Animation") );
        return Animation_from_val(&vv);
      }


Animation Animation_new1(AnimationEffect * effect) {
        em_Val vv = em_Val_new(em_Val_global("Animation") , em_Val_from(effect));
        return Animation_from_val(&vv);
      }


Animation Animation_new2(AnimationEffect * effect, AnimationTimeline * timeline) {
        em_Val vv = em_Val_new(em_Val_global("Animation") , em_Val_from(effect), em_Val_from(timeline));
        return Animation_from_val(&vv);
      }


jb_String Animation_id(const Animation *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


void Animation_set_id(Animation* self, jb_String * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


AnimationEffect Animation_effect(const Animation *self) {
    return em_Val_as(AnimationEffect, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("effect")));
}


void Animation_set_effect(Animation* self, AnimationEffect * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("effect"), em_Val_from(value));
}


AnimationTimeline Animation_timeline(const Animation *self) {
    return em_Val_as(AnimationTimeline, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("timeline")));
}


void Animation_set_timeline(Animation* self, AnimationTimeline * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("timeline"), em_Val_from(value));
}


double Animation_playbackRate(const Animation *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("playbackRate")));
}


void Animation_set_playbackRate(Animation* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("playbackRate"), em_Val_from(value));
}


AnimationPlayState Animation_playState(const Animation *self) {
    return em_Val_as(AnimationPlayState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("playState")));
}


AnimationReplaceState Animation_replaceState(const Animation *self) {
    return em_Val_as(AnimationReplaceState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("replaceState")));
}


bool Animation_pending(const Animation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pending")));
}


jb_Promise Animation_ready(const Animation *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ready")));
}


jb_Promise Animation_finished(const Animation *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("finished")));
}


jb_Any Animation_onfinish(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onfinish")));
}


void Animation_set_onfinish(Animation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onfinish"), em_Val_from(value));
}


jb_Any Animation_oncancel(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncancel")));
}


void Animation_set_oncancel(Animation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncancel"), em_Val_from(value));
}


jb_Any Animation_onremove(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onremove")));
}


void Animation_set_onremove(Animation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onremove"), em_Val_from(value));
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
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("startTime")));
}


void Animation_set_startTime(Animation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("startTime"), em_Val_from(value));
}


jb_Any Animation_currentTime(const Animation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("currentTime")));
}


void Animation_set_currentTime(Animation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("currentTime"), em_Val_from(value));
}


AnimationTrigger Animation_trigger(const Animation *self) {
    return em_Val_as(AnimationTrigger, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("trigger")));
}


void Animation_set_trigger(Animation* self, AnimationTrigger * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("trigger"), em_Val_from(value));
}


double Animation_overallProgress(const Animation *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("overallProgress")));
}

