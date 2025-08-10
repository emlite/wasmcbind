#include <webbind/HTMLParamElement.h>

DEFINE_EMLITE_TYPE(HTMLParamElement, HTMLElement);


HTMLParamElement HTMLParamElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLParamElement") );
        return HTMLParamElement_from_val(&vv);
      }


jb_String HTMLParamElement_name(const HTMLParamElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLParamElement_set_name(HTMLParamElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String HTMLParamElement_value(const HTMLParamElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLParamElement_set_value(HTMLParamElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_String HTMLParamElement_type(const HTMLParamElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLParamElement_set_type(HTMLParamElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String HTMLParamElement_valueType(const HTMLParamElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("valueType")));
}


void HTMLParamElement_set_valueType(HTMLParamElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("valueType"), em_Val_from(value));
}

