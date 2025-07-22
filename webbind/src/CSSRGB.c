#include <webbind/CSSRGB.h>


DEFINE_EMLITE_TYPE(CSSRGB, CSSColorValue);


CSSRGB CSSRGB_new0(jb_Any * r, jb_Any * g, jb_Any * b) {
        em_Val vv = em_Val_new(em_Val_global("CSSRGB") , em_Val_from(r), em_Val_from(g), em_Val_from(b));
        return CSSRGB_from_val(&vv);
      }


CSSRGB CSSRGB_new1(jb_Any * r, jb_Any * g, jb_Any * b, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSRGB") , em_Val_from(r), em_Val_from(g), em_Val_from(b), em_Val_from(alpha));
        return CSSRGB_from_val(&vv);
      }


jb_Any CSSRGB_r(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("r")));
}


void CSSRGB_set_r(CSSRGB* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("r"), em_Val_from(value));
}


jb_Any CSSRGB_g(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("g")));
}


void CSSRGB_set_g(CSSRGB* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("g"), em_Val_from(value));
}


jb_Any CSSRGB_b(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("b")));
}


void CSSRGB_set_b(CSSRGB* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


jb_Any CSSRGB_alpha(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSRGB_set_alpha(CSSRGB* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

