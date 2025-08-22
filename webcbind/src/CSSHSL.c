#include <webcbind/CSSHSL.h>

DEFINE_EMLITE_TYPE(CSSHSL, CSSColorValue);


CSSHSL CSSHSL_new0(jb_Any * h, jb_Any * s, jb_Any * l) {
        em_Val vv = em_Val_new(em_Val_global("CSSHSL") , em_Val_from(h), em_Val_from(s), em_Val_from(l));
        return CSSHSL_from_val(&vv);
      }


CSSHSL CSSHSL_new1(jb_Any * h, jb_Any * s, jb_Any * l, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSHSL") , em_Val_from(h), em_Val_from(s), em_Val_from(l), em_Val_from(alpha));
        return CSSHSL_from_val(&vv);
      }


jb_Any CSSHSL_h(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("h")));
}


void CSSHSL_set_h(CSSHSL* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("h"), em_Val_from(value));
}


jb_Any CSSHSL_s(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("s")));
}


void CSSHSL_set_s(CSSHSL* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("s"), em_Val_from(value));
}


jb_Any CSSHSL_l(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("l")));
}


void CSSHSL_set_l(CSSHSL* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("l"), em_Val_from(value));
}


jb_Any CSSHSL_alpha(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSHSL_set_alpha(CSSHSL* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

