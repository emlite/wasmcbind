#include <webbind/CSSParserFunction.h>


DEFINE_EMLITE_TYPE(CSSParserFunction, CSSParserValue);


CSSParserFunction CSSParserFunction_new(const jb_DOMString* name, const jb_Sequence* args) : CSSParserValue(em_Val_global("CSSParserFunction").new_(em_Val_from(name), em_Val_from(args))) {
        return CSSParserFunction(em_Val_new(em_Val_global("CSSParserFunction", em_Val_from(name), em_Val_from(args)));
      }


jb_DOMString CSSParserFunction_name(const CSSParserFunction *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserValue_as_val(self->inner), "name"));
}


jb_FrozenArray CSSParserFunction_args(const CSSParserFunction *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserValue_as_val(self->inner), "args"));
}

