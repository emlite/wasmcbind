#include <webcbind/RTCDTMFSender.h>

DEFINE_EMLITE_TYPE(RTCDTMFSender, EventTarget);


jb_Undefined RTCDTMFSender_insertDTMF0(RTCDTMFSender* self , jb_String * tones) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "insertDTMF", em_Val_from(tones)));
}


jb_Undefined RTCDTMFSender_insertDTMF1(RTCDTMFSender* self , jb_String * tones, unsigned long duration) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "insertDTMF", em_Val_from(tones), em_Val_from(duration)));
}


jb_Undefined RTCDTMFSender_insertDTMF2(RTCDTMFSender* self , jb_String * tones, unsigned long duration, unsigned long interToneGap) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "insertDTMF", em_Val_from(tones), em_Val_from(duration), em_Val_from(interToneGap)));
}


jb_Any RTCDTMFSender_ontonechange(const RTCDTMFSender *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ontonechange")));
}


void RTCDTMFSender_set_ontonechange(RTCDTMFSender* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ontonechange"), em_Val_from(value));
}


bool RTCDTMFSender_canInsertDTMF(const RTCDTMFSender *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("canInsertDTMF")));
}


jb_String RTCDTMFSender_toneBuffer(const RTCDTMFSender *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("toneBuffer")));
}

