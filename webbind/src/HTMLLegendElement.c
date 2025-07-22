#include <webbind/HTMLLegendElement.h>
#include <webbind/HTMLFormElement.h>


DEFINE_EMLITE_TYPE(HTMLLegendElement, HTMLElement);


HTMLLegendElement HTMLLegendElement_new() : HTMLElement(em_Val_global("HTMLLegendElement").new_()) {
        return HTMLLegendElement(em_Val_new(em_Val_global("HTMLLegendElement", ));
      }


HTMLFormElement HTMLLegendElement_form(const HTMLLegendElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


jb_DOMString HTMLLegendElement_align(const HTMLLegendElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLLegendElement_set_align(HTMLLegendElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}

