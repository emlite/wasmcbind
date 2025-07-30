#include <webbind/Request.h>
#include <webbind/Headers.h>
#include <webbind/AbortSignal.h>
#include <webbind/ReadableStream.h>
#include <webbind/Blob.h>
#include <webbind/FormData.h>


DEFINE_EMLITE_TYPE(Request, em_Val);


Request Request_new0(jb_Any * input) {
        em_Val vv = em_Val_new(em_Val_global("Request") , em_Val_from(input));
        return Request_from_val(&vv);
      }


Request Request_new1(jb_Any * input, jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("Request") , em_Val_from(input), em_Val_from(init));
        return Request_from_val(&vv);
      }


jb_String Request_method(const Request *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("method")));
}


jb_String Request_url(const Request *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


Headers Request_headers(const Request *self) {
    return em_Val_as(Headers, em_Val_get(em_Val_as_val(self->inner), em_Val_from("headers")));
}


RequestDestination Request_destination(const Request *self) {
    return em_Val_as(RequestDestination, em_Val_get(em_Val_as_val(self->inner), em_Val_from("destination")));
}


jb_String Request_referrer(const Request *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("referrer")));
}


ReferrerPolicy Request_referrerPolicy(const Request *self) {
    return em_Val_as(ReferrerPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("referrerPolicy")));
}


RequestMode Request_mode(const Request *self) {
    return em_Val_as(RequestMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


RequestCredentials Request_credentials(const Request *self) {
    return em_Val_as(RequestCredentials, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentials")));
}


RequestCache Request_cache(const Request *self) {
    return em_Val_as(RequestCache, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cache")));
}


RequestRedirect Request_redirect(const Request *self) {
    return em_Val_as(RequestRedirect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("redirect")));
}


jb_String Request_integrity(const Request *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("integrity")));
}


bool Request_keepalive(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepalive")));
}


bool Request_isReloadNavigation(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isReloadNavigation")));
}


bool Request_isHistoryNavigation(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isHistoryNavigation")));
}


AbortSignal Request_signal(const Request *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


RequestDuplex Request_duplex(const Request *self) {
    return em_Val_as(RequestDuplex, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duplex")));
}


Request Request_clone(Request* self ) {
    return em_Val_as(Request, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


IPAddressSpace Request_targetAddressSpace(const Request *self) {
    return em_Val_as(IPAddressSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetAddressSpace")));
}


ReadableStream Request_body(const Request *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("body")));
}


bool Request_bodyUsed(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bodyUsed")));
}


jb_Promise Request_arrayBuffer(Request* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "arrayBuffer"));
}


jb_Promise Request_blob(Request* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "blob"));
}


jb_Promise Request_bytes(Request* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "bytes"));
}


jb_Promise Request_formData(Request* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "formData"));
}


jb_Promise Request_json(Request* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "json"));
}


jb_Promise Request_text(Request* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "text"));
}

