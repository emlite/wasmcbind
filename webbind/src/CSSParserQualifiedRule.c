#include <webbind/CSSParserQualifiedRule.h>

#include <webbind/CSSParserValue.h>

DEFINE_EMLITE_TYPE(CSSParserQualifiedRule, CSSParserRule);


CSSParserQualifiedRule CSSParserQualifiedRule_new0(jb_Array * prelude) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserQualifiedRule") , em_Val_from(prelude));
        return CSSParserQualifiedRule_from_val(&vv);
      }


CSSParserQualifiedRule CSSParserQualifiedRule_new1(jb_Array * prelude, jb_Array * body) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserQualifiedRule") , em_Val_from(prelude), em_Val_from(body));
        return CSSParserQualifiedRule_from_val(&vv);
      }


jb_Array CSSParserQualifiedRule_prelude(const CSSParserQualifiedRule *self) {
    return em_Val_as(jb_Array, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("prelude")));
}


jb_Array CSSParserQualifiedRule_body(const CSSParserQualifiedRule *self) {
    return em_Val_as(jb_Array, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("body")));
}

