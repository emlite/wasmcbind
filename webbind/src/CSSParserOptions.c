#include <webbind/CSSParserOptions.h>

DEFINE_EMLITE_TYPE(CSSParserOptions, em_Val);


jb_Object CSSParserOptions_atRules(const CSSParserOptions *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("atRules")));
}


void CSSParserOptions_set_atRules(CSSParserOptions* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("atRules"), em_Val_from(value));
}


CSSParserOptions CSSParserOptions_new() {
    em_Val obj = em_Val_object();
    return CSSParserOptions_from_val(&obj);
}

