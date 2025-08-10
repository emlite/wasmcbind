#include <webbind/CSSHWB.h>

#include <webbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(CSSHWB, CSSColorValue);


CSSHWB CSSHWB_new0(CSSNumericValue * h, jb_Any * w, jb_Any * b) {
        em_Val vv = em_Val_new(em_Val_global("CSSHWB") , em_Val_from(h), em_Val_from(w), em_Val_from(b));
        return CSSHWB_from_val(&vv);
      }


CSSHWB CSSHWB_new1(CSSNumericValue * h, jb_Any * w, jb_Any * b, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSHWB") , em_Val_from(h), em_Val_from(w), em_Val_from(b), em_Val_from(alpha));
        return CSSHWB_from_val(&vv);
      }


CSSNumericValue CSSHWB_h(const CSSHWB *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("h")));
}


void CSSHWB_set_h(CSSHWB* self, CSSNumericValue * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("h"), em_Val_from(value));
}


jb_Any CSSHWB_w(const CSSHWB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("w")));
}


void CSSHWB_set_w(CSSHWB* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("w"), em_Val_from(value));
}


jb_Any CSSHWB_b(const CSSHWB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("b")));
}


void CSSHWB_set_b(CSSHWB* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


jb_Any CSSHWB_alpha(const CSSHWB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSHWB_set_alpha(CSSHWB* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

