#include <webbind/CSSCounterStyleRule.h>


DEFINE_EMLITE_TYPE(CSSCounterStyleRule, CSSRule);


jb_CSSOMString CSSCounterStyleRule_name(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


void CSSCounterStyleRule_set_name(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_system(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("system")));
}


void CSSCounterStyleRule_set_system(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("system"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_symbols(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("symbols")));
}


void CSSCounterStyleRule_set_symbols(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("symbols"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_additiveSymbols(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("additiveSymbols")));
}


void CSSCounterStyleRule_set_additiveSymbols(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("additiveSymbols"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_negative(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("negative")));
}


void CSSCounterStyleRule_set_negative(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("negative"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_prefix(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("prefix")));
}


void CSSCounterStyleRule_set_prefix(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("prefix"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_suffix(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("suffix")));
}


void CSSCounterStyleRule_set_suffix(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("suffix"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_range(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("range")));
}


void CSSCounterStyleRule_set_range(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("range"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_pad(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("pad")));
}


void CSSCounterStyleRule_set_pad(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("pad"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_speakAs(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("speakAs")));
}


void CSSCounterStyleRule_set_speakAs(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("speakAs"), em_Val_from(value));
}


jb_CSSOMString CSSCounterStyleRule_fallback(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("fallback")));
}


void CSSCounterStyleRule_set_fallback(CSSCounterStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("fallback"), em_Val_from(value));
}

