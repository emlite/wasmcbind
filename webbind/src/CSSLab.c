#include <webbind/CSSLab.h>


DEFINE_EMLITE_TYPE(CSSLab, CSSColorValue);


CSSLab CSSLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b) : CSSColorValue(em_Val_global("CSSLab").new_(em_Val_from(l), em_Val_from(a), em_Val_from(b))) {
        return CSSLab(em_Val_new(em_Val_global("CSSLab", em_Val_from(l), em_Val_from(a), em_Val_from(b)));
      }


CSSLab CSSLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSLab").new_(em_Val_from(l), em_Val_from(a), em_Val_from(b), em_Val_from(alpha))) {
        return CSSLab(em_Val_new(em_Val_global("CSSLab", em_Val_from(l), em_Val_from(a), em_Val_from(b), em_Val_from(alpha)));
      }


jb_Any CSSLab_l(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "l"));
}


void CSSLab_set_l(CSSLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "l", value);
}


jb_Any CSSLab_a(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "a"));
}


void CSSLab_set_a(CSSLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "a", value);
}


jb_Any CSSLab_b(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "b"));
}


void CSSLab_set_b(CSSLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "b", value);
}


jb_Any CSSLab_alpha(const CSSLab *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSLab_set_alpha(CSSLab* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

