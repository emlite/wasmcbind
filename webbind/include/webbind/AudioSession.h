#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(AudioSession, EventTarget);

AudioSessionType AudioSession_type(const AudioSession *self);

void AudioSession_set_type(AudioSession* self, AudioSessionType * value);

AudioSessionState AudioSession_state(const AudioSession *self);

jb_Any AudioSession_onstatechange(const AudioSession *self);

void AudioSession_set_onstatechange(AudioSession* self, jb_Any * value);
