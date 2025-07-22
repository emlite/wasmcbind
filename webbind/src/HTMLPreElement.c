#include <webbind/HTMLPreElement.h>


DEFINE_EMLITE_TYPE(HTMLPreElement, HTMLElement);


HTMLPreElement HTMLPreElement_new() : HTMLElement(em_Val_global("HTMLPreElement").new_()) {
        return HTMLPreElement(em_Val_new(em_Val_global("HTMLPreElement", ));
      }


long HTMLPreElement_width(const HTMLPreElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLPreElement_set_width(HTMLPreElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}

