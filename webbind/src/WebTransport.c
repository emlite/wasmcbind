#include <webbind/WebTransport.h>
#include <webbind/WebTransportDatagramDuplexStream.h>
#include <webbind/WebTransportBidirectionalStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WebTransportSendStream.h>
#include <webbind/WebTransportSendGroup.h>


DEFINE_EMLITE_TYPE(WebTransportConnectionStats, em_Val);


long long WebTransportConnectionStats_bytesSent(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesSent"));
}


void WebTransportConnectionStats_set_bytesSent(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesSent", value);
}


long long WebTransportConnectionStats_packetsSent(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "packetsSent"));
}


void WebTransportConnectionStats_set_packetsSent(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "packetsSent", value);
}


long long WebTransportConnectionStats_bytesLost(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesLost"));
}


void WebTransportConnectionStats_set_bytesLost(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesLost", value);
}


long long WebTransportConnectionStats_packetsLost(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "packetsLost"));
}


void WebTransportConnectionStats_set_packetsLost(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "packetsLost", value);
}


long long WebTransportConnectionStats_bytesReceived(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesReceived"));
}


void WebTransportConnectionStats_set_bytesReceived(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesReceived", value);
}


long long WebTransportConnectionStats_packetsReceived(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "packetsReceived"));
}


void WebTransportConnectionStats_set_packetsReceived(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "packetsReceived", value);
}


jb_Any WebTransportConnectionStats_smoothedRtt(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "smoothedRtt"));
}


void WebTransportConnectionStats_set_smoothedRtt(WebTransportConnectionStats* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "smoothedRtt", value);
}


jb_Any WebTransportConnectionStats_rttVariation(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "rttVariation"));
}


void WebTransportConnectionStats_set_rttVariation(WebTransportConnectionStats* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "rttVariation", value);
}


jb_Any WebTransportConnectionStats_minRtt(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "minRtt"));
}


void WebTransportConnectionStats_set_minRtt(WebTransportConnectionStats* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "minRtt", value);
}


jb_Any WebTransportConnectionStats_datagrams(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "datagrams"));
}


void WebTransportConnectionStats_set_datagrams(WebTransportConnectionStats* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "datagrams", value);
}


long long WebTransportConnectionStats_estimatedSendRate(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "estimatedSendRate"));
}


void WebTransportConnectionStats_set_estimatedSendRate(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "estimatedSendRate", value);
}


bool WebTransportConnectionStats_atSendCapacity(const WebTransportConnectionStats *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "atSendCapacity"));
}


void WebTransportConnectionStats_set_atSendCapacity(WebTransportConnectionStats* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "atSendCapacity", value);
}

DEFINE_EMLITE_TYPE(WebTransportCloseInfo, em_Val);


unsigned long WebTransportCloseInfo_closeCode(const WebTransportCloseInfo *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "closeCode"));
}


void WebTransportCloseInfo_set_closeCode(WebTransportCloseInfo* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "closeCode", value);
}


jb_USVString WebTransportCloseInfo_reason(const WebTransportCloseInfo *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "reason"));
}


void WebTransportCloseInfo_set_reason(WebTransportCloseInfo* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "reason", value);
}

DEFINE_EMLITE_TYPE(WebTransportSendStreamOptions, em_Val);


bool WebTransportSendStreamOptions_waitUntilAvailable(const WebTransportSendStreamOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "waitUntilAvailable"));
}


void WebTransportSendStreamOptions_set_waitUntilAvailable(WebTransportSendStreamOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "waitUntilAvailable", value);
}

DEFINE_EMLITE_TYPE(WebTransport, em_Val);


WebTransport WebTransport_new(const jb_USVString* url) : em_Val(em_Val_global("WebTransport").new_(em_Val_from(url))) {
        return WebTransport(em_Val_new(em_Val_global("WebTransport", em_Val_from(url)));
      }


WebTransport WebTransport_new(const jb_USVString* url, const jb_Any* options) : em_Val(em_Val_global("WebTransport").new_(em_Val_from(url), em_Val_from(options))) {
        return WebTransport(em_Val_new(em_Val_global("WebTransport", em_Val_from(url), em_Val_from(options)));
      }


jb_Promise WebTransport_getStats(WebTransport* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStats"));
}


jb_Promise WebTransport_exportKeyingMaterial(WebTransport* self , const jb_Any* label) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "exportKeyingMaterial", em_Val_from(label)));
}


jb_Promise WebTransport_exportKeyingMaterial(WebTransport* self , const jb_Any* label, const jb_Any* context) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "exportKeyingMaterial", em_Val_from(label), em_Val_from(context)));
}


jb_Promise WebTransport_ready(const WebTransport *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "ready"));
}


WebTransportReliabilityMode WebTransport_reliability(const WebTransport *self) {
    return em_Val_as(WebTransportReliabilityMode, em_Val_get(em_Val_as_val(self->inner), "reliability"));
}


WebTransportCongestionControl WebTransport_congestionControl(const WebTransport *self) {
    return em_Val_as(WebTransportCongestionControl, em_Val_get(em_Val_as_val(self->inner), "congestionControl"));
}


unsigned short WebTransport_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransport *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "anticipatedConcurrentIncomingUnidirectionalStreams"));
}


void WebTransport_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransport* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "anticipatedConcurrentIncomingUnidirectionalStreams", value);
}


unsigned short WebTransport_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransport *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "anticipatedConcurrentIncomingBidirectionalStreams"));
}


void WebTransport_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransport* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "anticipatedConcurrentIncomingBidirectionalStreams", value);
}


jb_DOMString WebTransport_protocol(const WebTransport *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


jb_Promise WebTransport_closed(const WebTransport *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "closed"));
}


jb_Promise WebTransport_draining(const WebTransport *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "draining"));
}


jb_Undefined WebTransport_close(WebTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Undefined WebTransport_close(WebTransport* self , const WebTransportCloseInfo* closeInfo) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close", em_Val_from(closeInfo)));
}


WebTransportDatagramDuplexStream WebTransport_datagrams(const WebTransport *self) {
    return em_Val_as(WebTransportDatagramDuplexStream, em_Val_get(em_Val_as_val(self->inner), "datagrams"));
}


jb_Promise WebTransport_createBidirectionalStream(WebTransport* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createBidirectionalStream"));
}


jb_Promise WebTransport_createBidirectionalStream(WebTransport* self , const WebTransportSendStreamOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createBidirectionalStream", em_Val_from(options)));
}


ReadableStream WebTransport_incomingBidirectionalStreams(const WebTransport *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "incomingBidirectionalStreams"));
}


jb_Promise WebTransport_createUnidirectionalStream(WebTransport* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createUnidirectionalStream"));
}


jb_Promise WebTransport_createUnidirectionalStream(WebTransport* self , const WebTransportSendStreamOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createUnidirectionalStream", em_Val_from(options)));
}


ReadableStream WebTransport_incomingUnidirectionalStreams(const WebTransport *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "incomingUnidirectionalStreams"));
}


WebTransportSendGroup WebTransport_createSendGroup(WebTransport* self ) {
    return em_Val_as(WebTransportSendGroup, em_Val_call(em_Val_as_val(self->inner), "createSendGroup"));
}


bool WebTransport_supportsReliableOnly() {
    return em_Val_as(bool, em_Val_get(em_Val_global("webtransport", "supportsReliableOnly")));
}

