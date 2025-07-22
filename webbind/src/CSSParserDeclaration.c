#include <webbind/CSSParserDeclaration.h>
#include <webbind/CSSParserValue.h>


DEFINE_EMLITE_TYPE(CSSParserDeclaration, CSSParserRule);


CSSParserDeclaration CSSParserDeclaration_new0(jb_DOMString * name) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserDeclaration") , em_Val_from(name));
        return CSSParserDeclaration_from_val(&vv);
      }


CSSParserDeclaration CSSParserDeclaration_new1(jb_DOMString * name, jb_Sequence * body) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserDeclaration") , em_Val_from(name), em_Val_from(body));
        return CSSParserDeclaration_from_val(&vv);
      }


jb_DOMString CSSParserDeclaration_name(const CSSParserDeclaration *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("name")));
}


jb_FrozenArray CSSParserDeclaration_body(const CSSParserDeclaration *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("body")));
}

