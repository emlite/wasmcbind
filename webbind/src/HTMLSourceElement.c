#include <webbind/HTMLSourceElement.h>


DEFINE_EMLITE_TYPE(HTMLSourceElement, HTMLElement);


HTMLSourceElement HTMLSourceElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLSourceElement") );
        return HTMLSourceElement_from_val(&vv);
      }


jb_String HTMLSourceElement_src(const HTMLSourceElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLSourceElement_set_src(HTMLSourceElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String HTMLSourceElement_type(const HTMLSourceElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLSourceElement_set_type(HTMLSourceElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String HTMLSourceElement_srcset(const HTMLSourceElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("srcset")));
}


void HTMLSourceElement_set_srcset(HTMLSourceElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("srcset"), em_Val_from(value));
}


jb_String HTMLSourceElement_sizes(const HTMLSourceElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sizes")));
}


void HTMLSourceElement_set_sizes(HTMLSourceElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("sizes"), em_Val_from(value));
}


jb_String HTMLSourceElement_media(const HTMLSourceElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("media")));
}


void HTMLSourceElement_set_media(HTMLSourceElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("media"), em_Val_from(value));
}


unsigned long HTMLSourceElement_width(const HTMLSourceElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLSourceElement_set_width(HTMLSourceElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long HTMLSourceElement_height(const HTMLSourceElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLSourceElement_set_height(HTMLSourceElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}

