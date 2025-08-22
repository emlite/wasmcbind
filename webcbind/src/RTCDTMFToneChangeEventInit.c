#include <webcbind/RTCDTMFToneChangeEventInit.h>

DEFINE_EMLITE_TYPE(RTCDTMFToneChangeEventInit, EventInit);


jb_String RTCDTMFToneChangeEventInit_tone(const RTCDTMFToneChangeEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("tone")));
}


void RTCDTMFToneChangeEventInit_set_tone(RTCDTMFToneChangeEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("tone"), em_Val_from(value));
}


RTCDTMFToneChangeEventInit RTCDTMFToneChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return RTCDTMFToneChangeEventInit_from_val(&obj);
}

