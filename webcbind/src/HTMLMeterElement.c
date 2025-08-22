#include <webcbind/HTMLMeterElement.h>

#include <webcbind/NodeList.h>

DEFINE_EMLITE_TYPE(HTMLMeterElement, HTMLElement);


HTMLMeterElement HTMLMeterElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLMeterElement") );
        return HTMLMeterElement_from_val(&vv);
      }


double HTMLMeterElement_value(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLMeterElement_set_value(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


double HTMLMeterElement_min(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("min")));
}


void HTMLMeterElement_set_min(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}


double HTMLMeterElement_max(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("max")));
}


void HTMLMeterElement_set_max(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("max"), em_Val_from(value));
}


double HTMLMeterElement_low(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("low")));
}


void HTMLMeterElement_set_low(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("low"), em_Val_from(value));
}


double HTMLMeterElement_high(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("high")));
}


void HTMLMeterElement_set_high(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("high"), em_Val_from(value));
}


double HTMLMeterElement_optimum(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("optimum")));
}


void HTMLMeterElement_set_optimum(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("optimum"), em_Val_from(value));
}


NodeList HTMLMeterElement_labels(const HTMLMeterElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("labels")));
}

