#include <webbind/CSSParserFunction.h>


DEFINE_EMLITE_TYPE(CSSParserFunction, CSSParserValue);


CSSParserFunction CSSParserFunction_new(jb_DOMString * name, jb_Sequence * args) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserFunction") , em_Val_from(name), em_Val_from(args));
        return CSSParserFunction_from_val(&vv);
      }


jb_DOMString CSSParserFunction_name(const CSSParserFunction *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserValue_as_val(self->inner), em_Val_from("name")));
}


jb_FrozenArray CSSParserFunction_args(const CSSParserFunction *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserValue_as_val(self->inner), em_Val_from("args")));
}

