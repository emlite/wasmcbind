#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportOptions WebTransportOptions;
typedef struct WebTransportConnectionStats WebTransportConnectionStats;
typedef struct WebTransportCloseInfo WebTransportCloseInfo;
typedef struct WebTransportDatagramDuplexStream WebTransportDatagramDuplexStream;
typedef struct WebTransportBidirectionalStream WebTransportBidirectionalStream;
typedef struct WebTransportSendStreamOptions WebTransportSendStreamOptions;
typedef struct ReadableStream ReadableStream;
typedef struct WebTransportSendStream WebTransportSendStream;
typedef struct WebTransportSendGroup WebTransportSendGroup;

DECLARE_EMLITE_TYPE(WebTransport, em_Val);

WebTransport WebTransport_new0(jb_String * url);

WebTransport WebTransport_new1(jb_String * url, WebTransportOptions * options);

jb_Promise WebTransport_getStats(WebTransport* self );

jb_Promise WebTransport_exportKeyingMaterial0(WebTransport* self , jb_Any * label);

jb_Promise WebTransport_exportKeyingMaterial1(WebTransport* self , jb_Any * label, jb_Any * context);

jb_Promise WebTransport_ready(const WebTransport *self);

WebTransportReliabilityMode WebTransport_reliability(const WebTransport *self);

WebTransportCongestionControl WebTransport_congestionControl(const WebTransport *self);

unsigned short WebTransport_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransport *self);

void WebTransport_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransport* self, unsigned short value);

unsigned short WebTransport_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransport *self);

void WebTransport_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransport* self, unsigned short value);

jb_String WebTransport_protocol(const WebTransport *self);

jb_Promise WebTransport_closed(const WebTransport *self);

jb_Promise WebTransport_draining(const WebTransport *self);

jb_Undefined WebTransport_close0(WebTransport* self );

jb_Undefined WebTransport_close1(WebTransport* self , WebTransportCloseInfo * closeInfo);

WebTransportDatagramDuplexStream WebTransport_datagrams(const WebTransport *self);

jb_Promise WebTransport_createBidirectionalStream0(WebTransport* self );

jb_Promise WebTransport_createBidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options);

ReadableStream WebTransport_incomingBidirectionalStreams(const WebTransport *self);

jb_Promise WebTransport_createUnidirectionalStream0(WebTransport* self );

jb_Promise WebTransport_createUnidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options);

ReadableStream WebTransport_incomingUnidirectionalStreams(const WebTransport *self);

WebTransportSendGroup WebTransport_createSendGroup(WebTransport* self );

bool WebTransport_supportsReliableOnly(const WebTransport *self);

#ifdef __cplusplus
}
#endif
