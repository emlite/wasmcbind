#include <webcbind/HTMLDataElement.h>

DEFINE_EMLITE_TYPE(HTMLDataElement, HTMLElement);


HTMLDataElement HTMLDataElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLDataElement") );
        return HTMLDataElement_from_val(&vv);
      }


jb_String HTMLDataElement_value(const HTMLDataElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLDataElement_set_value(HTMLDataElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}

