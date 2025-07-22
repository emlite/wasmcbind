#include <webbind/HTMLQuoteElement.h>


DEFINE_EMLITE_TYPE(HTMLQuoteElement, HTMLElement);


HTMLQuoteElement HTMLQuoteElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLQuoteElement") );
        return HTMLQuoteElement_from_val(&vv);
      }


jb_USVString HTMLQuoteElement_cite(const HTMLQuoteElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cite")));
}


void HTMLQuoteElement_set_cite(HTMLQuoteElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("cite"), em_Val_from(value));
}

