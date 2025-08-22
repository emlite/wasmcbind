#include <webcbind/MIDIConnectionEventInit.h>

#include <webcbind/MIDIPort.h>

DEFINE_EMLITE_TYPE(MIDIConnectionEventInit, EventInit);


MIDIPort MIDIConnectionEventInit_port(const MIDIConnectionEventInit *self) {
    return em_Val_as(MIDIPort, em_Val_get(EventInit_as_val(self->inner), em_Val_from("port")));
}


void MIDIConnectionEventInit_set_port(MIDIConnectionEventInit* self, MIDIPort * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


MIDIConnectionEventInit MIDIConnectionEventInit_new() {
    em_Val obj = em_Val_object();
    return MIDIConnectionEventInit_from_val(&obj);
}

