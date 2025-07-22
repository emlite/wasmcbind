#include <webbind/HTMLDetailsElement.h>


DEFINE_EMLITE_TYPE(HTMLDetailsElement, HTMLElement);


HTMLDetailsElement HTMLDetailsElement_new() : HTMLElement(em_Val_global("HTMLDetailsElement").new_()) {
        return HTMLDetailsElement(em_Val_new(em_Val_global("HTMLDetailsElement", ));
      }


jb_DOMString HTMLDetailsElement_name(const HTMLDetailsElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLDetailsElement_set_name(HTMLDetailsElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


bool HTMLDetailsElement_open(const HTMLDetailsElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "open"));
}


void HTMLDetailsElement_set_open(HTMLDetailsElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "open", value);
}

