#include <webbind/WebTransportSendStreamOptions.h>

DEFINE_EMLITE_TYPE(WebTransportSendStreamOptions, WebTransportSendOptions);


bool WebTransportSendStreamOptions_waitUntilAvailable(const WebTransportSendStreamOptions *self) {
    return em_Val_as(bool, em_Val_get(WebTransportSendOptions_as_val(self->inner), em_Val_from("waitUntilAvailable")));
}


void WebTransportSendStreamOptions_set_waitUntilAvailable(WebTransportSendStreamOptions* self, bool value) {
    em_Val_set(WebTransportSendOptions_as_val(self->inner), em_Val_from("waitUntilAvailable"), em_Val_from(value));
}


WebTransportSendStreamOptions WebTransportSendStreamOptions_new() {
    em_Val obj = em_Val_object();
    return WebTransportSendStreamOptions_from_val(&obj);
}

