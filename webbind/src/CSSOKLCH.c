#include <webbind/CSSOKLCH.h>

DEFINE_EMLITE_TYPE(CSSOKLCH, CSSColorValue);


CSSOKLCH CSSOKLCH_new0(jb_Any * l, jb_Any * c, jb_Any * h) {
        em_Val vv = em_Val_new(em_Val_global("CSSOKLCH") , em_Val_from(l), em_Val_from(c), em_Val_from(h));
        return CSSOKLCH_from_val(&vv);
      }


CSSOKLCH CSSOKLCH_new1(jb_Any * l, jb_Any * c, jb_Any * h, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSOKLCH") , em_Val_from(l), em_Val_from(c), em_Val_from(h), em_Val_from(alpha));
        return CSSOKLCH_from_val(&vv);
      }


jb_Any CSSOKLCH_l(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("l")));
}


void CSSOKLCH_set_l(CSSOKLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("l"), em_Val_from(value));
}


jb_Any CSSOKLCH_c(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("c")));
}


void CSSOKLCH_set_c(CSSOKLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("c"), em_Val_from(value));
}


jb_Any CSSOKLCH_h(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("h")));
}


void CSSOKLCH_set_h(CSSOKLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("h"), em_Val_from(value));
}


jb_Any CSSOKLCH_alpha(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSOKLCH_set_alpha(CSSOKLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

