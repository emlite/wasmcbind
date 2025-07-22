#include <webbind/SVGNumber.h>


DEFINE_EMLITE_TYPE(SVGNumber, em_Val);


float SVGNumber_value(const SVGNumber *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void SVGNumber_set_value(SVGNumber* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}

