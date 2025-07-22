#include <webbind/HTMLMetaElement.h>


DEFINE_EMLITE_TYPE(HTMLMetaElement, HTMLElement);


HTMLMetaElement HTMLMetaElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLMetaElement") );
        return HTMLMetaElement_from_val(&vv);
      }


jb_DOMString HTMLMetaElement_name(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLMetaElement_set_name(HTMLMetaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_DOMString HTMLMetaElement_httpEquiv(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("httpEquiv")));
}


void HTMLMetaElement_set_httpEquiv(HTMLMetaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("httpEquiv"), em_Val_from(value));
}


jb_DOMString HTMLMetaElement_content(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("content")));
}


void HTMLMetaElement_set_content(HTMLMetaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("content"), em_Val_from(value));
}


jb_DOMString HTMLMetaElement_media(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("media")));
}


void HTMLMetaElement_set_media(HTMLMetaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("media"), em_Val_from(value));
}


jb_DOMString HTMLMetaElement_scheme(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("scheme")));
}


void HTMLMetaElement_set_scheme(HTMLMetaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("scheme"), em_Val_from(value));
}

