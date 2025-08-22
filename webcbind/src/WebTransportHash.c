#include <webcbind/WebTransportHash.h>

DEFINE_EMLITE_TYPE(WebTransportHash, em_Val);


jb_String WebTransportHash_algorithm(const WebTransportHash *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("algorithm")));
}


void WebTransportHash_set_algorithm(WebTransportHash* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("algorithm"), em_Val_from(value));
}


jb_Any WebTransportHash_value(const WebTransportHash *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void WebTransportHash_set_value(WebTransportHash* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


WebTransportHash WebTransportHash_new() {
    em_Val obj = em_Val_object();
    return WebTransportHash_from_val(&obj);
}

