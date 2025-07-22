#include <webbind/HTMLLegendElement.h>
#include <webbind/HTMLFormElement.h>


DEFINE_EMLITE_TYPE(HTMLLegendElement, HTMLElement);


HTMLLegendElement HTMLLegendElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLLegendElement") );
        return HTMLLegendElement_from_val(&vv);
      }


HTMLFormElement HTMLLegendElement_form(const HTMLLegendElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


jb_DOMString HTMLLegendElement_align(const HTMLLegendElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLLegendElement_set_align(HTMLLegendElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}

