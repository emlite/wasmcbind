#include <webbind/Response.h>
#include <webbind/Headers.h>
#include <webbind/ReadableStream.h>
#include <webbind/Blob.h>
#include <webbind/FormData.h>


DEFINE_EMLITE_TYPE(Response, em_Val);


Response Response_new() : em_Val(em_Val_global("Response").new_()) {
        return Response(em_Val_new(em_Val_global("Response", ));
      }


Response Response_new(const jb_Any* body) : em_Val(em_Val_global("Response").new_(em_Val_from(body))) {
        return Response(em_Val_new(em_Val_global("Response", em_Val_from(body)));
      }


Response Response_new(const jb_Any* body, const jb_Any* init) : em_Val(em_Val_global("Response").new_(em_Val_from(body), em_Val_from(init))) {
        return Response(em_Val_new(em_Val_global("Response", em_Val_from(body), em_Val_from(init)));
      }


Response Response_error(Response* self ) {
    return em_Val_as(Response, em_Val_call(em_Val_global("response"), "error"));
}


Response Response_redirect(Response* self , const jb_USVString* url) {
    return em_Val_as(Response, em_Val_call(em_Val_global("response"), "redirect", em_Val_from(url)));
}


Response Response_redirect(Response* self , const jb_USVString* url, unsigned short status) {
    return em_Val_as(Response, em_Val_call(em_Val_global("response"), "redirect", em_Val_from(url), em_Val_from(status)));
}


jb_Promise Response_json(Response* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "json"));
}


ResponseType Response_type(const Response *self) {
    return em_Val_as(ResponseType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


jb_USVString Response_url(const Response *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


bool Response_redirected(const Response *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "redirected"));
}


unsigned short Response_status(const Response *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "status"));
}


bool Response_ok(const Response *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ok"));
}


jb_ByteString Response_statusText(const Response *self) {
    return em_Val_as(jb_ByteString, em_Val_get(em_Val_as_val(self->inner), "statusText"));
}


Headers Response_headers(const Response *self) {
    return em_Val_as(Headers, em_Val_get(em_Val_as_val(self->inner), "headers"));
}


Response Response_clone(Response* self ) {
    return em_Val_as(Response, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


ReadableStream Response_body(const Response *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "body"));
}


bool Response_bodyUsed(const Response *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "bodyUsed"));
}


jb_Promise Response_arrayBuffer(Response* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "arrayBuffer"));
}


jb_Promise Response_blob(Response* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "blob"));
}


jb_Promise Response_bytes(Response* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "bytes"));
}


jb_Promise Response_formData(Response* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "formData"));
}


jb_Promise Response_text(Response* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "text"));
}

