#include <webbind/HTMLOptionElement.h>
#include <webbind/HTMLFormElement.h>


DEFINE_EMLITE_TYPE(HTMLOptionElement, HTMLElement);


HTMLOptionElement HTMLOptionElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLOptionElement") );
        return HTMLOptionElement_from_val(&vv);
      }


bool HTMLOptionElement_disabled(const HTMLOptionElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLOptionElement_set_disabled(HTMLOptionElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


HTMLFormElement HTMLOptionElement_form(const HTMLOptionElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


jb_DOMString HTMLOptionElement_label(const HTMLOptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("label")));
}


void HTMLOptionElement_set_label(HTMLOptionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


bool HTMLOptionElement_defaultSelected(const HTMLOptionElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defaultSelected")));
}


void HTMLOptionElement_set_defaultSelected(HTMLOptionElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defaultSelected"), em_Val_from(value));
}


bool HTMLOptionElement_selected(const HTMLOptionElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selected")));
}


void HTMLOptionElement_set_selected(HTMLOptionElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selected"), em_Val_from(value));
}


jb_DOMString HTMLOptionElement_value(const HTMLOptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLOptionElement_set_value(HTMLOptionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_DOMString HTMLOptionElement_text(const HTMLOptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("text")));
}


void HTMLOptionElement_set_text(HTMLOptionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


long HTMLOptionElement_index(const HTMLOptionElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("index")));
}

