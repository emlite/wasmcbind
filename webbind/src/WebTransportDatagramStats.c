#include <webbind/WebTransportDatagramStats.h>

DEFINE_EMLITE_TYPE(WebTransportDatagramStats, em_Val);


long long WebTransportDatagramStats_droppedIncoming(const WebTransportDatagramStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("droppedIncoming")));
}


void WebTransportDatagramStats_set_droppedIncoming(WebTransportDatagramStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("droppedIncoming"), em_Val_from(value));
}


long long WebTransportDatagramStats_expiredIncoming(const WebTransportDatagramStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expiredIncoming")));
}


void WebTransportDatagramStats_set_expiredIncoming(WebTransportDatagramStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expiredIncoming"), em_Val_from(value));
}


long long WebTransportDatagramStats_expiredOutgoing(const WebTransportDatagramStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expiredOutgoing")));
}


void WebTransportDatagramStats_set_expiredOutgoing(WebTransportDatagramStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expiredOutgoing"), em_Val_from(value));
}


long long WebTransportDatagramStats_lostOutgoing(const WebTransportDatagramStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lostOutgoing")));
}


void WebTransportDatagramStats_set_lostOutgoing(WebTransportDatagramStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lostOutgoing"), em_Val_from(value));
}


WebTransportDatagramStats WebTransportDatagramStats_new() {
    em_Val obj = em_Val_object();
    return WebTransportDatagramStats_from_val(&obj);
}

