#include <webbind/CSSNumericType.h>

DEFINE_EMLITE_TYPE(CSSNumericType, em_Val);


long CSSNumericType_length(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


void CSSNumericType_set_length(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


long CSSNumericType_angle(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("angle")));
}


void CSSNumericType_set_angle(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("angle"), em_Val_from(value));
}


long CSSNumericType_time(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("time")));
}


void CSSNumericType_set_time(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("time"), em_Val_from(value));
}


long CSSNumericType_frequency(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frequency")));
}


void CSSNumericType_set_frequency(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frequency"), em_Val_from(value));
}


long CSSNumericType_resolution(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resolution")));
}


void CSSNumericType_set_resolution(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resolution"), em_Val_from(value));
}


long CSSNumericType_flex(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flex")));
}


void CSSNumericType_set_flex(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flex"), em_Val_from(value));
}


long CSSNumericType_percent(const CSSNumericType *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("percent")));
}


void CSSNumericType_set_percent(CSSNumericType* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("percent"), em_Val_from(value));
}


CSSNumericBaseType CSSNumericType_percentHint(const CSSNumericType *self) {
    return em_Val_as(CSSNumericBaseType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("percentHint")));
}


void CSSNumericType_set_percentHint(CSSNumericType* self, CSSNumericBaseType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("percentHint"), em_Val_from(value));
}


CSSNumericType CSSNumericType_new() {
    em_Val obj = em_Val_object();
    return CSSNumericType_from_val(&obj);
}

