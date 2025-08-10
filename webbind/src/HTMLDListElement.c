#include <webbind/HTMLDListElement.h>

DEFINE_EMLITE_TYPE(HTMLDListElement, HTMLElement);


HTMLDListElement HTMLDListElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLDListElement") );
        return HTMLDListElement_from_val(&vv);
      }


bool HTMLDListElement_compact(const HTMLDListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("compact")));
}


void HTMLDListElement_set_compact(HTMLDListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("compact"), em_Val_from(value));
}

