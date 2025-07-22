#include <webbind/XMLHttpRequestEventTarget.h>


DEFINE_EMLITE_TYPE(XMLHttpRequestEventTarget, EventTarget);


jb_Any XMLHttpRequestEventTarget_onloadstart(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onloadstart"));
}


void XMLHttpRequestEventTarget_set_onloadstart(XMLHttpRequestEventTarget* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onloadstart", value);
}


jb_Any XMLHttpRequestEventTarget_onprogress(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onprogress"));
}


void XMLHttpRequestEventTarget_set_onprogress(XMLHttpRequestEventTarget* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onprogress", value);
}


jb_Any XMLHttpRequestEventTarget_onabort(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onabort"));
}


void XMLHttpRequestEventTarget_set_onabort(XMLHttpRequestEventTarget* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onabort", value);
}


jb_Any XMLHttpRequestEventTarget_onerror(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void XMLHttpRequestEventTarget_set_onerror(XMLHttpRequestEventTarget* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any XMLHttpRequestEventTarget_onload(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onload"));
}


void XMLHttpRequestEventTarget_set_onload(XMLHttpRequestEventTarget* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onload", value);
}


jb_Any XMLHttpRequestEventTarget_ontimeout(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ontimeout"));
}


void XMLHttpRequestEventTarget_set_ontimeout(XMLHttpRequestEventTarget* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ontimeout", value);
}


jb_Any XMLHttpRequestEventTarget_onloadend(const XMLHttpRequestEventTarget *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onloadend"));
}


void XMLHttpRequestEventTarget_set_onloadend(XMLHttpRequestEventTarget* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onloadend", value);
}

