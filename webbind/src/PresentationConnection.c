#include <webbind/PresentationConnection.h>


DEFINE_EMLITE_TYPE(PresentationConnection, EventTarget);


jb_USVString PresentationConnection_id(const PresentationConnection *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


jb_USVString PresentationConnection_url(const PresentationConnection *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "url"));
}


PresentationConnectionState PresentationConnection_state(const PresentationConnection *self) {
    return em_Val_as(PresentationConnectionState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


jb_Undefined PresentationConnection_close(PresentationConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Undefined PresentationConnection_terminate(PresentationConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "terminate"));
}


jb_Any PresentationConnection_onconnect(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnect"));
}


void PresentationConnection_set_onconnect(PresentationConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnect", value);
}


jb_Any PresentationConnection_onclose(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclose"));
}


void PresentationConnection_set_onclose(PresentationConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclose", value);
}


jb_Any PresentationConnection_onterminate(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onterminate"));
}


void PresentationConnection_set_onterminate(PresentationConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onterminate", value);
}


BinaryType PresentationConnection_binaryType(const PresentationConnection *self) {
    return em_Val_as(BinaryType, em_Val_get(EventTarget_as_val(self->inner), "binaryType"));
}


void PresentationConnection_set_binaryType(PresentationConnection* self, const BinaryType* value) {
    em_Val_set(EventTarget_as_val(self->inner), "binaryType", value);
}


jb_Any PresentationConnection_onmessage(const PresentationConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void PresentationConnection_set_onmessage(PresentationConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Undefined PresentationConnection_send(PresentationConnection* self , const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "send", em_Val_from(data)));
}

