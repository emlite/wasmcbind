#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebTransportHash.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportOptions, em_Val);

bool WebTransportOptions_allowPooling(const WebTransportOptions *self);

void WebTransportOptions_set_allowPooling(WebTransportOptions* self, bool value);

bool WebTransportOptions_requireUnreliable(const WebTransportOptions *self);

void WebTransportOptions_set_requireUnreliable(WebTransportOptions* self, bool value);

jb_Array WebTransportOptions_serverCertificateHashes(const WebTransportOptions *self);

void WebTransportOptions_set_serverCertificateHashes(WebTransportOptions* self, jb_Array * value);

WebTransportCongestionControl WebTransportOptions_congestionControl(const WebTransportOptions *self);

void WebTransportOptions_set_congestionControl(WebTransportOptions* self, WebTransportCongestionControl * value);

unsigned short WebTransportOptions_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransportOptions *self);

void WebTransportOptions_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransportOptions* self, unsigned short value);

unsigned short WebTransportOptions_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransportOptions *self);

void WebTransportOptions_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransportOptions* self, unsigned short value);

jb_Array WebTransportOptions_protocols(const WebTransportOptions *self);

void WebTransportOptions_set_protocols(WebTransportOptions* self, jb_Array * value);

DatagramsReadableMode WebTransportOptions_datagramsReadableMode(const WebTransportOptions *self);

void WebTransportOptions_set_datagramsReadableMode(WebTransportOptions* self, DatagramsReadableMode * value);

WebTransportOptions WebTransportOptions_new();

#ifdef __cplusplus
}
#endif
