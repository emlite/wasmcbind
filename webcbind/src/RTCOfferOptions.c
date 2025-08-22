#include <webcbind/RTCOfferOptions.h>

DEFINE_EMLITE_TYPE(RTCOfferOptions, em_Val);


bool RTCOfferOptions_offerToReceiveAudio(const RTCOfferOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offerToReceiveAudio")));
}


void RTCOfferOptions_set_offerToReceiveAudio(RTCOfferOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offerToReceiveAudio"), em_Val_from(value));
}


bool RTCOfferOptions_offerToReceiveVideo(const RTCOfferOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offerToReceiveVideo")));
}


void RTCOfferOptions_set_offerToReceiveVideo(RTCOfferOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offerToReceiveVideo"), em_Val_from(value));
}


RTCOfferOptions RTCOfferOptions_new() {
    em_Val obj = em_Val_object();
    return RTCOfferOptions_from_val(&obj);
}

