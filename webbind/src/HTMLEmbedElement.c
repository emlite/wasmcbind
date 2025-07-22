#include <webbind/HTMLEmbedElement.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(HTMLEmbedElement, HTMLElement);


HTMLEmbedElement HTMLEmbedElement_new() : HTMLElement(em_Val_global("HTMLEmbedElement").new_()) {
        return HTMLEmbedElement(em_Val_new(em_Val_global("HTMLEmbedElement", ));
      }


jb_USVString HTMLEmbedElement_src(const HTMLEmbedElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLEmbedElement_set_src(HTMLEmbedElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_DOMString HTMLEmbedElement_type(const HTMLEmbedElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLEmbedElement_set_type(HTMLEmbedElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_DOMString HTMLEmbedElement_width(const HTMLEmbedElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLEmbedElement_set_width(HTMLEmbedElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_DOMString HTMLEmbedElement_height(const HTMLEmbedElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLEmbedElement_set_height(HTMLEmbedElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


Document HTMLEmbedElement_getSVGDocument(HTMLEmbedElement* self ) {
    return em_Val_as(Document, em_Val_call(HTMLElement_as_val(self->inner), "getSVGDocument"));
}


jb_DOMString HTMLEmbedElement_align(const HTMLEmbedElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLEmbedElement_set_align(HTMLEmbedElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLEmbedElement_name(const HTMLEmbedElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLEmbedElement_set_name(HTMLEmbedElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}

