#include <webbind/MIDIInput.h>


DEFINE_EMLITE_TYPE(MIDIInput, MIDIPort);


jb_Any MIDIInput_onmidimessage(const MIDIInput *self) {
    return em_Val_as(jb_Any, em_Val_get(MIDIPort_as_val(self->inner), "onmidimessage"));
}


void MIDIInput_set_onmidimessage(MIDIInput* self, const jb_Any* value) {
    em_Val_set(MIDIPort_as_val(self->inner), "onmidimessage", value);
}

