#include <webbind/WebSocket.h>


DEFINE_EMLITE_TYPE(WebSocket, EventTarget);


WebSocket WebSocket_new0(jb_USVString * url) {
        em_Val vv = em_Val_new(em_Val_global("WebSocket") , em_Val_from(url));
        return WebSocket_from_val(&vv);
      }


WebSocket WebSocket_new1(jb_USVString * url, jb_Any * protocols) {
        em_Val vv = em_Val_new(em_Val_global("WebSocket") , em_Val_from(url), em_Val_from(protocols));
        return WebSocket_from_val(&vv);
      }


jb_USVString WebSocket_url(const WebSocket *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("url")));
}


unsigned short WebSocket_readyState(const WebSocket *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readyState")));
}


long long WebSocket_bufferedAmount(const WebSocket *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("bufferedAmount")));
}


jb_Any WebSocket_onopen(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onopen")));
}


void WebSocket_set_onopen(WebSocket* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onopen"), em_Val_from(value));
}


jb_Any WebSocket_onerror(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void WebSocket_set_onerror(WebSocket* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any WebSocket_onclose(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclose")));
}


void WebSocket_set_onclose(WebSocket* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclose"), em_Val_from(value));
}


jb_DOMString WebSocket_extensions(const WebSocket *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("extensions")));
}


jb_DOMString WebSocket_protocol(const WebSocket *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("protocol")));
}


jb_Undefined WebSocket_close0(WebSocket* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Undefined WebSocket_close1(WebSocket* self , unsigned short code) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close", em_Val_from(code)));
}


jb_Undefined WebSocket_close2(WebSocket* self , unsigned short code, jb_USVString * reason) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close", em_Val_from(code), em_Val_from(reason)));
}


jb_Any WebSocket_onmessage(const WebSocket *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void WebSocket_set_onmessage(WebSocket* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


BinaryType WebSocket_binaryType(const WebSocket *self) {
    return em_Val_as(BinaryType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("binaryType")));
}


void WebSocket_set_binaryType(WebSocket* self, BinaryType * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("binaryType"), em_Val_from(value));
}


jb_Undefined WebSocket_send(WebSocket* self , jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "send", em_Val_from(data)));
}

