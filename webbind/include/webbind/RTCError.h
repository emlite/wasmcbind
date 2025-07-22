#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"


typedef struct {
  DOMException inner;
} RTCError;


DECLARE_EMLITE_TYPE(RTCError, DOMException);

RTCError RTCError_new(const jb_Any* init);

RTCError RTCError_new(const jb_Any* init, const jb_DOMString* message);

RTCErrorDetailType RTCError_errorDetail( const RTCError *self);

long RTCError_sdpLineNumber( const RTCError *self);

long RTCError_sctpCauseCode( const RTCError *self);

unsigned long RTCError_receivedAlert( const RTCError *self);

unsigned long RTCError_sentAlert( const RTCError *self);

long RTCError_httpRequestStatusCode( const RTCError *self);
