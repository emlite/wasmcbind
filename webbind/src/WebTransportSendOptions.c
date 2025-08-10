#include <webbind/WebTransportSendOptions.h>

#include <webbind/WebTransportSendGroup.h>

DEFINE_EMLITE_TYPE(WebTransportSendOptions, em_Val);


WebTransportSendGroup WebTransportSendOptions_sendGroup(const WebTransportSendOptions *self) {
    return em_Val_as(WebTransportSendGroup, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sendGroup")));
}


void WebTransportSendOptions_set_sendGroup(WebTransportSendOptions* self, WebTransportSendGroup * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sendGroup"), em_Val_from(value));
}


long long WebTransportSendOptions_sendOrder(const WebTransportSendOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sendOrder")));
}


void WebTransportSendOptions_set_sendOrder(WebTransportSendOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sendOrder"), em_Val_from(value));
}


WebTransportSendOptions WebTransportSendOptions_new() {
    em_Val obj = em_Val_object();
    return WebTransportSendOptions_from_val(&obj);
}

