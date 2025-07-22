#include <webbind/CSSOKLab.h>


DEFINE_EMLITE_TYPE(CSSOKLab, CSSColorValue);


CSSOKLab CSSOKLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b) : CSSColorValue(em_Val_global("CSSOKLab").new_(em_Val_from(l), em_Val_from(a), em_Val_from(b))) {
        return CSSOKLab(em_Val_new(em_Val_global("CSSOKLab", em_Val_from(l), em_Val_from(a), em_Val_from(b)));
      }


CSSOKLab CSSOKLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSOKLab").new_(em_Val_from(l), em_Val_from(a), em_Val_from(b), em_Val_from(alpha))) {
        return CSSOKLab(em_Val_new(em_Val_global("CSSOKLab", em_Val_from(l), em_Val_from(a), em_Val_from(b), em_Val_from(alpha)));
      }


jb_Any CSSOKLab_l(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "l"));
}


void CSSOKLab_set_l(CSSOKLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "l", value);
}


jb_Any CSSOKLab_a(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "a"));
}


void CSSOKLab_set_a(CSSOKLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "a", value);
}


jb_Any CSSOKLab_b(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "b"));
}


void CSSOKLab_set_b(CSSOKLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "b", value);
}


jb_Any CSSOKLab_alpha(const CSSOKLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSOKLab_set_alpha(CSSOKLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

