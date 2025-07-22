#include <webbind/HTMLBodyElement.h>


DEFINE_EMLITE_TYPE(HTMLBodyElement, HTMLElement);


HTMLBodyElement HTMLBodyElement_new() : HTMLElement(em_Val_global("HTMLBodyElement").new_()) {
        return HTMLBodyElement(em_Val_new(em_Val_global("HTMLBodyElement", ));
      }


jb_Any HTMLBodyElement_onorientationchange(const HTMLBodyElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "onorientationchange"));
}


void HTMLBodyElement_set_onorientationchange(HTMLBodyElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "onorientationchange", value);
}


jb_DOMString HTMLBodyElement_text(const HTMLBodyElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "text"));
}


void HTMLBodyElement_set_text(HTMLBodyElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "text", value);
}


jb_DOMString HTMLBodyElement_link(const HTMLBodyElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "link"));
}


void HTMLBodyElement_set_link(HTMLBodyElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "link", value);
}


jb_DOMString HTMLBodyElement_vLink(const HTMLBodyElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "vLink"));
}


void HTMLBodyElement_set_vLink(HTMLBodyElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vLink", value);
}


jb_DOMString HTMLBodyElement_aLink(const HTMLBodyElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "aLink"));
}


void HTMLBodyElement_set_aLink(HTMLBodyElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "aLink", value);
}


jb_DOMString HTMLBodyElement_bgColor(const HTMLBodyElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "bgColor"));
}


void HTMLBodyElement_set_bgColor(HTMLBodyElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "bgColor", value);
}


jb_DOMString HTMLBodyElement_background(const HTMLBodyElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "background"));
}


void HTMLBodyElement_set_background(HTMLBodyElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "background", value);
}


jb_Any HTMLBodyElement_onportalactivate(const HTMLBodyElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "onportalactivate"));
}


void HTMLBodyElement_set_onportalactivate(HTMLBodyElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "onportalactivate", value);
}

