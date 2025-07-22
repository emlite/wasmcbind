#include <webbind/MIDIMessageEvent.h>


DEFINE_EMLITE_TYPE(MIDIMessageEvent, Event);


MIDIMessageEvent MIDIMessageEvent_new(const jb_DOMString* type) : Event(em_Val_global("MIDIMessageEvent").new_(em_Val_from(type))) {
        return MIDIMessageEvent(em_Val_new(em_Val_global("MIDIMessageEvent", em_Val_from(type)));
      }


MIDIMessageEvent MIDIMessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("MIDIMessageEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return MIDIMessageEvent(em_Val_new(em_Val_global("MIDIMessageEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Uint8Array MIDIMessageEvent_data(const MIDIMessageEvent *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(Event_as_val(self->inner), "data"));
}

