#include <webbind/RTCDTMFToneChangeEvent.h>


DEFINE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);


RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("RTCDTMFToneChangeEvent") , em_Val_from(type));
        return RTCDTMFToneChangeEvent_from_val(&vv);
      }


RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCDTMFToneChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return RTCDTMFToneChangeEvent_from_val(&vv);
      }


jb_DOMString RTCDTMFToneChangeEvent_tone(const RTCDTMFToneChangeEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("tone")));
}

