#include <webbind/HTMLLabelElement.h>
#include <webbind/HTMLFormElement.h>


DEFINE_EMLITE_TYPE(HTMLLabelElement, HTMLElement);


HTMLLabelElement HTMLLabelElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLLabelElement") );
        return HTMLLabelElement_from_val(&vv);
      }


HTMLFormElement HTMLLabelElement_form(const HTMLLabelElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


jb_String HTMLLabelElement_htmlFor(const HTMLLabelElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("htmlFor")));
}


void HTMLLabelElement_set_htmlFor(HTMLLabelElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("htmlFor"), em_Val_from(value));
}


HTMLElement HTMLLabelElement_control(const HTMLLabelElement *self) {
    return em_Val_as(HTMLElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("control")));
}

