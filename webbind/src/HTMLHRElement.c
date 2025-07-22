#include <webbind/HTMLHRElement.h>


DEFINE_EMLITE_TYPE(HTMLHRElement, HTMLElement);


HTMLHRElement HTMLHRElement_new() : HTMLElement(em_Val_global("HTMLHRElement").new_()) {
        return HTMLHRElement(em_Val_new(em_Val_global("HTMLHRElement", ));
      }


jb_DOMString HTMLHRElement_align(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLHRElement_set_align(HTMLHRElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLHRElement_color(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "color"));
}


void HTMLHRElement_set_color(HTMLHRElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "color", value);
}


bool HTMLHRElement_noShade(const HTMLHRElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "noShade"));
}


void HTMLHRElement_set_noShade(HTMLHRElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "noShade", value);
}


jb_DOMString HTMLHRElement_size(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "size"));
}


void HTMLHRElement_set_size(HTMLHRElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "size", value);
}


jb_DOMString HTMLHRElement_width(const HTMLHRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLHRElement_set_width(HTMLHRElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}

