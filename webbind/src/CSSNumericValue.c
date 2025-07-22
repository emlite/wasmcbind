#include <webbind/CSSNumericValue.h>
#include <webbind/CSSUnitValue.h>
#include <webbind/CSSMathSum.h>


DEFINE_EMLITE_TYPE(CSSNumericType, em_Val);


long CSSNumericType_length(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


void CSSNumericType_set_length(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "length", value);
}


long CSSNumericType_angle(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "angle"));
}


void CSSNumericType_set_angle(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "angle", value);
}


long CSSNumericType_time(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "time"));
}


void CSSNumericType_set_time(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "time", value);
}


long CSSNumericType_frequency(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "frequency"));
}


void CSSNumericType_set_frequency(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "frequency", value);
}


long CSSNumericType_resolution(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "resolution"));
}


void CSSNumericType_set_resolution(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "resolution", value);
}


long CSSNumericType_flex(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "flex"));
}


void CSSNumericType_set_flex(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "flex", value);
}


long CSSNumericType_percent(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "percent"));
}


void CSSNumericType_set_percent(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "percent", value);
}


CSSNumericBaseType CSSNumericType_percentHint(const CSSNumericType *self) {
    return em_Val_as(CSSNumericBaseType, em_Val_get(em_Val_as_val(self->inner), "percentHint"));
}


void CSSNumericType_set_percentHint(CSSNumericType* self, const CSSNumericBaseType* value) {
    em_Val_set(em_Val_as_val(self->inner), "percentHint", value);
}

DEFINE_EMLITE_TYPE(CSSNumericValue, CSSStyleValue);


CSSNumericValue CSSNumericValue_add(CSSNumericValue* self , const jb_Any* values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "add", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_sub(CSSNumericValue* self , const jb_Any* values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "sub", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_mul(CSSNumericValue* self , const jb_Any* values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "mul", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_div(CSSNumericValue* self , const jb_Any* values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "div", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_min(CSSNumericValue* self , const jb_Any* values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "min", em_Val_from(values)));
}


CSSNumericValue CSSNumericValue_max(CSSNumericValue* self , const jb_Any* values) {
    return em_Val_as(CSSNumericValue, em_Val_call(CSSStyleValue_as_val(self->inner), "max", em_Val_from(values)));
}


bool CSSNumericValue_equals(CSSNumericValue* self , const jb_Any* value) {
    return em_Val_as(bool, em_Val_call(CSSStyleValue_as_val(self->inner), "equals", em_Val_from(value)));
}


CSSUnitValue CSSNumericValue_to(CSSNumericValue* self , const jb_USVString* unit) {
    return em_Val_as(CSSUnitValue, em_Val_call(CSSStyleValue_as_val(self->inner), "to", em_Val_from(unit)));
}


CSSMathSum CSSNumericValue_toSum(CSSNumericValue* self , const jb_USVString* units) {
    return em_Val_as(CSSMathSum, em_Val_call(CSSStyleValue_as_val(self->inner), "toSum", em_Val_from(units)));
}


CSSNumericType CSSNumericValue_type(CSSNumericValue* self ) {
    return em_Val_as(CSSNumericType, em_Val_call(CSSStyleValue_as_val(self->inner), "type"));
}


CSSNumericValue CSSNumericValue_parse(CSSNumericValue* self , const jb_USVString* cssText) {
    return em_Val_as(CSSNumericValue, em_Val_call(em_Val_global("cssnumericvalue"), "parse", em_Val_from(cssText)));
}

