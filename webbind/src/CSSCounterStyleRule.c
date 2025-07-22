#include <webbind/CSSCounterStyleRule.h>


DEFINE_EMLITE_TYPE(CSSCounterStyleRule, CSSRule);


jb_CSSOMString CSSCounterStyleRule_name(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "name"));
}


void CSSCounterStyleRule_set_name(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "name", value);
}


jb_CSSOMString CSSCounterStyleRule_system(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "system"));
}


void CSSCounterStyleRule_set_system(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "system", value);
}


jb_CSSOMString CSSCounterStyleRule_symbols(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "symbols"));
}


void CSSCounterStyleRule_set_symbols(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "symbols", value);
}


jb_CSSOMString CSSCounterStyleRule_additiveSymbols(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "additiveSymbols"));
}


void CSSCounterStyleRule_set_additiveSymbols(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "additiveSymbols", value);
}


jb_CSSOMString CSSCounterStyleRule_negative(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "negative"));
}


void CSSCounterStyleRule_set_negative(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "negative", value);
}


jb_CSSOMString CSSCounterStyleRule_prefix(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "prefix"));
}


void CSSCounterStyleRule_set_prefix(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "prefix", value);
}


jb_CSSOMString CSSCounterStyleRule_suffix(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "suffix"));
}


void CSSCounterStyleRule_set_suffix(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "suffix", value);
}


jb_CSSOMString CSSCounterStyleRule_range(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "range"));
}


void CSSCounterStyleRule_set_range(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "range", value);
}


jb_CSSOMString CSSCounterStyleRule_pad(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "pad"));
}


void CSSCounterStyleRule_set_pad(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "pad", value);
}


jb_CSSOMString CSSCounterStyleRule_speakAs(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "speakAs"));
}


void CSSCounterStyleRule_set_speakAs(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "speakAs", value);
}


jb_CSSOMString CSSCounterStyleRule_fallback(const CSSCounterStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "fallback"));
}


void CSSCounterStyleRule_set_fallback(CSSCounterStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "fallback", value);
}

