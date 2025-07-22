#include <webbind/HTMLUListElement.h>


DEFINE_EMLITE_TYPE(HTMLUListElement, HTMLElement);


HTMLUListElement HTMLUListElement_new() : HTMLElement(em_Val_global("HTMLUListElement").new_()) {
        return HTMLUListElement(em_Val_new(em_Val_global("HTMLUListElement", ));
      }


bool HTMLUListElement_compact(const HTMLUListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "compact"));
}


void HTMLUListElement_set_compact(HTMLUListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "compact", value);
}


jb_DOMString HTMLUListElement_type(const HTMLUListElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLUListElement_set_type(HTMLUListElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}

