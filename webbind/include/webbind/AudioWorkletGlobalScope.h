#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;

DECLARE_EMLITE_TYPE(AudioWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined AudioWorkletGlobalScope_registerProcessor(AudioWorkletGlobalScope* self , jb_String * name, jb_Function * processorCtor);

long long AudioWorkletGlobalScope_currentFrame(const AudioWorkletGlobalScope *self);

double AudioWorkletGlobalScope_currentTime(const AudioWorkletGlobalScope *self);

float AudioWorkletGlobalScope_sampleRate(const AudioWorkletGlobalScope *self);

unsigned long AudioWorkletGlobalScope_renderQuantumSize(const AudioWorkletGlobalScope *self);

MessagePort AudioWorkletGlobalScope_port(const AudioWorkletGlobalScope *self);

#ifdef __cplusplus
}
#endif
