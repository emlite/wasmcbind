#include <webbind/PresentationConnection.h>


DEFINE_EMLITE_TYPE(PresentationConnection, EventTarget);


jb_String PresentationConnection_id(const PresentationConnection *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


jb_String PresentationConnection_url(const PresentationConnection *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("url")));
}


PresentationConnectionState PresentationConnection_state(const PresentationConnection *self) {
    return em_Val_as(PresentationConnectionState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


jb_Undefined PresentationConnection_close(PresentationConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Undefined PresentationConnection_terminate(PresentationConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "terminate"));
}


jb_Any PresentationConnection_onconnect(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnect")));
}


void PresentationConnection_set_onconnect(PresentationConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnect"), em_Val_from(value));
}


jb_Any PresentationConnection_onclose(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclose")));
}


void PresentationConnection_set_onclose(PresentationConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclose"), em_Val_from(value));
}


jb_Any PresentationConnection_onterminate(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onterminate")));
}


void PresentationConnection_set_onterminate(PresentationConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onterminate"), em_Val_from(value));
}


BinaryType PresentationConnection_binaryType(const PresentationConnection *self) {
    return em_Val_as(BinaryType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("binaryType")));
}


void PresentationConnection_set_binaryType(PresentationConnection* self, BinaryType * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("binaryType"), em_Val_from(value));
}


jb_Any PresentationConnection_onmessage(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void PresentationConnection_set_onmessage(PresentationConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Undefined PresentationConnection_send(PresentationConnection* self , jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "send", em_Val_from(data)));
}

