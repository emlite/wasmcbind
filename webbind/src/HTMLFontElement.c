#include <webbind/HTMLFontElement.h>


DEFINE_EMLITE_TYPE(HTMLFontElement, HTMLElement);


HTMLFontElement HTMLFontElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLFontElement") );
        return HTMLFontElement_from_val(&vv);
      }


jb_DOMString HTMLFontElement_color(const HTMLFontElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("color")));
}


void HTMLFontElement_set_color(HTMLFontElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("color"), em_Val_from(value));
}


jb_DOMString HTMLFontElement_face(const HTMLFontElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("face")));
}


void HTMLFontElement_set_face(HTMLFontElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("face"), em_Val_from(value));
}


jb_DOMString HTMLFontElement_size(const HTMLFontElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("size")));
}


void HTMLFontElement_set_size(HTMLFontElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}

