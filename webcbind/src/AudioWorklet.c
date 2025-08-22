#include <webcbind/AudioWorklet.h>

#include <webcbind/MessagePort.h>

DEFINE_EMLITE_TYPE(AudioWorklet, Worklet);


MessagePort AudioWorklet_port(const AudioWorklet *self) {
    return em_Val_as(MessagePort, em_Val_get(Worklet_as_val(self->inner), em_Val_from("port")));
}

