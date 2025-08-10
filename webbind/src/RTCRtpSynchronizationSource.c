#include <webbind/RTCRtpSynchronizationSource.h>

DEFINE_EMLITE_TYPE(RTCRtpSynchronizationSource, RTCRtpContributingSource);


RTCRtpSynchronizationSource RTCRtpSynchronizationSource_new() {
    em_Val obj = em_Val_object();
    return RTCRtpSynchronizationSource_from_val(&obj);
}

