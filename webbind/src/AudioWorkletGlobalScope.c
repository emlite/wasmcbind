#include <webbind/AudioWorkletGlobalScope.h>

#include <webbind/MessagePort.h>

DEFINE_EMLITE_TYPE(AudioWorkletGlobalScope, WorkletGlobalScope);


jb_Undefined AudioWorkletGlobalScope_registerProcessor(AudioWorkletGlobalScope* self , jb_String * name, jb_Function * processorCtor) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkletGlobalScope_as_val(self->inner), "registerProcessor", em_Val_from(name), em_Val_from(processorCtor)));
}


long long AudioWorkletGlobalScope_currentFrame(const AudioWorkletGlobalScope *self) {
    return em_Val_as(long long, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("currentFrame")));
}


double AudioWorkletGlobalScope_currentTime(const AudioWorkletGlobalScope *self) {
    return em_Val_as(double, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("currentTime")));
}


float AudioWorkletGlobalScope_sampleRate(const AudioWorkletGlobalScope *self) {
    return em_Val_as(float, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("sampleRate")));
}


unsigned long AudioWorkletGlobalScope_renderQuantumSize(const AudioWorkletGlobalScope *self) {
    return em_Val_as(unsigned long, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("renderQuantumSize")));
}


MessagePort AudioWorkletGlobalScope_port(const AudioWorkletGlobalScope *self) {
    return em_Val_as(MessagePort, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("port")));
}

