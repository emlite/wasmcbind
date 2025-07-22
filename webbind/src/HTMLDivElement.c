#include <webbind/HTMLDivElement.h>


DEFINE_EMLITE_TYPE(HTMLDivElement, HTMLElement);


HTMLDivElement HTMLDivElement_new() : HTMLElement(em_Val_global("HTMLDivElement").new_()) {
        return HTMLDivElement(em_Val_new(em_Val_global("HTMLDivElement", ));
      }


jb_DOMString HTMLDivElement_align(const HTMLDivElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLDivElement_set_align(HTMLDivElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}

