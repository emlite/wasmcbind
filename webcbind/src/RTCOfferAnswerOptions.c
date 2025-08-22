#include <webcbind/RTCOfferAnswerOptions.h>

DEFINE_EMLITE_TYPE(RTCOfferAnswerOptions, em_Val);


RTCOfferAnswerOptions RTCOfferAnswerOptions_new() {
    em_Val obj = em_Val_object();
    return RTCOfferAnswerOptions_from_val(&obj);
}

