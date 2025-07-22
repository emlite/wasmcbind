#include <webbind/AudioWorkletProcessor.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(AudioWorkletProcessor, em_Val);


AudioWorkletProcessor AudioWorkletProcessor_new() : em_Val(em_Val_global("AudioWorkletProcessor").new_()) {
        return AudioWorkletProcessor(em_Val_new(em_Val_global("AudioWorkletProcessor", ));
      }


jb_Any AudioWorkletProcessor_port(const AudioWorkletProcessor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "port"));
}

