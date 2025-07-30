#include <webbind/HTMLBRElement.h>


DEFINE_EMLITE_TYPE(HTMLBRElement, HTMLElement);


HTMLBRElement HTMLBRElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLBRElement") );
        return HTMLBRElement_from_val(&vv);
      }


jb_String HTMLBRElement_clear(const HTMLBRElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("clear")));
}


void HTMLBRElement_set_clear(HTMLBRElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("clear"), em_Val_from(value));
}

