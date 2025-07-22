#include <webbind/CSSParserAtRule.h>
#include <webbind/CSSParserValue.h>


DEFINE_EMLITE_TYPE(CSSParserAtRule, CSSParserRule);


CSSParserAtRule CSSParserAtRule_new(const jb_DOMString* name, const jb_Sequence* prelude) : CSSParserRule(em_Val_global("CSSParserAtRule").new_(em_Val_from(name), em_Val_from(prelude))) {
        return CSSParserAtRule(em_Val_new(em_Val_global("CSSParserAtRule", em_Val_from(name), em_Val_from(prelude)));
      }


CSSParserAtRule CSSParserAtRule_new(const jb_DOMString* name, const jb_Sequence* prelude, const jb_Sequence* body) : CSSParserRule(em_Val_global("CSSParserAtRule").new_(em_Val_from(name), em_Val_from(prelude), em_Val_from(body))) {
        return CSSParserAtRule(em_Val_new(em_Val_global("CSSParserAtRule", em_Val_from(name), em_Val_from(prelude), em_Val_from(body)));
      }


jb_DOMString CSSParserAtRule_name(const CSSParserAtRule *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserRule_as_val(self->inner), "name"));
}


jb_FrozenArray CSSParserAtRule_prelude(const CSSParserAtRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), "prelude"));
}


jb_FrozenArray CSSParserAtRule_body(const CSSParserAtRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), "body"));
}

