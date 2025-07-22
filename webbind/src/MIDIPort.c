#include <webbind/MIDIPort.h>


DEFINE_EMLITE_TYPE(MIDIPort, EventTarget);


jb_DOMString MIDIPort_id(const MIDIPort *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


jb_DOMString MIDIPort_manufacturer(const MIDIPort *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "manufacturer"));
}


jb_DOMString MIDIPort_name(const MIDIPort *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "name"));
}


MIDIPortType MIDIPort_type(const MIDIPort *self) {
    return em_Val_as(MIDIPortType, em_Val_get(EventTarget_as_val(self->inner), "type"));
}


jb_DOMString MIDIPort_version(const MIDIPort *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "version"));
}


MIDIPortDeviceState MIDIPort_state(const MIDIPort *self) {
    return em_Val_as(MIDIPortDeviceState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


MIDIPortConnectionState MIDIPort_connection(const MIDIPort *self) {
    return em_Val_as(MIDIPortConnectionState, em_Val_get(EventTarget_as_val(self->inner), "connection"));
}


jb_Any MIDIPort_onstatechange(const MIDIPort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstatechange"));
}


void MIDIPort_set_onstatechange(MIDIPort* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstatechange", value);
}


jb_Promise MIDIPort_open(MIDIPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "open"));
}


jb_Promise MIDIPort_close(MIDIPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "close"));
}

