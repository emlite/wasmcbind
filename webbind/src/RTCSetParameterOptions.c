#include <webbind/RTCSetParameterOptions.h>

DEFINE_EMLITE_TYPE(RTCSetParameterOptions, em_Val);


RTCSetParameterOptions RTCSetParameterOptions_new() {
    em_Val obj = em_Val_object();
    return RTCSetParameterOptions_from_val(&obj);
}

