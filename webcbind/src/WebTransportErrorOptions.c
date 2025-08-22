#include <webcbind/WebTransportErrorOptions.h>

DEFINE_EMLITE_TYPE(WebTransportErrorOptions, em_Val);


WebTransportErrorSource WebTransportErrorOptions_source(const WebTransportErrorOptions *self) {
    return em_Val_as(WebTransportErrorSource, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void WebTransportErrorOptions_set_source(WebTransportErrorOptions* self, WebTransportErrorSource * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


unsigned long WebTransportErrorOptions_streamErrorCode(const WebTransportErrorOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("streamErrorCode")));
}


void WebTransportErrorOptions_set_streamErrorCode(WebTransportErrorOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("streamErrorCode"), em_Val_from(value));
}


WebTransportErrorOptions WebTransportErrorOptions_new() {
    em_Val obj = em_Val_object();
    return WebTransportErrorOptions_from_val(&obj);
}

