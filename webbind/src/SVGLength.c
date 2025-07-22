#include <webbind/SVGLength.h>


DEFINE_EMLITE_TYPE(SVGLength, em_Val);


unsigned short SVGLength_unitType(const SVGLength *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "unitType"));
}


float SVGLength_value(const SVGLength *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void SVGLength_set_value(SVGLength* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}


float SVGLength_valueInSpecifiedUnits(const SVGLength *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "valueInSpecifiedUnits"));
}


void SVGLength_set_valueInSpecifiedUnits(SVGLength* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "valueInSpecifiedUnits", value);
}


jb_DOMString SVGLength_valueAsString(const SVGLength *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "valueAsString"));
}


void SVGLength_set_valueAsString(SVGLength* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "valueAsString", value);
}


jb_Undefined SVGLength_newValueSpecifiedUnits(SVGLength* self , unsigned short unitType, float valueInSpecifiedUnits) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "newValueSpecifiedUnits", em_Val_from(unitType), em_Val_from(valueInSpecifiedUnits)));
}


jb_Undefined SVGLength_convertToSpecifiedUnits(SVGLength* self , unsigned short unitType) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "convertToSpecifiedUnits", em_Val_from(unitType)));
}

