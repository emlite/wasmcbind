#include <webbind/HTMLMetaElement.h>


DEFINE_EMLITE_TYPE(HTMLMetaElement, HTMLElement);


HTMLMetaElement HTMLMetaElement_new() : HTMLElement(em_Val_global("HTMLMetaElement").new_()) {
        return HTMLMetaElement(em_Val_new(em_Val_global("HTMLMetaElement", ));
      }


jb_DOMString HTMLMetaElement_name(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLMetaElement_set_name(HTMLMetaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLMetaElement_httpEquiv(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "httpEquiv"));
}


void HTMLMetaElement_set_httpEquiv(HTMLMetaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "httpEquiv", value);
}


jb_DOMString HTMLMetaElement_content(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "content"));
}


void HTMLMetaElement_set_content(HTMLMetaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "content", value);
}


jb_DOMString HTMLMetaElement_media(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "media"));
}


void HTMLMetaElement_set_media(HTMLMetaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "media", value);
}


jb_DOMString HTMLMetaElement_scheme(const HTMLMetaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "scheme"));
}


void HTMLMetaElement_set_scheme(HTMLMetaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "scheme", value);
}

