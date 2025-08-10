#include <webbind/ClientQueryOptions.h>

DEFINE_EMLITE_TYPE(ClientQueryOptions, em_Val);


bool ClientQueryOptions_includeUncontrolled(const ClientQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("includeUncontrolled")));
}


void ClientQueryOptions_set_includeUncontrolled(ClientQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("includeUncontrolled"), em_Val_from(value));
}


ClientType ClientQueryOptions_type(const ClientQueryOptions *self) {
    return em_Val_as(ClientType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void ClientQueryOptions_set_type(ClientQueryOptions* self, ClientType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


ClientQueryOptions ClientQueryOptions_new() {
    em_Val obj = em_Val_object();
    return ClientQueryOptions_from_val(&obj);
}

