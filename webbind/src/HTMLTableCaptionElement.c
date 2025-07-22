#include <webbind/HTMLTableCaptionElement.h>


DEFINE_EMLITE_TYPE(HTMLTableCaptionElement, HTMLElement);


HTMLTableCaptionElement HTMLTableCaptionElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTableCaptionElement") );
        return HTMLTableCaptionElement_from_val(&vv);
      }


jb_DOMString HTMLTableCaptionElement_align(const HTMLTableCaptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLTableCaptionElement_set_align(HTMLTableCaptionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}

