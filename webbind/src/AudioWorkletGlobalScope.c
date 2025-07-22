#include <webbind/AudioWorkletGlobalScope.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(AudioWorkletGlobalScope, WorkletGlobalScope);


jb_Undefined AudioWorkletGlobalScope_registerProcessor(AudioWorkletGlobalScope* self , const jb_DOMString* name, const jb_Function* processorCtor) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkletGlobalScope_as_val(self->inner), "registerProcessor", em_Val_from(name), em_Val_from(processorCtor)));
}


long long AudioWorkletGlobalScope_currentFrame(const AudioWorkletGlobalScope *self) {
    return em_Val_as(long long, em_Val_get(WorkletGlobalScope_as_val(self->inner), "currentFrame"));
}


double AudioWorkletGlobalScope_currentTime(const AudioWorkletGlobalScope *self) {
    return em_Val_as(double, em_Val_get(WorkletGlobalScope_as_val(self->inner), "currentTime"));
}


float AudioWorkletGlobalScope_sampleRate(const AudioWorkletGlobalScope *self) {
    return em_Val_as(float, em_Val_get(WorkletGlobalScope_as_val(self->inner), "sampleRate"));
}


unsigned long AudioWorkletGlobalScope_renderQuantumSize(const AudioWorkletGlobalScope *self) {
    return em_Val_as(unsigned long, em_Val_get(WorkletGlobalScope_as_val(self->inner), "renderQuantumSize"));
}


jb_Any AudioWorkletGlobalScope_port(const AudioWorkletGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkletGlobalScope_as_val(self->inner), "port"));
}

