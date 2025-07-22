#include <webbind/Clients.h>
#include <webbind/Client.h>
#include <webbind/WindowClient.h>


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

DEFINE_EMLITE_TYPE(Clients, em_Val);


jb_Promise Clients_get(Clients* self , jb_DOMString * id) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(id)));
}


jb_Promise Clients_matchAll0(Clients* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll"));
}


jb_Promise Clients_matchAll1(Clients* self , ClientQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll", em_Val_from(options)));
}


jb_Promise Clients_openWindow(Clients* self , jb_USVString * url) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "openWindow", em_Val_from(url)));
}


jb_Promise Clients_claim(Clients* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "claim"));
}

