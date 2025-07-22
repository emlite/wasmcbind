#include <webbind/PerformanceResourceTiming.h>
#include <webbind/PerformanceServerTiming.h>


DEFINE_EMLITE_TYPE(PerformanceResourceTiming, PerformanceEntry);


jb_DOMString PerformanceResourceTiming_initiatorType(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("initiatorType")));
}


jb_DOMString PerformanceResourceTiming_deliveryType(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("deliveryType")));
}


jb_ByteString PerformanceResourceTiming_nextHopProtocol(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_ByteString, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("nextHopProtocol")));
}


jb_Any PerformanceResourceTiming_workerStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("workerStart")));
}


jb_Any PerformanceResourceTiming_redirectStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("redirectStart")));
}


jb_Any PerformanceResourceTiming_redirectEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("redirectEnd")));
}


jb_Any PerformanceResourceTiming_fetchStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("fetchStart")));
}


jb_Any PerformanceResourceTiming_domainLookupStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("domainLookupStart")));
}


jb_Any PerformanceResourceTiming_domainLookupEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("domainLookupEnd")));
}


jb_Any PerformanceResourceTiming_connectStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("connectStart")));
}


jb_Any PerformanceResourceTiming_connectEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("connectEnd")));
}


jb_Any PerformanceResourceTiming_secureConnectionStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("secureConnectionStart")));
}


jb_Any PerformanceResourceTiming_requestStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("requestStart")));
}


jb_Any PerformanceResourceTiming_finalResponseHeadersStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("finalResponseHeadersStart")));
}


jb_Any PerformanceResourceTiming_firstInterimResponseStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("firstInterimResponseStart")));
}


jb_Any PerformanceResourceTiming_responseStart(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("responseStart")));
}


jb_Any PerformanceResourceTiming_responseEnd(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("responseEnd")));
}


long long PerformanceResourceTiming_transferSize(const PerformanceResourceTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("transferSize")));
}


long long PerformanceResourceTiming_encodedBodySize(const PerformanceResourceTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("encodedBodySize")));
}


long long PerformanceResourceTiming_decodedBodySize(const PerformanceResourceTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("decodedBodySize")));
}


unsigned short PerformanceResourceTiming_responseStatus(const PerformanceResourceTiming *self) {
    return em_Val_as(unsigned short, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("responseStatus")));
}


RenderBlockingStatusType PerformanceResourceTiming_renderBlockingStatus(const PerformanceResourceTiming *self) {
    return em_Val_as(RenderBlockingStatusType, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("renderBlockingStatus")));
}


jb_DOMString PerformanceResourceTiming_contentType(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("contentType")));
}


jb_DOMString PerformanceResourceTiming_contentEncoding(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("contentEncoding")));
}


jb_Object PerformanceResourceTiming_toJSON(PerformanceResourceTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_FrozenArray PerformanceResourceTiming_serverTiming(const PerformanceResourceTiming *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("serverTiming")));
}

