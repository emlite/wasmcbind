#include <webbind/CSSCustomMediaRule.h>

DEFINE_EMLITE_TYPE(CSSCustomMediaRule, CSSRule);


jb_String CSSCustomMediaRule_name(const CSSCustomMediaRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


jb_Any CSSCustomMediaRule_query(const CSSCustomMediaRule *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("query")));
}

