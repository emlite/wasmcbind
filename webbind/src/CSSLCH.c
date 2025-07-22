#include <webbind/CSSLCH.h>


DEFINE_EMLITE_TYPE(CSSLCH, CSSColorValue);


CSSLCH CSSLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h) : CSSColorValue(em_Val_global("CSSLCH").new_(em_Val_from(l), em_Val_from(c), em_Val_from(h))) {
        return CSSLCH(em_Val_new(em_Val_global("CSSLCH", em_Val_from(l), em_Val_from(c), em_Val_from(h)));
      }


CSSLCH CSSLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSLCH").new_(em_Val_from(l), em_Val_from(c), em_Val_from(h), em_Val_from(alpha))) {
        return CSSLCH(em_Val_new(em_Val_global("CSSLCH", em_Val_from(l), em_Val_from(c), em_Val_from(h), em_Val_from(alpha)));
      }


jb_Any CSSLCH_l(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "l"));
}


void CSSLCH_set_l(CSSLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "l", value);
}


jb_Any CSSLCH_c(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "c"));
}


void CSSLCH_set_c(CSSLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "c", value);
}


jb_Any CSSLCH_h(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "h"));
}


void CSSLCH_set_h(CSSLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "h", value);
}


jb_Any CSSLCH_alpha(const CSSLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSLCH_set_alpha(CSSLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

