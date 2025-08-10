#include <webbind/HTMLPreElement.h>

DEFINE_EMLITE_TYPE(HTMLPreElement, HTMLElement);


HTMLPreElement HTMLPreElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLPreElement") );
        return HTMLPreElement_from_val(&vv);
      }


long HTMLPreElement_width(const HTMLPreElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLPreElement_set_width(HTMLPreElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}

