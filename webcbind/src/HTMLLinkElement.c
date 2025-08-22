#include <webcbind/HTMLLinkElement.h>

#include <webcbind/DOMTokenList.h>
#include <webcbind/CSSStyleSheet.h>

DEFINE_EMLITE_TYPE(HTMLLinkElement, HTMLElement);


HTMLLinkElement HTMLLinkElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLLinkElement") );
        return HTMLLinkElement_from_val(&vv);
      }


jb_String HTMLLinkElement_href(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("href")));
}


void HTMLLinkElement_set_href(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("href"), em_Val_from(value));
}


jb_String HTMLLinkElement_crossOrigin(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin")));
}


void HTMLLinkElement_set_crossOrigin(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin"), em_Val_from(value));
}


jb_String HTMLLinkElement_rel(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rel")));
}


void HTMLLinkElement_set_rel(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rel"), em_Val_from(value));
}


jb_String HTMLLinkElement_as(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("as")));
}


void HTMLLinkElement_set_as(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("as"), em_Val_from(value));
}


DOMTokenList HTMLLinkElement_relList(const HTMLLinkElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("relList")));
}


jb_String HTMLLinkElement_media(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("media")));
}


void HTMLLinkElement_set_media(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("media"), em_Val_from(value));
}


jb_String HTMLLinkElement_integrity(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("integrity")));
}


void HTMLLinkElement_set_integrity(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("integrity"), em_Val_from(value));
}


jb_String HTMLLinkElement_hreflang(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hreflang")));
}


void HTMLLinkElement_set_hreflang(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hreflang"), em_Val_from(value));
}


jb_String HTMLLinkElement_type(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLLinkElement_set_type(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


DOMTokenList HTMLLinkElement_sizes(const HTMLLinkElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sizes")));
}


jb_String HTMLLinkElement_imageSrcset(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("imageSrcset")));
}


void HTMLLinkElement_set_imageSrcset(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("imageSrcset"), em_Val_from(value));
}


jb_String HTMLLinkElement_imageSizes(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("imageSizes")));
}


void HTMLLinkElement_set_imageSizes(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("imageSizes"), em_Val_from(value));
}


jb_String HTMLLinkElement_referrerPolicy(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void HTMLLinkElement_set_referrerPolicy(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


DOMTokenList HTMLLinkElement_blocking(const HTMLLinkElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("blocking")));
}


bool HTMLLinkElement_disabled(const HTMLLinkElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLLinkElement_set_disabled(HTMLLinkElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


jb_String HTMLLinkElement_fetchPriority(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("fetchPriority")));
}


void HTMLLinkElement_set_fetchPriority(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("fetchPriority"), em_Val_from(value));
}


jb_String HTMLLinkElement_charset(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("charset")));
}


void HTMLLinkElement_set_charset(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("charset"), em_Val_from(value));
}


jb_String HTMLLinkElement_rev(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rev")));
}


void HTMLLinkElement_set_rev(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rev"), em_Val_from(value));
}


jb_String HTMLLinkElement_target(const HTMLLinkElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("target")));
}


void HTMLLinkElement_set_target(HTMLLinkElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}


CSSStyleSheet HTMLLinkElement_sheet(const HTMLLinkElement *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sheet")));
}

