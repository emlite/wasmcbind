#include <webbind/CSSHSL.h>


DEFINE_EMLITE_TYPE(CSSHSL, CSSColorValue);


CSSHSL CSSHSL_new(const jb_Any* h, const jb_Any* s, const jb_Any* l) : CSSColorValue(em_Val_global("CSSHSL").new_(em_Val_from(h), em_Val_from(s), em_Val_from(l))) {
        return CSSHSL(em_Val_new(em_Val_global("CSSHSL", em_Val_from(h), em_Val_from(s), em_Val_from(l)));
      }


CSSHSL CSSHSL_new(const jb_Any* h, const jb_Any* s, const jb_Any* l, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSHSL").new_(em_Val_from(h), em_Val_from(s), em_Val_from(l), em_Val_from(alpha))) {
        return CSSHSL(em_Val_new(em_Val_global("CSSHSL", em_Val_from(h), em_Val_from(s), em_Val_from(l), em_Val_from(alpha)));
      }


jb_Any CSSHSL_h(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "h"));
}


void CSSHSL_set_h(CSSHSL* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "h", value);
}


jb_Any CSSHSL_s(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "s"));
}


void CSSHSL_set_s(CSSHSL* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "s", value);
}


jb_Any CSSHSL_l(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "l"));
}


void CSSHSL_set_l(CSSHSL* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "l", value);
}


jb_Any CSSHSL_alpha(const CSSHSL *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSHSL_set_alpha(CSSHSL* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

