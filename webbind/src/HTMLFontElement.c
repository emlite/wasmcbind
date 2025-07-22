#include <webbind/HTMLFontElement.h>


DEFINE_EMLITE_TYPE(HTMLFontElement, HTMLElement);


HTMLFontElement HTMLFontElement_new() : HTMLElement(em_Val_global("HTMLFontElement").new_()) {
        return HTMLFontElement(em_Val_new(em_Val_global("HTMLFontElement", ));
      }


jb_DOMString HTMLFontElement_color(const HTMLFontElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "color"));
}


void HTMLFontElement_set_color(HTMLFontElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "color", value);
}


jb_DOMString HTMLFontElement_face(const HTMLFontElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "face"));
}


void HTMLFontElement_set_face(HTMLFontElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "face", value);
}


jb_DOMString HTMLFontElement_size(const HTMLFontElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "size"));
}


void HTMLFontElement_set_size(HTMLFontElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "size", value);
}

