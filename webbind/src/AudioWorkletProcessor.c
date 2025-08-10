#include <webbind/AudioWorkletProcessor.h>

#include <webbind/MessagePort.h>

DEFINE_EMLITE_TYPE(AudioWorkletProcessor, em_Val);


AudioWorkletProcessor AudioWorkletProcessor_new() {
        em_Val vv = em_Val_new(em_Val_global("AudioWorkletProcessor") );
        return AudioWorkletProcessor_from_val(&vv);
      }


MessagePort AudioWorkletProcessor_port(const AudioWorkletProcessor *self) {
    return em_Val_as(MessagePort, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}

