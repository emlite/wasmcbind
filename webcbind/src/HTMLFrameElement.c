#include <webcbind/HTMLFrameElement.h>

#include <webcbind/Document.h>

DEFINE_EMLITE_TYPE(HTMLFrameElement, HTMLElement);


HTMLFrameElement HTMLFrameElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLFrameElement") );
        return HTMLFrameElement_from_val(&vv);
      }


jb_String HTMLFrameElement_name(const HTMLFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLFrameElement_set_name(HTMLFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String HTMLFrameElement_scrolling(const HTMLFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("scrolling")));
}


void HTMLFrameElement_set_scrolling(HTMLFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("scrolling"), em_Val_from(value));
}


jb_String HTMLFrameElement_src(const HTMLFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLFrameElement_set_src(HTMLFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String HTMLFrameElement_frameBorder(const HTMLFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("frameBorder")));
}


void HTMLFrameElement_set_frameBorder(HTMLFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("frameBorder"), em_Val_from(value));
}


jb_String HTMLFrameElement_longDesc(const HTMLFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("longDesc")));
}


void HTMLFrameElement_set_longDesc(HTMLFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("longDesc"), em_Val_from(value));
}


bool HTMLFrameElement_noResize(const HTMLFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("noResize")));
}


void HTMLFrameElement_set_noResize(HTMLFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("noResize"), em_Val_from(value));
}


Document HTMLFrameElement_contentDocument(const HTMLFrameElement *self) {
    return em_Val_as(Document, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("contentDocument")));
}


jb_Any HTMLFrameElement_contentWindow(const HTMLFrameElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("contentWindow")));
}


jb_String HTMLFrameElement_marginHeight(const HTMLFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("marginHeight")));
}


void HTMLFrameElement_set_marginHeight(HTMLFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("marginHeight"), em_Val_from(value));
}


jb_String HTMLFrameElement_marginWidth(const HTMLFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("marginWidth")));
}


void HTMLFrameElement_set_marginWidth(HTMLFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("marginWidth"), em_Val_from(value));
}

