#include <webbind/CSSUnitValue.h>


DEFINE_EMLITE_TYPE(CSSUnitValue, CSSNumericValue);


CSSUnitValue CSSUnitValue_new(double value, const jb_USVString* unit) : CSSNumericValue(em_Val_global("CSSUnitValue").new_(em_Val_from(value), em_Val_from(unit))) {
        return CSSUnitValue(em_Val_new(em_Val_global("CSSUnitValue", em_Val_from(value), em_Val_from(unit)));
      }


double CSSUnitValue_value(const CSSUnitValue *self) {
    return em_Val_as(double, em_Val_get(CSSNumericValue_as_val(self->inner), "value"));
}


void CSSUnitValue_set_value(CSSUnitValue* self, double value) {
    em_Val_set(CSSNumericValue_as_val(self->inner), "value", value);
}


jb_USVString CSSUnitValue_unit(const CSSUnitValue *self) {
    return em_Val_as(jb_USVString, em_Val_get(CSSNumericValue_as_val(self->inner), "unit"));
}

