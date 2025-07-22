#include <webbind/CSSHWB.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSHWB, CSSColorValue);


CSSHWB CSSHWB_new(const CSSNumericValue* h, const jb_Any* w, const jb_Any* b) : CSSColorValue(em_Val_global("CSSHWB").new_(em_Val_from(h), em_Val_from(w), em_Val_from(b))) {
        return CSSHWB(em_Val_new(em_Val_global("CSSHWB", em_Val_from(h), em_Val_from(w), em_Val_from(b)));
      }


CSSHWB CSSHWB_new(const CSSNumericValue* h, const jb_Any* w, const jb_Any* b, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSHWB").new_(em_Val_from(h), em_Val_from(w), em_Val_from(b), em_Val_from(alpha))) {
        return CSSHWB(em_Val_new(em_Val_global("CSSHWB", em_Val_from(h), em_Val_from(w), em_Val_from(b), em_Val_from(alpha)));
      }


CSSNumericValue CSSHWB_h(const CSSHWB *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSColorValue_as_val(self->inner), "h"));
}


void CSSHWB_set_h(CSSHWB* self, const CSSNumericValue* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "h", value);
}


jb_Any CSSHWB_w(const CSSHWB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "w"));
}


void CSSHWB_set_w(CSSHWB* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "w", value);
}


jb_Any CSSHWB_b(const CSSHWB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "b"));
}


void CSSHWB_set_b(CSSHWB* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "b", value);
}


jb_Any CSSHWB_alpha(const CSSHWB *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSHWB_set_alpha(CSSHWB* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

