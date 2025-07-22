#include <webbind/HTMLScriptElement.h>
#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(HTMLScriptElement, HTMLElement);


HTMLScriptElement HTMLScriptElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLScriptElement") );
        return HTMLScriptElement_from_val(&vv);
      }


jb_DOMString HTMLScriptElement_type(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLScriptElement_set_type(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_USVString HTMLScriptElement_src(const HTMLScriptElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLScriptElement_set_src(HTMLScriptElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


bool HTMLScriptElement_noModule(const HTMLScriptElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("noModule")));
}


void HTMLScriptElement_set_noModule(HTMLScriptElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("noModule"), em_Val_from(value));
}


bool HTMLScriptElement_async(const HTMLScriptElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("async")));
}


void HTMLScriptElement_set_async(HTMLScriptElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("async"), em_Val_from(value));
}


bool HTMLScriptElement_defer(const HTMLScriptElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defer")));
}


void HTMLScriptElement_set_defer(HTMLScriptElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defer"), em_Val_from(value));
}


DOMTokenList HTMLScriptElement_blocking(const HTMLScriptElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("blocking")));
}


jb_DOMString HTMLScriptElement_crossOrigin(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin")));
}


void HTMLScriptElement_set_crossOrigin(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin"), em_Val_from(value));
}


jb_DOMString HTMLScriptElement_referrerPolicy(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void HTMLScriptElement_set_referrerPolicy(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


jb_DOMString HTMLScriptElement_integrity(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("integrity")));
}


void HTMLScriptElement_set_integrity(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("integrity"), em_Val_from(value));
}


jb_DOMString HTMLScriptElement_fetchPriority(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("fetchPriority")));
}


void HTMLScriptElement_set_fetchPriority(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("fetchPriority"), em_Val_from(value));
}


jb_DOMString HTMLScriptElement_text(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("text")));
}


void HTMLScriptElement_set_text(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


bool HTMLScriptElement_supports(HTMLScriptElement* self , jb_DOMString * type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("htmlscriptelement"), "supports", em_Val_from(type)));
}


jb_DOMString HTMLScriptElement_charset(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("charset")));
}


void HTMLScriptElement_set_charset(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("charset"), em_Val_from(value));
}


jb_DOMString HTMLScriptElement_event(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("event")));
}


void HTMLScriptElement_set_event(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("event"), em_Val_from(value));
}


jb_DOMString HTMLScriptElement_htmlFor(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("htmlFor")));
}


void HTMLScriptElement_set_htmlFor(HTMLScriptElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("htmlFor"), em_Val_from(value));
}


jb_USVString HTMLScriptElement_attributionSrc(const HTMLScriptElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc")));
}


void HTMLScriptElement_set_attributionSrc(HTMLScriptElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc"), em_Val_from(value));
}

