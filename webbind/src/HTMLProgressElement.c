#include <webbind/HTMLProgressElement.h>

#include <webbind/NodeList.h>

DEFINE_EMLITE_TYPE(HTMLProgressElement, HTMLElement);


HTMLProgressElement HTMLProgressElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLProgressElement") );
        return HTMLProgressElement_from_val(&vv);
      }


double HTMLProgressElement_value(const HTMLProgressElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLProgressElement_set_value(HTMLProgressElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


double HTMLProgressElement_max(const HTMLProgressElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("max")));
}


void HTMLProgressElement_set_max(HTMLProgressElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("max"), em_Val_from(value));
}


double HTMLProgressElement_position(const HTMLProgressElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("position")));
}


NodeList HTMLProgressElement_labels(const HTMLProgressElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("labels")));
}

