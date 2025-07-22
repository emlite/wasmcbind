#include <webbind/HTMLDataElement.h>


DEFINE_EMLITE_TYPE(HTMLDataElement, HTMLElement);


HTMLDataElement HTMLDataElement_new() : HTMLElement(em_Val_global("HTMLDataElement").new_()) {
        return HTMLDataElement(em_Val_new(em_Val_global("HTMLDataElement", ));
      }


jb_DOMString HTMLDataElement_value(const HTMLDataElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLDataElement_set_value(HTMLDataElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}

