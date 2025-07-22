#include <webbind/MIDIConnectionEvent.h>
#include <webbind/MIDIPort.h>


DEFINE_EMLITE_TYPE(MIDIConnectionEvent, Event);


MIDIConnectionEvent MIDIConnectionEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("MIDIConnectionEvent") , em_Val_from(type));
        return MIDIConnectionEvent_from_val(&vv);
      }


MIDIConnectionEvent MIDIConnectionEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MIDIConnectionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MIDIConnectionEvent_from_val(&vv);
      }


MIDIPort MIDIConnectionEvent_port(const MIDIConnectionEvent *self) {
    return em_Val_as(MIDIPort, em_Val_get(Event_as_val(self->inner), em_Val_from("port")));
}

