#include <webbind/SVGAngle.h>


DEFINE_EMLITE_TYPE(SVGAngle, em_Val);


unsigned short SVGAngle_unitType(const SVGAngle *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitType")));
}


float SVGAngle_value(const SVGAngle *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void SVGAngle_set_value(SVGAngle* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


float SVGAngle_valueInSpecifiedUnits(const SVGAngle *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("valueInSpecifiedUnits")));
}


void SVGAngle_set_valueInSpecifiedUnits(SVGAngle* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("valueInSpecifiedUnits"), em_Val_from(value));
}


jb_String SVGAngle_valueAsString(const SVGAngle *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("valueAsString")));
}


void SVGAngle_set_valueAsString(SVGAngle* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("valueAsString"), em_Val_from(value));
}


jb_Undefined SVGAngle_newValueSpecifiedUnits(SVGAngle* self , unsigned short unitType, float valueInSpecifiedUnits) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "newValueSpecifiedUnits", em_Val_from(unitType), em_Val_from(valueInSpecifiedUnits)));
}


jb_Undefined SVGAngle_convertToSpecifiedUnits(SVGAngle* self , unsigned short unitType) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "convertToSpecifiedUnits", em_Val_from(unitType)));
}

