#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct AnimationEffect AnimationEffect;
typedef struct AnimationTimeline AnimationTimeline;
typedef struct Animation Animation;
typedef struct AnimationTrigger AnimationTrigger;


typedef struct {
  EventTarget inner;
} Animation;


DECLARE_EMLITE_TYPE(Animation, EventTarget);

Animation Animation_new();

Animation Animation_new(const AnimationEffect* effect);

Animation Animation_new(const AnimationEffect* effect, const AnimationTimeline* timeline);

jb_DOMString Animation_id( const Animation *self);

void Animation_set_id(Animation* self, const jb_DOMString* value);

AnimationEffect Animation_effect( const Animation *self);

void Animation_set_effect(Animation* self, const AnimationEffect* value);

AnimationTimeline Animation_timeline( const Animation *self);

void Animation_set_timeline(Animation* self, const AnimationTimeline* value);

double Animation_playbackRate( const Animation *self);

void Animation_set_playbackRate(Animation* self, double value);

AnimationPlayState Animation_playState( const Animation *self);

AnimationReplaceState Animation_replaceState( const Animation *self);

bool Animation_pending( const Animation *self);

jb_Promise Animation_ready( const Animation *self);

jb_Promise Animation_finished( const Animation *self);

jb_Any Animation_onfinish( const Animation *self);

void Animation_set_onfinish(Animation* self, const jb_Any* value);

jb_Any Animation_oncancel( const Animation *self);

void Animation_set_oncancel(Animation* self, const jb_Any* value);

jb_Any Animation_onremove( const Animation *self);

void Animation_set_onremove(Animation* self, const jb_Any* value);

jb_Undefined Animation_cancel(Animation* self );

jb_Undefined Animation_finish(Animation* self );

jb_Undefined Animation_play(Animation* self );

jb_Undefined Animation_pause(Animation* self );

jb_Undefined Animation_updatePlaybackRate(Animation* self , double playbackRate);

jb_Undefined Animation_reverse(Animation* self );

jb_Undefined Animation_persist(Animation* self );

jb_Undefined Animation_commitStyles(Animation* self );

jb_Any Animation_startTime( const Animation *self);

void Animation_set_startTime(Animation* self, const jb_Any* value);

jb_Any Animation_currentTime( const Animation *self);

void Animation_set_currentTime(Animation* self, const jb_Any* value);

AnimationTrigger Animation_trigger( const Animation *self);

void Animation_set_trigger(Animation* self, const AnimationTrigger* value);

double Animation_overallProgress( const Animation *self);
