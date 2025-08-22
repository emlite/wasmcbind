#include <webcbind/XMLHttpRequestEventTarget.h>

DEFINE_EMLITE_TYPE(XMLHttpRequestEventTarget, EventTarget);


jb_Any XMLHttpRequestEventTarget_onloadstart(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onloadstart")));
}


void XMLHttpRequestEventTarget_set_onloadstart(XMLHttpRequestEventTarget* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onloadstart"), em_Val_from(value));
}


jb_Any XMLHttpRequestEventTarget_onprogress(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onprogress")));
}


void XMLHttpRequestEventTarget_set_onprogress(XMLHttpRequestEventTarget* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onprogress"), em_Val_from(value));
}


jb_Any XMLHttpRequestEventTarget_onabort(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onabort")));
}


void XMLHttpRequestEventTarget_set_onabort(XMLHttpRequestEventTarget* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onabort"), em_Val_from(value));
}


jb_Any XMLHttpRequestEventTarget_onerror(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void XMLHttpRequestEventTarget_set_onerror(XMLHttpRequestEventTarget* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any XMLHttpRequestEventTarget_onload(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onload")));
}


void XMLHttpRequestEventTarget_set_onload(XMLHttpRequestEventTarget* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onload"), em_Val_from(value));
}


jb_Any XMLHttpRequestEventTarget_ontimeout(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ontimeout")));
}


void XMLHttpRequestEventTarget_set_ontimeout(XMLHttpRequestEventTarget* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ontimeout"), em_Val_from(value));
}


jb_Any XMLHttpRequestEventTarget_onloadend(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onloadend")));
}


void XMLHttpRequestEventTarget_set_onloadend(XMLHttpRequestEventTarget* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onloadend"), em_Val_from(value));
}

