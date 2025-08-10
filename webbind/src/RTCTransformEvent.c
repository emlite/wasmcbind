#include <webbind/RTCTransformEvent.h>

#include <webbind/RTCRtpScriptTransformer.h>

DEFINE_EMLITE_TYPE(RTCTransformEvent, Event);


RTCRtpScriptTransformer RTCTransformEvent_transformer(const RTCTransformEvent *self) {
    return em_Val_as(RTCRtpScriptTransformer, em_Val_get(Event_as_val(self->inner), em_Val_from("transformer")));
}

