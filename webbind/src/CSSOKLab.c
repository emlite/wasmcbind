#include <webbind/CSSOKLab.h>

DEFINE_EMLITE_TYPE(CSSOKLab, CSSColorValue);


CSSOKLab CSSOKLab_new0(jb_Any * l, jb_Any * a, jb_Any * b) {
        em_Val vv = em_Val_new(em_Val_global("CSSOKLab") , em_Val_from(l), em_Val_from(a), em_Val_from(b));
        return CSSOKLab_from_val(&vv);
      }


CSSOKLab CSSOKLab_new1(jb_Any * l, jb_Any * a, jb_Any * b, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSOKLab") , em_Val_from(l), em_Val_from(a), em_Val_from(b), em_Val_from(alpha));
        return CSSOKLab_from_val(&vv);
      }


jb_Any CSSOKLab_l(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("l")));
}


void CSSOKLab_set_l(CSSOKLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("l"), em_Val_from(value));
}


jb_Any CSSOKLab_a(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("a")));
}


void CSSOKLab_set_a(CSSOKLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


jb_Any CSSOKLab_b(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("b")));
}


void CSSOKLab_set_b(CSSOKLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


jb_Any CSSOKLab_alpha(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSOKLab_set_alpha(CSSOKLab* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

