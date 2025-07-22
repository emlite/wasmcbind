#include <webbind/HTMLSourceElement.h>


DEFINE_EMLITE_TYPE(HTMLSourceElement, HTMLElement);


HTMLSourceElement HTMLSourceElement_new() : HTMLElement(em_Val_global("HTMLSourceElement").new_()) {
        return HTMLSourceElement(em_Val_new(em_Val_global("HTMLSourceElement", ));
      }


jb_USVString HTMLSourceElement_src(const HTMLSourceElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLSourceElement_set_src(HTMLSourceElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_DOMString HTMLSourceElement_type(const HTMLSourceElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLSourceElement_set_type(HTMLSourceElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_USVString HTMLSourceElement_srcset(const HTMLSourceElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "srcset"));
}


void HTMLSourceElement_set_srcset(HTMLSourceElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "srcset", value);
}


jb_DOMString HTMLSourceElement_sizes(const HTMLSourceElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "sizes"));
}


void HTMLSourceElement_set_sizes(HTMLSourceElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "sizes", value);
}


jb_DOMString HTMLSourceElement_media(const HTMLSourceElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "media"));
}


void HTMLSourceElement_set_media(HTMLSourceElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "media", value);
}


unsigned long HTMLSourceElement_width(const HTMLSourceElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLSourceElement_set_width(HTMLSourceElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


unsigned long HTMLSourceElement_height(const HTMLSourceElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLSourceElement_set_height(HTMLSourceElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}

