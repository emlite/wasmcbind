#include <webbind/HTMLParagraphElement.h>


DEFINE_EMLITE_TYPE(HTMLParagraphElement, HTMLElement);


HTMLParagraphElement HTMLParagraphElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLParagraphElement") );
        return HTMLParagraphElement_from_val(&vv);
      }


jb_DOMString HTMLParagraphElement_align(const HTMLParagraphElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLParagraphElement_set_align(HTMLParagraphElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}

