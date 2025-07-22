#include <webbind/HTMLLabelElement.h>
#include <webbind/HTMLFormElement.h>


DEFINE_EMLITE_TYPE(HTMLLabelElement, HTMLElement);


HTMLLabelElement HTMLLabelElement_new() : HTMLElement(em_Val_global("HTMLLabelElement").new_()) {
        return HTMLLabelElement(em_Val_new(em_Val_global("HTMLLabelElement", ));
      }


HTMLFormElement HTMLLabelElement_form(const HTMLLabelElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


jb_DOMString HTMLLabelElement_htmlFor(const HTMLLabelElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "htmlFor"));
}


void HTMLLabelElement_set_htmlFor(HTMLLabelElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "htmlFor", value);
}


HTMLElement HTMLLabelElement_control(const HTMLLabelElement *self) {
    return em_Val_as(HTMLElement, em_Val_get(HTMLElement_as_val(self->inner), "control"));
}

