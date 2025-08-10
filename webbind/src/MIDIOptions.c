#include <webbind/MIDIOptions.h>

DEFINE_EMLITE_TYPE(MIDIOptions, em_Val);


bool MIDIOptions_sysex(const MIDIOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sysex")));
}


void MIDIOptions_set_sysex(MIDIOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sysex"), em_Val_from(value));
}


bool MIDIOptions_software(const MIDIOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("software")));
}


void MIDIOptions_set_software(MIDIOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("software"), em_Val_from(value));
}


MIDIOptions MIDIOptions_new() {
    em_Val obj = em_Val_object();
    return MIDIOptions_from_val(&obj);
}

