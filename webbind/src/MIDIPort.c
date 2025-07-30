#include <webbind/MIDIPort.h>


DEFINE_EMLITE_TYPE(MIDIPort, EventTarget);


jb_String MIDIPort_id(const MIDIPort *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


jb_String MIDIPort_manufacturer(const MIDIPort *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("manufacturer")));
}


jb_String MIDIPort_name(const MIDIPort *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("name")));
}


MIDIPortType MIDIPort_type(const MIDIPort *self) {
    return em_Val_as(MIDIPortType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("type")));
}


jb_String MIDIPort_version(const MIDIPort *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("version")));
}


MIDIPortDeviceState MIDIPort_state(const MIDIPort *self) {
    return em_Val_as(MIDIPortDeviceState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


MIDIPortConnectionState MIDIPort_connection(const MIDIPort *self) {
    return em_Val_as(MIDIPortConnectionState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("connection")));
}


jb_Any MIDIPort_onstatechange(const MIDIPort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstatechange")));
}


void MIDIPort_set_onstatechange(MIDIPort* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstatechange"), em_Val_from(value));
}


jb_Promise MIDIPort_open(MIDIPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "open"));
}


jb_Promise MIDIPort_close(MIDIPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "close"));
}

