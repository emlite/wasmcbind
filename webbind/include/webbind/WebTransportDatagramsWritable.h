#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WritableStream.h"
#include "enums.h"

typedef struct WebTransportSendGroup WebTransportSendGroup;


typedef struct {
  WritableStream inner;
} WebTransportDatagramsWritable;


DECLARE_EMLITE_TYPE(WebTransportDatagramsWritable, WritableStream);

WebTransportSendGroup WebTransportDatagramsWritable_sendGroup( const WebTransportDatagramsWritable *self);

void WebTransportDatagramsWritable_set_sendGroup(WebTransportDatagramsWritable* self, const WebTransportSendGroup* value);

long long WebTransportDatagramsWritable_sendOrder( const WebTransportDatagramsWritable *self);

void WebTransportDatagramsWritable_set_sendOrder(WebTransportDatagramsWritable* self, long long value);
