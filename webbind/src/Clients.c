#include <webbind/Clients.h>

#include <webbind/Client.h>
#include <webbind/ClientQueryOptions.h>
#include <webbind/WindowClient.h>

DEFINE_EMLITE_TYPE(Clients, em_Val);


jb_Promise Clients_get(Clients* self , jb_String * id) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(id)));
}


jb_Promise Clients_matchAll0(Clients* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll"));
}


jb_Promise Clients_matchAll1(Clients* self , ClientQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll", em_Val_from(options)));
}


jb_Promise Clients_openWindow(Clients* self , jb_String * url) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "openWindow", em_Val_from(url)));
}


jb_Promise Clients_claim(Clients* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "claim"));
}

