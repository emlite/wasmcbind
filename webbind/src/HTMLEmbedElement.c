#include <webbind/HTMLEmbedElement.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(HTMLEmbedElement, HTMLElement);


HTMLEmbedElement HTMLEmbedElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLEmbedElement") );
        return HTMLEmbedElement_from_val(&vv);
      }


jb_String HTMLEmbedElement_src(const HTMLEmbedElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLEmbedElement_set_src(HTMLEmbedElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String HTMLEmbedElement_type(const HTMLEmbedElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLEmbedElement_set_type(HTMLEmbedElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String HTMLEmbedElement_width(const HTMLEmbedElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLEmbedElement_set_width(HTMLEmbedElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_String HTMLEmbedElement_height(const HTMLEmbedElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLEmbedElement_set_height(HTMLEmbedElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


Document HTMLEmbedElement_getSVGDocument(HTMLEmbedElement* self ) {
    return em_Val_as(Document, em_Val_call(HTMLElement_as_val(self->inner), "getSVGDocument"));
}


jb_String HTMLEmbedElement_align(const HTMLEmbedElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLEmbedElement_set_align(HTMLEmbedElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_String HTMLEmbedElement_name(const HTMLEmbedElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLEmbedElement_set_name(HTMLEmbedElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}

