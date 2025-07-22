#include <webbind/PerformanceResourceTiming.h>
#include <webbind/PerformanceServerTiming.h>


DEFINE_EMLITE_TYPE(PerformanceResourceTiming, PerformanceEntry);


jb_DOMString PerformanceResourceTiming_initiatorType(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "initiatorType"));
}


jb_DOMString PerformanceResourceTiming_deliveryType(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "deliveryType"));
}


jb_ByteString PerformanceResourceTiming_nextHopProtocol(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_ByteString, em_Val_get(PerformanceEntry_as_val(self->inner), "nextHopProtocol"));
}


jb_Any PerformanceResourceTiming_workerStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "workerStart"));
}


jb_Any PerformanceResourceTiming_redirectStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "redirectStart"));
}


jb_Any PerformanceResourceTiming_redirectEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "redirectEnd"));
}


jb_Any PerformanceResourceTiming_fetchStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "fetchStart"));
}


jb_Any PerformanceResourceTiming_domainLookupStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "domainLookupStart"));
}


jb_Any PerformanceResourceTiming_domainLookupEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "domainLookupEnd"));
}


jb_Any PerformanceResourceTiming_connectStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "connectStart"));
}


jb_Any PerformanceResourceTiming_connectEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "connectEnd"));
}


jb_Any PerformanceResourceTiming_secureConnectionStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "secureConnectionStart"));
}


jb_Any PerformanceResourceTiming_requestStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "requestStart"));
}


jb_Any PerformanceResourceTiming_finalResponseHeadersStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "finalResponseHeadersStart"));
}


jb_Any PerformanceResourceTiming_firstInterimResponseStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "firstInterimResponseStart"));
}


jb_Any PerformanceResourceTiming_responseStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "responseStart"));
}


jb_Any PerformanceResourceTiming_responseEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "responseEnd"));
}


long long PerformanceResourceTiming_transferSize(const PerformanceResourceTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), "transferSize"));
}


long long PerformanceResourceTiming_encodedBodySize(const PerformanceResourceTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), "encodedBodySize"));
}


long long PerformanceResourceTiming_decodedBodySize(const PerformanceResourceTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), "decodedBodySize"));
}


unsigned short PerformanceResourceTiming_responseStatus(const PerformanceResourceTiming *self) {
    return em_Val_as(unsigned short, em_Val_get(PerformanceEntry_as_val(self->inner), "responseStatus"));
}


RenderBlockingStatusType PerformanceResourceTiming_renderBlockingStatus(const PerformanceResourceTiming *self) {
    return em_Val_as(RenderBlockingStatusType, em_Val_get(PerformanceEntry_as_val(self->inner), "renderBlockingStatus"));
}


jb_DOMString PerformanceResourceTiming_contentType(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "contentType"));
}


jb_DOMString PerformanceResourceTiming_contentEncoding(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "contentEncoding"));
}


jb_Object PerformanceResourceTiming_toJSON(PerformanceResourceTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_FrozenArray PerformanceResourceTiming_serverTiming(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(PerformanceEntry_as_val(self->inner), "serverTiming"));
}

