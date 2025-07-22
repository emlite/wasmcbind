#include <webbind/CSSOKLCH.h>


DEFINE_EMLITE_TYPE(CSSOKLCH, CSSColorValue);


CSSOKLCH CSSOKLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h) : CSSColorValue(em_Val_global("CSSOKLCH").new_(em_Val_from(l), em_Val_from(c), em_Val_from(h))) {
        return CSSOKLCH(em_Val_new(em_Val_global("CSSOKLCH", em_Val_from(l), em_Val_from(c), em_Val_from(h)));
      }


CSSOKLCH CSSOKLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSOKLCH").new_(em_Val_from(l), em_Val_from(c), em_Val_from(h), em_Val_from(alpha))) {
        return CSSOKLCH(em_Val_new(em_Val_global("CSSOKLCH", em_Val_from(l), em_Val_from(c), em_Val_from(h), em_Val_from(alpha)));
      }


jb_Any CSSOKLCH_l(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "l"));
}


void CSSOKLCH_set_l(CSSOKLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "l", value);
}


jb_Any CSSOKLCH_c(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "c"));
}


void CSSOKLCH_set_c(CSSOKLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "c", value);
}


jb_Any CSSOKLCH_h(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "h"));
}


void CSSOKLCH_set_h(CSSOKLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "h", value);
}


jb_Any CSSOKLCH_alpha(const CSSOKLCH *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSOKLCH_set_alpha(CSSOKLCH* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

