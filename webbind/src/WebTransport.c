#include <webbind/WebTransport.h>
#include <webbind/WebTransportDatagramDuplexStream.h>
#include <webbind/WebTransportBidirectionalStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WebTransportSendStream.h>
#include <webbind/WebTransportSendGroup.h>


DEFINE_EMLITE_TYPE(WebTransportConnectionStats, em_Val);


long long WebTransportConnectionStats_bytesSent(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesSent")));
}


void WebTransportConnectionStats_set_bytesSent(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesSent"), em_Val_from(value));
}


long long WebTransportConnectionStats_packetsSent(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetsSent")));
}


void WebTransportConnectionStats_set_packetsSent(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("packetsSent"), em_Val_from(value));
}


long long WebTransportConnectionStats_bytesLost(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesLost")));
}


void WebTransportConnectionStats_set_bytesLost(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesLost"), em_Val_from(value));
}


long long WebTransportConnectionStats_packetsLost(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetsLost")));
}


void WebTransportConnectionStats_set_packetsLost(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("packetsLost"), em_Val_from(value));
}


long long WebTransportConnectionStats_bytesReceived(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesReceived")));
}


void WebTransportConnectionStats_set_bytesReceived(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesReceived"), em_Val_from(value));
}


long long WebTransportConnectionStats_packetsReceived(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetsReceived")));
}


void WebTransportConnectionStats_set_packetsReceived(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("packetsReceived"), em_Val_from(value));
}


jb_Any WebTransportConnectionStats_smoothedRtt(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("smoothedRtt")));
}


void WebTransportConnectionStats_set_smoothedRtt(WebTransportConnectionStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("smoothedRtt"), em_Val_from(value));
}


jb_Any WebTransportConnectionStats_rttVariation(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rttVariation")));
}


void WebTransportConnectionStats_set_rttVariation(WebTransportConnectionStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rttVariation"), em_Val_from(value));
}


jb_Any WebTransportConnectionStats_minRtt(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minRtt")));
}


void WebTransportConnectionStats_set_minRtt(WebTransportConnectionStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minRtt"), em_Val_from(value));
}


jb_Any WebTransportConnectionStats_datagrams(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("datagrams")));
}


void WebTransportConnectionStats_set_datagrams(WebTransportConnectionStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("datagrams"), em_Val_from(value));
}


long long WebTransportConnectionStats_estimatedSendRate(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("estimatedSendRate")));
}


void WebTransportConnectionStats_set_estimatedSendRate(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("estimatedSendRate"), em_Val_from(value));
}


bool WebTransportConnectionStats_atSendCapacity(const WebTransportConnectionStats *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("atSendCapacity")));
}


void WebTransportConnectionStats_set_atSendCapacity(WebTransportConnectionStats* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("atSendCapacity"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(WebTransportCloseInfo, em_Val);


unsigned long WebTransportCloseInfo_closeCode(const WebTransportCloseInfo *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("closeCode")));
}


void WebTransportCloseInfo_set_closeCode(WebTransportCloseInfo* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("closeCode"), em_Val_from(value));
}


jb_USVString WebTransportCloseInfo_reason(const WebTransportCloseInfo *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reason")));
}


void WebTransportCloseInfo_set_reason(WebTransportCloseInfo* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reason"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(WebTransportSendStreamOptions, em_Val);


bool WebTransportSendStreamOptions_waitUntilAvailable(const WebTransportSendStreamOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("waitUntilAvailable")));
}


void WebTransportSendStreamOptions_set_waitUntilAvailable(WebTransportSendStreamOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("waitUntilAvailable"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(WebTransport, em_Val);


WebTransport WebTransport_new0(jb_USVString * url) {
        em_Val vv = em_Val_new(em_Val_global("WebTransport") , em_Val_from(url));
        return WebTransport_from_val(&vv);
      }


WebTransport WebTransport_new1(jb_USVString * url, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("WebTransport") , em_Val_from(url), em_Val_from(options));
        return WebTransport_from_val(&vv);
      }


jb_Promise WebTransport_getStats(WebTransport* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStats"));
}


jb_Promise WebTransport_exportKeyingMaterial0(WebTransport* self , jb_Any * label) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "exportKeyingMaterial", em_Val_from(label)));
}


jb_Promise WebTransport_exportKeyingMaterial1(WebTransport* self , jb_Any * label, jb_Any * context) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "exportKeyingMaterial", em_Val_from(label), em_Val_from(context)));
}


jb_Promise WebTransport_ready(const WebTransport *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ready")));
}


WebTransportReliabilityMode WebTransport_reliability(const WebTransport *self) {
    return em_Val_as(WebTransportReliabilityMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reliability")));
}


WebTransportCongestionControl WebTransport_congestionControl(const WebTransport *self) {
    return em_Val_as(WebTransportCongestionControl, em_Val_get(em_Val_as_val(self->inner), em_Val_from("congestionControl")));
}


unsigned short WebTransport_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransport *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingUnidirectionalStreams")));
}


void WebTransport_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransport* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingUnidirectionalStreams"), em_Val_from(value));
}


unsigned short WebTransport_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransport *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingBidirectionalStreams")));
}


void WebTransport_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransport* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingBidirectionalStreams"), em_Val_from(value));
}


jb_DOMString WebTransport_protocol(const WebTransport *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


jb_Promise WebTransport_closed(const WebTransport *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("closed")));
}


jb_Promise WebTransport_draining(const WebTransport *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("draining")));
}


jb_Undefined WebTransport_close0(WebTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Undefined WebTransport_close1(WebTransport* self , WebTransportCloseInfo * closeInfo) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close", em_Val_from(closeInfo)));
}


WebTransportDatagramDuplexStream WebTransport_datagrams(const WebTransport *self) {
    return em_Val_as(WebTransportDatagramDuplexStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("datagrams")));
}


jb_Promise WebTransport_createBidirectionalStream0(WebTransport* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createBidirectionalStream"));
}


jb_Promise WebTransport_createBidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createBidirectionalStream", em_Val_from(options)));
}


ReadableStream WebTransport_incomingBidirectionalStreams(const WebTransport *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("incomingBidirectionalStreams")));
}


jb_Promise WebTransport_createUnidirectionalStream0(WebTransport* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createUnidirectionalStream"));
}


jb_Promise WebTransport_createUnidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createUnidirectionalStream", em_Val_from(options)));
}


ReadableStream WebTransport_incomingUnidirectionalStreams(const WebTransport *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("incomingUnidirectionalStreams")));
}


WebTransportSendGroup WebTransport_createSendGroup(WebTransport* self ) {
    return em_Val_as(WebTransportSendGroup, em_Val_call(em_Val_as_val(self->inner), "createSendGroup"));
}


bool WebTransport_supportsReliableOnly() {
    return em_Val_as(bool, em_Val_get(em_Val_global("webtransport", em_Val_from("supportsReliableOnly"))));
}

