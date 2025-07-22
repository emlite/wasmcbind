#include <webbind/CSSParserAtRule.h>
#include <webbind/CSSParserValue.h>


DEFINE_EMLITE_TYPE(CSSParserAtRule, CSSParserRule);


CSSParserAtRule CSSParserAtRule_new0(jb_DOMString * name, jb_Sequence * prelude) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserAtRule") , em_Val_from(name), em_Val_from(prelude));
        return CSSParserAtRule_from_val(&vv);
      }


CSSParserAtRule CSSParserAtRule_new1(jb_DOMString * name, jb_Sequence * prelude, jb_Sequence * body) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserAtRule") , em_Val_from(name), em_Val_from(prelude), em_Val_from(body));
        return CSSParserAtRule_from_val(&vv);
      }


jb_DOMString CSSParserAtRule_name(const CSSParserAtRule *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("name")));
}


jb_FrozenArray CSSParserAtRule_prelude(const CSSParserAtRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("prelude")));
}


jb_FrozenArray CSSParserAtRule_body(const CSSParserAtRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("body")));
}

