#include <webbind/WebSocket.h>


DEFINE_EMLITE_TYPE(WebSocket, EventTarget);


WebSocket WebSocket_new(const jb_USVString* url) : EventTarget(em_Val_global("WebSocket").new_(em_Val_from(url))) {
        return WebSocket(em_Val_new(em_Val_global("WebSocket", em_Val_from(url)));
      }


WebSocket WebSocket_new(const jb_USVString* url, const jb_Any* protocols) : EventTarget(em_Val_global("WebSocket").new_(em_Val_from(url), em_Val_from(protocols))) {
        return WebSocket(em_Val_new(em_Val_global("WebSocket", em_Val_from(url), em_Val_from(protocols)));
      }


jb_USVString WebSocket_url(const WebSocket *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "url"));
}


unsigned short WebSocket_readyState(const WebSocket *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "readyState"));
}


long long WebSocket_bufferedAmount(const WebSocket *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "bufferedAmount"));
}


jb_Any WebSocket_onopen(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onopen"));
}


void WebSocket_set_onopen(WebSocket* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onopen", value);
}


jb_Any WebSocket_onerror(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void WebSocket_set_onerror(WebSocket* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any WebSocket_onclose(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclose"));
}


void WebSocket_set_onclose(WebSocket* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclose", value);
}


jb_DOMString WebSocket_extensions(const WebSocket *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "extensions"));
}


jb_DOMString WebSocket_protocol(const WebSocket *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "protocol"));
}


jb_Undefined WebSocket_close(WebSocket* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Undefined WebSocket_close(WebSocket* self , unsigned short code) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close", em_Val_from(code)));
}


jb_Undefined WebSocket_close(WebSocket* self , unsigned short code, const jb_USVString* reason) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close", em_Val_from(code), em_Val_from(reason)));
}


jb_Any WebSocket_onmessage(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void WebSocket_set_onmessage(WebSocket* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


BinaryType WebSocket_binaryType(const WebSocket *self) {
    return em_Val_as(BinaryType, em_Val_get(EventTarget_as_val(self->inner), "binaryType"));
}


void WebSocket_set_binaryType(WebSocket* self, const BinaryType* value) {
    em_Val_set(EventTarget_as_val(self->inner), "binaryType", value);
}


jb_Undefined WebSocket_send(WebSocket* self , const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "send", em_Val_from(data)));
}

