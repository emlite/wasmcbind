#include <webbind/HTMLFrameElement.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(HTMLFrameElement, HTMLElement);


HTMLFrameElement HTMLFrameElement_new() : HTMLElement(em_Val_global("HTMLFrameElement").new_()) {
        return HTMLFrameElement(em_Val_new(em_Val_global("HTMLFrameElement", ));
      }


jb_DOMString HTMLFrameElement_name(const HTMLFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLFrameElement_set_name(HTMLFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLFrameElement_scrolling(const HTMLFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "scrolling"));
}


void HTMLFrameElement_set_scrolling(HTMLFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "scrolling", value);
}


jb_USVString HTMLFrameElement_src(const HTMLFrameElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLFrameElement_set_src(HTMLFrameElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_DOMString HTMLFrameElement_frameBorder(const HTMLFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "frameBorder"));
}


void HTMLFrameElement_set_frameBorder(HTMLFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "frameBorder", value);
}


jb_USVString HTMLFrameElement_longDesc(const HTMLFrameElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "longDesc"));
}


void HTMLFrameElement_set_longDesc(HTMLFrameElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "longDesc", value);
}


bool HTMLFrameElement_noResize(const HTMLFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "noResize"));
}


void HTMLFrameElement_set_noResize(HTMLFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "noResize", value);
}


Document HTMLFrameElement_contentDocument(const HTMLFrameElement *self) {
    return em_Val_as(Document, em_Val_get(HTMLElement_as_val(self->inner), "contentDocument"));
}


jb_Any HTMLFrameElement_contentWindow(const HTMLFrameElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "contentWindow"));
}


jb_DOMString HTMLFrameElement_marginHeight(const HTMLFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "marginHeight"));
}


void HTMLFrameElement_set_marginHeight(HTMLFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "marginHeight", value);
}


jb_DOMString HTMLFrameElement_marginWidth(const HTMLFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "marginWidth"));
}


void HTMLFrameElement_set_marginWidth(HTMLFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "marginWidth", value);
}

