#include <webbind/MIDIConnectionEvent.h>
#include <webbind/MIDIPort.h>


DEFINE_EMLITE_TYPE(MIDIConnectionEvent, Event);


MIDIConnectionEvent MIDIConnectionEvent_new(const jb_DOMString* type) : Event(em_Val_global("MIDIConnectionEvent").new_(em_Val_from(type))) {
        return MIDIConnectionEvent(em_Val_new(em_Val_global("MIDIConnectionEvent", em_Val_from(type)));
      }


MIDIConnectionEvent MIDIConnectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("MIDIConnectionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return MIDIConnectionEvent(em_Val_new(em_Val_global("MIDIConnectionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


MIDIPort MIDIConnectionEvent_port(const MIDIConnectionEvent *self) {
    return em_Val_as(MIDIPort, em_Val_get(Event_as_val(self->inner), "port"));
}

