#include <webbind/HTMLParamElement.h>


DEFINE_EMLITE_TYPE(HTMLParamElement, HTMLElement);


HTMLParamElement HTMLParamElement_new() : HTMLElement(em_Val_global("HTMLParamElement").new_()) {
        return HTMLParamElement(em_Val_new(em_Val_global("HTMLParamElement", ));
      }


jb_DOMString HTMLParamElement_name(const HTMLParamElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLParamElement_set_name(HTMLParamElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLParamElement_value(const HTMLParamElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLParamElement_set_value(HTMLParamElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


jb_DOMString HTMLParamElement_type(const HTMLParamElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLParamElement_set_type(HTMLParamElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_DOMString HTMLParamElement_valueType(const HTMLParamElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "valueType"));
}


void HTMLParamElement_set_valueType(HTMLParamElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "valueType", value);
}

