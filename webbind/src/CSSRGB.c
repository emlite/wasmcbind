#include <webbind/CSSRGB.h>


DEFINE_EMLITE_TYPE(CSSRGB, CSSColorValue);


CSSRGB CSSRGB_new(const jb_Any* r, const jb_Any* g, const jb_Any* b) : CSSColorValue(em_Val_global("CSSRGB").new_(em_Val_from(r), em_Val_from(g), em_Val_from(b))) {
        return CSSRGB(em_Val_new(em_Val_global("CSSRGB", em_Val_from(r), em_Val_from(g), em_Val_from(b)));
      }


CSSRGB CSSRGB_new(const jb_Any* r, const jb_Any* g, const jb_Any* b, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSRGB").new_(em_Val_from(r), em_Val_from(g), em_Val_from(b), em_Val_from(alpha))) {
        return CSSRGB(em_Val_new(em_Val_global("CSSRGB", em_Val_from(r), em_Val_from(g), em_Val_from(b), em_Val_from(alpha)));
      }


jb_Any CSSRGB_r(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "r"));
}


void CSSRGB_set_r(CSSRGB* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "r", value);
}


jb_Any CSSRGB_g(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "g"));
}


void CSSRGB_set_g(CSSRGB* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "g", value);
}


jb_Any CSSRGB_b(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "b"));
}


void CSSRGB_set_b(CSSRGB* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "b", value);
}


jb_Any CSSRGB_alpha(const CSSRGB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSRGB_set_alpha(CSSRGB* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

