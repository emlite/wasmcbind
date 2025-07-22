#include <webbind/HTMLMenuElement.h>


DEFINE_EMLITE_TYPE(HTMLMenuElement, HTMLElement);


HTMLMenuElement HTMLMenuElement_new() : HTMLElement(em_Val_global("HTMLMenuElement").new_()) {
        return HTMLMenuElement(em_Val_new(em_Val_global("HTMLMenuElement", ));
      }


bool HTMLMenuElement_compact(const HTMLMenuElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "compact"));
}


void HTMLMenuElement_set_compact(HTMLMenuElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "compact", value);
}

