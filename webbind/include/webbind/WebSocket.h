#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} WebSocket;


DECLARE_EMLITE_TYPE(WebSocket, EventTarget);

WebSocket WebSocket_new(const jb_USVString* url);

WebSocket WebSocket_new(const jb_USVString* url, const jb_Any* protocols);

jb_USVString WebSocket_url( const WebSocket *self);

unsigned short WebSocket_readyState( const WebSocket *self);

long long WebSocket_bufferedAmount( const WebSocket *self);

jb_Any WebSocket_onopen( const WebSocket *self);

void WebSocket_set_onopen(WebSocket* self, const jb_Any* value);

jb_Any WebSocket_onerror( const WebSocket *self);

void WebSocket_set_onerror(WebSocket* self, const jb_Any* value);

jb_Any WebSocket_onclose( const WebSocket *self);

void WebSocket_set_onclose(WebSocket* self, const jb_Any* value);

jb_DOMString WebSocket_extensions( const WebSocket *self);

jb_DOMString WebSocket_protocol( const WebSocket *self);

jb_Undefined WebSocket_close(WebSocket* self );

jb_Undefined WebSocket_close(WebSocket* self , unsigned short code);

jb_Undefined WebSocket_close(WebSocket* self , unsigned short code, const jb_USVString* reason);

jb_Any WebSocket_onmessage( const WebSocket *self);

void WebSocket_set_onmessage(WebSocket* self, const jb_Any* value);

BinaryType WebSocket_binaryType( const WebSocket *self);

void WebSocket_set_binaryType(WebSocket* self, const BinaryType* value);

jb_Undefined WebSocket_send(WebSocket* self , const jb_Any* data);
