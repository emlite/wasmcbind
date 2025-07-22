#include <webbind/HTMLOptGroupElement.h>


DEFINE_EMLITE_TYPE(HTMLOptGroupElement, HTMLElement);


HTMLOptGroupElement HTMLOptGroupElement_new() : HTMLElement(em_Val_global("HTMLOptGroupElement").new_()) {
        return HTMLOptGroupElement(em_Val_new(em_Val_global("HTMLOptGroupElement", ));
      }


bool HTMLOptGroupElement_disabled(const HTMLOptGroupElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLOptGroupElement_set_disabled(HTMLOptGroupElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


jb_DOMString HTMLOptGroupElement_label(const HTMLOptGroupElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "label"));
}


void HTMLOptGroupElement_set_label(HTMLOptGroupElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "label", value);
}

