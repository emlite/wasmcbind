#include <webbind/WebTransport.h>

#include <webbind/WebTransportOptions.h>
#include <webbind/WebTransportConnectionStats.h>
#include <webbind/WebTransportCloseInfo.h>
#include <webbind/WebTransportDatagramDuplexStream.h>
#include <webbind/WebTransportBidirectionalStream.h>
#include <webbind/WebTransportSendStreamOptions.h>
#include <webbind/ReadableStream.h>
#include <webbind/WebTransportSendStream.h>
#include <webbind/WebTransportSendGroup.h>

DEFINE_EMLITE_TYPE(WebTransport, em_Val);


WebTransport WebTransport_new0(jb_String * url) {
        em_Val vv = em_Val_new(em_Val_global("WebTransport") , em_Val_from(url));
        return WebTransport_from_val(&vv);
      }


WebTransport WebTransport_new1(jb_String * url, WebTransportOptions * options) {
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


jb_String WebTransport_protocol(const WebTransport *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
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


bool WebTransport_supportsReliableOnly(const WebTransport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_global("webtransport"), em_Val_from("supportsReliableOnly")));
}

