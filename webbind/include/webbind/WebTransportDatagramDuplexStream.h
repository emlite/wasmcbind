#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportDatagramsWritable WebTransportDatagramsWritable;
typedef struct WebTransportSendOptions WebTransportSendOptions;
typedef struct ReadableStream ReadableStream;

DECLARE_EMLITE_TYPE(WebTransportDatagramDuplexStream, em_Val);

WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable0(WebTransportDatagramDuplexStream* self );

WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable1(WebTransportDatagramDuplexStream* self , WebTransportSendOptions * options);

ReadableStream WebTransportDatagramDuplexStream_readable(const WebTransportDatagramDuplexStream *self);

unsigned long WebTransportDatagramDuplexStream_maxDatagramSize(const WebTransportDatagramDuplexStream *self);

double WebTransportDatagramDuplexStream_incomingMaxAge(const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_incomingMaxAge(WebTransportDatagramDuplexStream* self, double value);

double WebTransportDatagramDuplexStream_outgoingMaxAge(const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_outgoingMaxAge(WebTransportDatagramDuplexStream* self, double value);

double WebTransportDatagramDuplexStream_incomingHighWaterMark(const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_incomingHighWaterMark(WebTransportDatagramDuplexStream* self, double value);

double WebTransportDatagramDuplexStream_outgoingHighWaterMark(const WebTransportDatagramDuplexStream *self);

void WebTransportDatagramDuplexStream_set_outgoingHighWaterMark(WebTransportDatagramDuplexStream* self, double value);

#ifdef __cplusplus
}
#endif
