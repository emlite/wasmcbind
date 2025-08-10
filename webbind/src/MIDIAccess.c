#include <webbind/MIDIAccess.h>

#include <webbind/MIDIInputMap.h>
#include <webbind/MIDIOutputMap.h>

DEFINE_EMLITE_TYPE(MIDIAccess, EventTarget);


MIDIInputMap MIDIAccess_inputs(const MIDIAccess *self) {
    return em_Val_as(MIDIInputMap, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("inputs")));
}


MIDIOutputMap MIDIAccess_outputs(const MIDIAccess *self) {
    return em_Val_as(MIDIOutputMap, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("outputs")));
}


jb_Any MIDIAccess_onstatechange(const MIDIAccess *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstatechange")));
}


void MIDIAccess_set_onstatechange(MIDIAccess* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstatechange"), em_Val_from(value));
}


bool MIDIAccess_sysexEnabled(const MIDIAccess *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sysexEnabled")));
}

