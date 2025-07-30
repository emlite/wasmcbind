#include <webbind/HTMLTitleElement.h>


DEFINE_EMLITE_TYPE(HTMLTitleElement, HTMLElement);


HTMLTitleElement HTMLTitleElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTitleElement") );
        return HTMLTitleElement_from_val(&vv);
      }


jb_String HTMLTitleElement_text(const HTMLTitleElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("text")));
}


void HTMLTitleElement_set_text(HTMLTitleElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}

