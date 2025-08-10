#include <webbind/WebTransportCloseInfo.h>

DEFINE_EMLITE_TYPE(WebTransportCloseInfo, em_Val);


unsigned long WebTransportCloseInfo_closeCode(const WebTransportCloseInfo *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("closeCode")));
}


void WebTransportCloseInfo_set_closeCode(WebTransportCloseInfo* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("closeCode"), em_Val_from(value));
}


jb_String WebTransportCloseInfo_reason(const WebTransportCloseInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reason")));
}


void WebTransportCloseInfo_set_reason(WebTransportCloseInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reason"), em_Val_from(value));
}


WebTransportCloseInfo WebTransportCloseInfo_new() {
    em_Val obj = em_Val_object();
    return WebTransportCloseInfo_from_val(&obj);
}

