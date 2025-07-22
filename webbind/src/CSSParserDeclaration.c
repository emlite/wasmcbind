#include <webbind/CSSParserDeclaration.h>
#include <webbind/CSSParserValue.h>


DEFINE_EMLITE_TYPE(CSSParserDeclaration, CSSParserRule);


CSSParserDeclaration CSSParserDeclaration_new(const jb_DOMString* name) : CSSParserRule(em_Val_global("CSSParserDeclaration").new_(em_Val_from(name))) {
        return CSSParserDeclaration(em_Val_new(em_Val_global("CSSParserDeclaration", em_Val_from(name)));
      }


CSSParserDeclaration CSSParserDeclaration_new(const jb_DOMString* name, const jb_Sequence* body) : CSSParserRule(em_Val_global("CSSParserDeclaration").new_(em_Val_from(name), em_Val_from(body))) {
        return CSSParserDeclaration(em_Val_new(em_Val_global("CSSParserDeclaration", em_Val_from(name), em_Val_from(body)));
      }


jb_DOMString CSSParserDeclaration_name(const CSSParserDeclaration *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserRule_as_val(self->inner), "name"));
}


jb_FrozenArray CSSParserDeclaration_body(const CSSParserDeclaration *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), "body"));
}

