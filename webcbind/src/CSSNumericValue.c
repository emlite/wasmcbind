#include <webcbind/CSSNumericValue.h>

#include <webcbind/CSSUnitValue.h>
#include <webcbind/CSSMathSum.h>
#include <webcbind/CSSNumericType.h>

DEFINE_EMLITE_TYPE(CSSNumericValue, CSSStyleValue);


CSSNumericValue CSSNumericValue_add(CSSNumericValue* self , jb_Any * values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "add", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_sub(CSSNumericValue* self , jb_Any * values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "sub", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_mul(CSSNumericValue* self , jb_Any * values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "mul", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_div(CSSNumericValue* self , jb_Any * values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "div", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_min(CSSNumericValue* self , jb_Any * values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "min", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_max(CSSNumericValue* self , jb_Any * values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "max", em_Val_from(values)));
}


bool CSSNumericValue_equals(CSSNumericValue* self , jb_Any * value) {
    return em_Val_as(bool, em_Val_call(CSSStyleValue_as_val(self->inner), "equals", em_Val_from(value)));
}


CSSUnitValue CSSNumericValue_to(CSSNumericValue* self , jb_String * unit) {
    return em_Val_as(CSSUnitValue, em_Val_call(CSSStyleValue_as_val(self->inner), "to", em_Val_from(unit)));
}


CSSMathSum CSSNumericValue_toSum(CSSNumericValue* self , jb_String * units) {
    return em_Val_as(CSSMathSum, em_Val_call(CSSStyleValue_as_val(self->inner), "toSum", em_Val_from(units)));
}


CSSNumericType CSSNumericValue_type(CSSNumericValue* self ) {
    return em_Val_as(CSSNumericType, em_Val_call(CSSStyleValue_as_val(self->inner), "type"));
}


CSSNumericValue CSSNumericValue_parse(CSSNumericValue* self , jb_String * cssText) {
    return em_Val_as(CSSNumericValue, em_Val_call(em_Val_global("cssnumericvalue"), "parse", em_Val_from(cssText)));
}

