#include <webbind/HTMLOptGroupElement.h>


DEFINE_EMLITE_TYPE(HTMLOptGroupElement, HTMLElement);


HTMLOptGroupElement HTMLOptGroupElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLOptGroupElement") );
        return HTMLOptGroupElement_from_val(&vv);
      }


bool HTMLOptGroupElement_disabled(const HTMLOptGroupElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLOptGroupElement_set_disabled(HTMLOptGroupElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


jb_String HTMLOptGroupElement_label(const HTMLOptGroupElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("label")));
}


void HTMLOptGroupElement_set_label(HTMLOptGroupElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

