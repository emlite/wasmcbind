#include <webbind/HTMLLIElement.h>


DEFINE_EMLITE_TYPE(HTMLLIElement, HTMLElement);


HTMLLIElement HTMLLIElement_new() : HTMLElement(em_Val_global("HTMLLIElement").new_()) {
        return HTMLLIElement(em_Val_new(em_Val_global("HTMLLIElement", ));
      }


long HTMLLIElement_value(const HTMLLIElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLLIElement_set_value(HTMLLIElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


jb_DOMString HTMLLIElement_type(const HTMLLIElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLLIElement_set_type(HTMLLIElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}

