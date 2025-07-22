#include <webbind/HTMLMeterElement.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLMeterElement, HTMLElement);


HTMLMeterElement HTMLMeterElement_new() : HTMLElement(em_Val_global("HTMLMeterElement").new_()) {
        return HTMLMeterElement(em_Val_new(em_Val_global("HTMLMeterElement", ));
      }


double HTMLMeterElement_value(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLMeterElement_set_value(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


double HTMLMeterElement_min(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "min"));
}


void HTMLMeterElement_set_min(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "min", value);
}


double HTMLMeterElement_max(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "max"));
}


void HTMLMeterElement_set_max(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "max", value);
}


double HTMLMeterElement_low(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "low"));
}


void HTMLMeterElement_set_low(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "low", value);
}


double HTMLMeterElement_high(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "high"));
}


void HTMLMeterElement_set_high(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "high", value);
}


double HTMLMeterElement_optimum(const HTMLMeterElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "optimum"));
}


void HTMLMeterElement_set_optimum(HTMLMeterElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "optimum", value);
}


NodeList HTMLMeterElement_labels(const HTMLMeterElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), "labels"));
}

