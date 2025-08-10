#include <webbind/RTCAnswerOptions.h>

DEFINE_EMLITE_TYPE(RTCAnswerOptions, RTCOfferAnswerOptions);


RTCAnswerOptions RTCAnswerOptions_new() {
    em_Val obj = em_Val_object();
    return RTCAnswerOptions_from_val(&obj);
}

