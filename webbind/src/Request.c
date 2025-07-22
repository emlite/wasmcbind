#include <webbind/Request.h>
#include <webbind/Headers.h>
#include <webbind/AbortSignal.h>
#include <webbind/ReadableStream.h>
#include <webbind/Blob.h>
#include <webbind/FormData.h>


DEFINE_EMLITE_TYPE(Request, em_Val);


Request Request_new(const jb_Any* input) : em_Val(em_Val_global("Request").new_(em_Val_from(input))) {
        return Request(em_Val_new(em_Val_global("Request", em_Val_from(input)));
      }


Request Request_new(const jb_Any* input, const jb_Any* init) : em_Val(em_Val_global("Request").new_(em_Val_from(input), em_Val_from(init))) {
        return Request(em_Val_new(em_Val_global("Request", em_Val_from(input), em_Val_from(init)));
      }


jb_ByteString Request_method(const Request *self) {
    return em_Val_as(jb_ByteString, em_Val_get(em_Val_as_val(self->inner), "method"));
}


jb_USVString Request_url(const Request *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


Headers Request_headers(const Request *self) {
    return em_Val_as(Headers, em_Val_get(em_Val_as_val(self->inner), "headers"));
}


RequestDestination Request_destination(const Request *self) {
    return em_Val_as(RequestDestination, em_Val_get(em_Val_as_val(self->inner), "destination"));
}


jb_USVString Request_referrer(const Request *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "referrer"));
}


ReferrerPolicy Request_referrerPolicy(const Request *self) {
    return em_Val_as(ReferrerPolicy, em_Val_get(em_Val_as_val(self->inner), "referrerPolicy"));
}


RequestMode Request_mode(const Request *self) {
    return em_Val_as(RequestMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


RequestCredentials Request_credentials(const Request *self) {
    return em_Val_as(RequestCredentials, em_Val_get(em_Val_as_val(self->inner), "credentials"));
}


RequestCache Request_cache(const Request *self) {
    return em_Val_as(RequestCache, em_Val_get(em_Val_as_val(self->inner), "cache"));
}


RequestRedirect Request_redirect(const Request *self) {
    return em_Val_as(RequestRedirect, em_Val_get(em_Val_as_val(self->inner), "redirect"));
}


jb_DOMString Request_integrity(const Request *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "integrity"));
}


bool Request_keepalive(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "keepalive"));
}


bool Request_isReloadNavigation(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "isReloadNavigation"));
}


bool Request_isHistoryNavigation(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "isHistoryNavigation"));
}


AbortSignal Request_signal(const Request *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


RequestDuplex Request_duplex(const Request *self) {
    return em_Val_as(RequestDuplex, em_Val_get(em_Val_as_val(self->inner), "duplex"));
}


Request Request_clone(Request* self ) {
    return em_Val_as(Request, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


IPAddressSpace Request_targetAddressSpace(const Request *self) {
    return em_Val_as(IPAddressSpace, em_Val_get(em_Val_as_val(self->inner), "targetAddressSpace"));
}


ReadableStream Request_body(const Request *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "body"));
}


bool Request_bodyUsed(const Request *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "bodyUsed"));
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

