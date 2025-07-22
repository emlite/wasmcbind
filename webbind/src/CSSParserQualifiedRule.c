#include <webbind/CSSParserQualifiedRule.h>
#include <webbind/CSSParserValue.h>


DEFINE_EMLITE_TYPE(CSSParserQualifiedRule, CSSParserRule);


CSSParserQualifiedRule CSSParserQualifiedRule_new(const jb_Sequence* prelude) : CSSParserRule(em_Val_global("CSSParserQualifiedRule").new_(em_Val_from(prelude))) {
        return CSSParserQualifiedRule(em_Val_new(em_Val_global("CSSParserQualifiedRule", em_Val_from(prelude)));
      }


CSSParserQualifiedRule CSSParserQualifiedRule_new(const jb_Sequence* prelude, const jb_Sequence* body) : CSSParserRule(em_Val_global("CSSParserQualifiedRule").new_(em_Val_from(prelude), em_Val_from(body))) {
        return CSSParserQualifiedRule(em_Val_new(em_Val_global("CSSParserQualifiedRule", em_Val_from(prelude), em_Val_from(body)));
      }


jb_FrozenArray CSSParserQualifiedRule_prelude(const CSSParserQualifiedRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), "prelude"));
}


jb_FrozenArray CSSParserQualifiedRule_body(const CSSParserQualifiedRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), "body"));
}

