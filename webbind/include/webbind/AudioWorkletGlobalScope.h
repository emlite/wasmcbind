#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"

typedef struct MessagePort MessagePort;


DECLARE_EMLITE_TYPE(AudioWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined AudioWorkletGlobalScope_registerProcessor(AudioWorkletGlobalScope* self , jb_DOMString * name, jb_Function * processorCtor);

long long AudioWorkletGlobalScope_currentFrame( const AudioWorkletGlobalScope *self);

double AudioWorkletGlobalScope_currentTime( const AudioWorkletGlobalScope *self);

float AudioWorkletGlobalScope_sampleRate( const AudioWorkletGlobalScope *self);

unsigned long AudioWorkletGlobalScope_renderQuantumSize( const AudioWorkletGlobalScope *self);

jb_Any AudioWorkletGlobalScope_port( const AudioWorkletGlobalScope *self);
