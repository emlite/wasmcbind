#include <webbind/RTCRtpReceiveParameters.h>

DEFINE_EMLITE_TYPE(RTCRtpReceiveParameters, RTCRtpParameters);


RTCRtpReceiveParameters RTCRtpReceiveParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtpReceiveParameters_from_val(&obj);
}

