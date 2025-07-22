#include <webbind/RTCDTMFSender.h>


DEFINE_EMLITE_TYPE(RTCDTMFSender, EventTarget);


jb_Undefined RTCDTMFSender_insertDTMF(RTCDTMFSender* self , const jb_DOMString* tones) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "insertDTMF", em_Val_from(tones)));
}


jb_Undefined RTCDTMFSender_insertDTMF(RTCDTMFSender* self , const jb_DOMString* tones, unsigned long duration) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "insertDTMF", em_Val_from(tones), em_Val_from(duration)));
}


jb_Undefined RTCDTMFSender_insertDTMF(RTCDTMFSender* self , const jb_DOMString* tones, unsigned long duration, unsigned long interToneGap) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "insertDTMF", em_Val_from(tones), em_Val_from(duration), em_Val_from(interToneGap)));
}


jb_Any RTCDTMFSender_ontonechange(const RTCDTMFSender *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ontonechange"));
}


void RTCDTMFSender_set_ontonechange(RTCDTMFSender* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ontonechange", value);
}


bool RTCDTMFSender_canInsertDTMF(const RTCDTMFSender *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "canInsertDTMF"));
}


jb_DOMString RTCDTMFSender_toneBuffer(const RTCDTMFSender *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "toneBuffer"));
}

