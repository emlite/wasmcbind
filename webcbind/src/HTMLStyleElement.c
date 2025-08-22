#include <webcbind/HTMLStyleElement.h>

#include <webcbind/DOMTokenList.h>
#include <webcbind/CSSStyleSheet.h>

DEFINE_EMLITE_TYPE(HTMLStyleElement, HTMLElement);


HTMLStyleElement HTMLStyleElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLStyleElement") );
        return HTMLStyleElement_from_val(&vv);
      }


bool HTMLStyleElement_disabled(const HTMLStyleElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLStyleElement_set_disabled(HTMLStyleElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


jb_String HTMLStyleElement_media(const HTMLStyleElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("media")));
}


void HTMLStyleElement_set_media(HTMLStyleElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("media"), em_Val_from(value));
}


DOMTokenList HTMLStyleElement_blocking(const HTMLStyleElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("blocking")));
}


jb_String HTMLStyleElement_type(const HTMLStyleElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLStyleElement_set_type(HTMLStyleElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


CSSStyleSheet HTMLStyleElement_sheet(const HTMLStyleElement *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sheet")));
}

