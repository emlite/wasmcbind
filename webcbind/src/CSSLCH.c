#include <webcbind/CSSLCH.h>

DEFINE_EMLITE_TYPE(CSSLCH, CSSColorValue);


CSSLCH CSSLCH_new0(jb_Any * l, jb_Any * c, jb_Any * h) {
        em_Val vv = em_Val_new(em_Val_global("CSSLCH") , em_Val_from(l), em_Val_from(c), em_Val_from(h));
        return CSSLCH_from_val(&vv);
      }


CSSLCH CSSLCH_new1(jb_Any * l, jb_Any * c, jb_Any * h, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSLCH") , em_Val_from(l), em_Val_from(c), em_Val_from(h), em_Val_from(alpha));
        return CSSLCH_from_val(&vv);
      }


jb_Any CSSLCH_l(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("l")));
}


void CSSLCH_set_l(CSSLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("l"), em_Val_from(value));
}


jb_Any CSSLCH_c(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("c")));
}


void CSSLCH_set_c(CSSLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("c"), em_Val_from(value));
}


jb_Any CSSLCH_h(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("h")));
}


void CSSLCH_set_h(CSSLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("h"), em_Val_from(value));
}


jb_Any CSSLCH_alpha(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSLCH_set_alpha(CSSLCH* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

