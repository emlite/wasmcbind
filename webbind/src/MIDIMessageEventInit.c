#include <webbind/MIDIMessageEventInit.h>

DEFINE_EMLITE_TYPE(MIDIMessageEventInit, EventInit);


jb_Uint8Array MIDIMessageEventInit_data(const MIDIMessageEventInit *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("data")));
}


void MIDIMessageEventInit_set_data(MIDIMessageEventInit* self, jb_Uint8Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


MIDIMessageEventInit MIDIMessageEventInit_new() {
    em_Val obj = em_Val_object();
    return MIDIMessageEventInit_from_val(&obj);
}

