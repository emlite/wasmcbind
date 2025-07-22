#include <webbind/RTCDTMFToneChangeEvent.h>


DEFINE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);


RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new(const jb_DOMString* type) : Event(em_Val_global("RTCDTMFToneChangeEvent").new_(em_Val_from(type))) {
        return RTCDTMFToneChangeEvent(em_Val_new(em_Val_global("RTCDTMFToneChangeEvent", em_Val_from(type)));
      }


RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("RTCDTMFToneChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return RTCDTMFToneChangeEvent(em_Val_new(em_Val_global("RTCDTMFToneChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString RTCDTMFToneChangeEvent_tone(const RTCDTMFToneChangeEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "tone"));
}

