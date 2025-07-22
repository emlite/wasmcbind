#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebTransportDatagramsWritable WebTransportDatagramsWritable;
typedef struct WebTransportSendOptions WebTransportSendOptions;
typedef struct ReadableStream ReadableStream;
typedef struct WebTransportSendGroup WebTransportSendGroup;


typedef struct {
  em_Val inner;
} WebTransportSendOptions;


DECLARE_EMLITE_TYPE(WebTransportSendOptions, em_Val);

WebTransportSendGroup WebTransportSendOptions_sendGroup( const WebTransportSendOptions *self);

void WebTransportSendOptions_set_sendGroup(WebTransportSendOptions* self, const WebTransportSendGroup* value);

long long WebTransportSendOptions_sendOrder( const WebTransportSendOptions *self);

void WebTransportSendOptions_set_sendOrder(WebTransportSendOptions* self, long long value);
typedef struct {
  em_Val inner;
} WebTransportDatagramDuplexStream;


DECLARE_EMLITE_TYPE(WebTransportDatagramDuplexStream, em_Val);

WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable(WebTransportDatagramDuplexStream* self );

WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable(WebTransportDatagramDuplexStream* self , const WebTransportSendOptions* options);

ReadableStream WebTransportDatagramDuplexStream_readable( const WebTransportDatagramDuplexStream *self);

unsigned long WebTransportDatagramDuplexStream_maxDatagramSize( const WebTransportDatagramDuplexStream *self);

double WebTransportDatagramDuplexStream_incomingMaxAge( const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_incomingMaxAge(WebTransportDatagramDuplexStream* self, double value);

double WebTransportDatagramDuplexStream_outgoingMaxAge( const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_outgoingMaxAge(WebTransportDatagramDuplexStream* self, double value);

double WebTransportDatagramDuplexStream_incomingHighWaterMark( const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_incomingHighWaterMark(WebTransportDatagramDuplexStream* self, double value);

double WebTransportDatagramDuplexStream_outgoingHighWaterMark( const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_outgoingHighWaterMark(WebTransportDatagramDuplexStream* self, double value);
