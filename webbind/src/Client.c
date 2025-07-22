#include <webbind/Client.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(Client, em_Val);


jb_USVString Client_url(const Client *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


FrameType Client_frameType(const Client *self) {
    return em_Val_as(FrameType, em_Val_get(em_Val_as_val(self->inner), "frameType"));
}


jb_DOMString Client_id(const Client *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


ClientType Client_type(const Client *self) {
    return em_Val_as(ClientType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


jb_Undefined Client_postMessage(Client* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined Client_postMessage(Client* self , const jb_Any* message, const StructuredSerializeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


ClientLifecycleState Client_lifecycleState(const Client *self) {
    return em_Val_as(ClientLifecycleState, em_Val_get(em_Val_as_val(self->inner), "lifecycleState"));
}

