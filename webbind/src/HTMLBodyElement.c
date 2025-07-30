#include <webbind/HTMLBodyElement.h>


DEFINE_EMLITE_TYPE(HTMLBodyElement, HTMLElement);


HTMLBodyElement HTMLBodyElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLBodyElement") );
        return HTMLBodyElement_from_val(&vv);
      }


jb_Any HTMLBodyElement_onorientationchange(const HTMLBodyElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("onorientationchange")));
}


void HTMLBodyElement_set_onorientationchange(HTMLBodyElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("onorientationchange"), em_Val_from(value));
}


jb_String HTMLBodyElement_text(const HTMLBodyElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("text")));
}


void HTMLBodyElement_set_text(HTMLBodyElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


jb_String HTMLBodyElement_link(const HTMLBodyElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("link")));
}


void HTMLBodyElement_set_link(HTMLBodyElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("link"), em_Val_from(value));
}


jb_String HTMLBodyElement_vLink(const HTMLBodyElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vLink")));
}


void HTMLBodyElement_set_vLink(HTMLBodyElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vLink"), em_Val_from(value));
}


jb_String HTMLBodyElement_aLink(const HTMLBodyElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("aLink")));
}


void HTMLBodyElement_set_aLink(HTMLBodyElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("aLink"), em_Val_from(value));
}


jb_String HTMLBodyElement_bgColor(const HTMLBodyElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("bgColor")));
}


void HTMLBodyElement_set_bgColor(HTMLBodyElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("bgColor"), em_Val_from(value));
}


jb_String HTMLBodyElement_background(const HTMLBodyElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("background")));
}


void HTMLBodyElement_set_background(HTMLBodyElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("background"), em_Val_from(value));
}


jb_Any HTMLBodyElement_onportalactivate(const HTMLBodyElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("onportalactivate")));
}


void HTMLBodyElement_set_onportalactivate(HTMLBodyElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("onportalactivate"), em_Val_from(value));
}

