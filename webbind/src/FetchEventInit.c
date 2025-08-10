#include <webbind/FetchEventInit.h>

#include <webbind/Request.h>

DEFINE_EMLITE_TYPE(FetchEventInit, ExtendableEventInit);


Request FetchEventInit_request(const FetchEventInit *self) {
    return em_Val_as(Request, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("request")));
}


void FetchEventInit_set_request(FetchEventInit* self, Request * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("request"), em_Val_from(value));
}


jb_Promise FetchEventInit_preloadResponse(const FetchEventInit *self) {
    return em_Val_as(jb_Promise, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("preloadResponse")));
}


void FetchEventInit_set_preloadResponse(FetchEventInit* self, jb_Promise * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("preloadResponse"), em_Val_from(value));
}


jb_String FetchEventInit_clientId(const FetchEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("clientId")));
}


void FetchEventInit_set_clientId(FetchEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("clientId"), em_Val_from(value));
}


jb_String FetchEventInit_resultingClientId(const FetchEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("resultingClientId")));
}


void FetchEventInit_set_resultingClientId(FetchEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("resultingClientId"), em_Val_from(value));
}


jb_String FetchEventInit_replacesClientId(const FetchEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("replacesClientId")));
}


void FetchEventInit_set_replacesClientId(FetchEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("replacesClientId"), em_Val_from(value));
}


jb_Promise FetchEventInit_handled(const FetchEventInit *self) {
    return em_Val_as(jb_Promise, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("handled")));
}


void FetchEventInit_set_handled(FetchEventInit* self, jb_Promise * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("handled"), em_Val_from(value));
}


FetchEventInit FetchEventInit_new() {
    em_Val obj = em_Val_object();
    return FetchEventInit_from_val(&obj);
}

