#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct RTCIceTransport RTCIceTransport;


typedef struct {
  EventTarget inner;
} RTCDtlsTransport;


DECLARE_EMLITE_TYPE(RTCDtlsTransport, EventTarget);

RTCIceTransport RTCDtlsTransport_iceTransport( const RTCDtlsTransport *self);

RTCDtlsTransportState RTCDtlsTransport_state( const RTCDtlsTransport *self);

jb_Sequence RTCDtlsTransport_getRemoteCertificates(RTCDtlsTransport* self );

jb_Any RTCDtlsTransport_onstatechange( const RTCDtlsTransport *self);

void RTCDtlsTransport_set_onstatechange(RTCDtlsTransport* self, const jb_Any* value);

jb_Any RTCDtlsTransport_onerror( const RTCDtlsTransport *self);

void RTCDtlsTransport_set_onerror(RTCDtlsTransport* self, const jb_Any* value);
