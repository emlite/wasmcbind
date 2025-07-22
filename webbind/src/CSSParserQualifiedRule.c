#include <webbind/CSSParserQualifiedRule.h>
#include <webbind/CSSParserValue.h>


DEFINE_EMLITE_TYPE(CSSParserQualifiedRule, CSSParserRule);


CSSParserQualifiedRule CSSParserQualifiedRule_new0(jb_Sequence * prelude) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserQualifiedRule") , em_Val_from(prelude));
        return CSSParserQualifiedRule_from_val(&vv);
      }


CSSParserQualifiedRule CSSParserQualifiedRule_new1(jb_Sequence * prelude, jb_Sequence * body) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserQualifiedRule") , em_Val_from(prelude), em_Val_from(body));
        return CSSParserQualifiedRule_from_val(&vv);
      }


jb_FrozenArray CSSParserQualifiedRule_prelude(const CSSParserQualifiedRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("prelude")));
}


jb_FrozenArray CSSParserQualifiedRule_body(const CSSParserQualifiedRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("body")));
}

