#include <webbind/HTMLMenuElement.h>


DEFINE_EMLITE_TYPE(HTMLMenuElement, HTMLElement);


HTMLMenuElement HTMLMenuElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLMenuElement") );
        return HTMLMenuElement_from_val(&vv);
      }


bool HTMLMenuElement_compact(const HTMLMenuElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("compact")));
}


void HTMLMenuElement_set_compact(HTMLMenuElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("compact"), em_Val_from(value));
}

