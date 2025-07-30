#include <webbind/HTMLTimeElement.h>


DEFINE_EMLITE_TYPE(HTMLTimeElement, HTMLElement);


HTMLTimeElement HTMLTimeElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTimeElement") );
        return HTMLTimeElement_from_val(&vv);
      }


jb_String HTMLTimeElement_dateTime(const HTMLTimeElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("dateTime")));
}


void HTMLTimeElement_set_dateTime(HTMLTimeElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("dateTime"), em_Val_from(value));
}

