#include <webbind/AudioWorklet.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(AudioWorklet, Worklet);


jb_Any AudioWorklet_port(const AudioWorklet *self) {
    return em_Val_as(jb_Any, em_Val_get(Worklet_as_val(self->inner), em_Val_from("port")));
}

