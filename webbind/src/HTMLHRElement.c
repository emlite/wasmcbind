#include <webbind/HTMLHRElement.h>


DEFINE_EMLITE_TYPE(HTMLHRElement, HTMLElement);


HTMLHRElement HTMLHRElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLHRElement") );
        return HTMLHRElement_from_val(&vv);
      }


jb_DOMString HTMLHRElement_align(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLHRElement_set_align(HTMLHRElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_DOMString HTMLHRElement_color(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("color")));
}


void HTMLHRElement_set_color(HTMLHRElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("color"), em_Val_from(value));
}


bool HTMLHRElement_noShade(const HTMLHRElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("noShade")));
}


void HTMLHRElement_set_noShade(HTMLHRElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("noShade"), em_Val_from(value));
}


jb_DOMString HTMLHRElement_size(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("size")));
}


void HTMLHRElement_set_size(HTMLHRElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_DOMString HTMLHRElement_width(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLHRElement_set_width(HTMLHRElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}

