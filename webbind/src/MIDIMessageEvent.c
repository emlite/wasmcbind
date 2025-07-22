#include <webbind/MIDIMessageEvent.h>


DEFINE_EMLITE_TYPE(MIDIMessageEvent, Event);


MIDIMessageEvent MIDIMessageEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("MIDIMessageEvent") , em_Val_from(type));
        return MIDIMessageEvent_from_val(&vv);
      }


MIDIMessageEvent MIDIMessageEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MIDIMessageEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MIDIMessageEvent_from_val(&vv);
      }


jb_Uint8Array MIDIMessageEvent_data(const MIDIMessageEvent *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(Event_as_val(self->inner), em_Val_from("data")));
}

