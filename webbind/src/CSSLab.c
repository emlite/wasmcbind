#include <webbind/CSSLab.h>


DEFINE_EMLITE_TYPE(CSSLab, CSSColorValue);


CSSLab CSSLab_new0(jb_Any * l, jb_Any * a, jb_Any * b) {
        em_Val vv = em_Val_new(em_Val_global("CSSLab") , em_Val_from(l), em_Val_from(a), em_Val_from(b));
        return CSSLab_from_val(&vv);
      }


CSSLab CSSLab_new1(jb_Any * l, jb_Any * a, jb_Any * b, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSLab") , em_Val_from(l), em_Val_from(a), em_Val_from(b), em_Val_from(alpha));
        return CSSLab_from_val(&vv);
      }


jb_Any CSSLab_l(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("l")));
}


void CSSLab_set_l(CSSLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("l"), em_Val_from(value));
}


jb_Any CSSLab_a(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("a")));
}


void CSSLab_set_a(CSSLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


jb_Any CSSLab_b(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("b")));
}


void CSSLab_set_b(CSSLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


jb_Any CSSLab_alpha(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSLab_set_alpha(CSSLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

