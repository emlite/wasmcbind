#include <webbind/CSSUnitValue.h>


DEFINE_EMLITE_TYPE(CSSUnitValue, CSSNumericValue);


CSSUnitValue CSSUnitValue_new(double value, jb_USVString * unit) {
        em_Val vv = em_Val_new(em_Val_global("CSSUnitValue") , em_Val_from(value), em_Val_from(unit));
        return CSSUnitValue_from_val(&vv);
      }


double CSSUnitValue_value(const CSSUnitValue *self) {
    return em_Val_as(double, em_Val_get(CSSNumericValue_as_val(self->inner), em_Val_from("value")));
}


void CSSUnitValue_set_value(CSSUnitValue* self, double value) {
    em_Val_set(CSSNumericValue_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_USVString CSSUnitValue_unit(const CSSUnitValue *self) {
    return em_Val_as(jb_USVString, em_Val_get(CSSNumericValue_as_val(self->inner), em_Val_from("unit")));
}

