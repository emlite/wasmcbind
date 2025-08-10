#include <webbind/HTMLDivElement.h>

DEFINE_EMLITE_TYPE(HTMLDivElement, HTMLElement);


HTMLDivElement HTMLDivElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLDivElement") );
        return HTMLDivElement_from_val(&vv);
      }


jb_String HTMLDivElement_align(const HTMLDivElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLDivElement_set_align(HTMLDivElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}

