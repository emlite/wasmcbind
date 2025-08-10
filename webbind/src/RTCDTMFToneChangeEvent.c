#include <webbind/RTCDTMFToneChangeEvent.h>

#include <webbind/RTCDTMFToneChangeEventInit.h>

DEFINE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);


RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("RTCDTMFToneChangeEvent") , em_Val_from(type));
        return RTCDTMFToneChangeEvent_from_val(&vv);
      }


RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new1(jb_String * type, RTCDTMFToneChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCDTMFToneChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return RTCDTMFToneChangeEvent_from_val(&vv);
      }


jb_String RTCDTMFToneChangeEvent_tone(const RTCDTMFToneChangeEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("tone")));
}

