#include <webbind/HTMLDListElement.h>


DEFINE_EMLITE_TYPE(HTMLDListElement, HTMLElement);


HTMLDListElement HTMLDListElement_new() : HTMLElement(em_Val_global("HTMLDListElement").new_()) {
        return HTMLDListElement(em_Val_new(em_Val_global("HTMLDListElement", ));
      }


bool HTMLDListElement_compact(const HTMLDListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "compact"));
}


void HTMLDListElement_set_compact(HTMLDListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "compact", value);
}

