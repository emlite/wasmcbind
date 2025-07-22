#include <webbind/HTMLOptionElement.h>
#include <webbind/HTMLFormElement.h>


DEFINE_EMLITE_TYPE(HTMLOptionElement, HTMLElement);


HTMLOptionElement HTMLOptionElement_new() : HTMLElement(em_Val_global("HTMLOptionElement").new_()) {
        return HTMLOptionElement(em_Val_new(em_Val_global("HTMLOptionElement", ));
      }


bool HTMLOptionElement_disabled(const HTMLOptionElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLOptionElement_set_disabled(HTMLOptionElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


HTMLFormElement HTMLOptionElement_form(const HTMLOptionElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


jb_DOMString HTMLOptionElement_label(const HTMLOptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "label"));
}


void HTMLOptionElement_set_label(HTMLOptionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "label", value);
}


bool HTMLOptionElement_defaultSelected(const HTMLOptionElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "defaultSelected"));
}


void HTMLOptionElement_set_defaultSelected(HTMLOptionElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defaultSelected", value);
}


bool HTMLOptionElement_selected(const HTMLOptionElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "selected"));
}


void HTMLOptionElement_set_selected(HTMLOptionElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selected", value);
}


jb_DOMString HTMLOptionElement_value(const HTMLOptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLOptionElement_set_value(HTMLOptionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


jb_DOMString HTMLOptionElement_text(const HTMLOptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "text"));
}


void HTMLOptionElement_set_text(HTMLOptionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "text", value);
}


long HTMLOptionElement_index(const HTMLOptionElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "index"));
}

