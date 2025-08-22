#include <webcbind/CSSParserDeclaration.h>

#include <webcbind/CSSParserValue.h>

DEFINE_EMLITE_TYPE(CSSParserDeclaration, CSSParserRule);


CSSParserDeclaration CSSParserDeclaration_new0(jb_String * name) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserDeclaration") , em_Val_from(name));
        return CSSParserDeclaration_from_val(&vv);
      }


CSSParserDeclaration CSSParserDeclaration_new1(jb_String * name, jb_Array * body) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserDeclaration") , em_Val_from(name), em_Val_from(body));
        return CSSParserDeclaration_from_val(&vv);
      }


jb_String CSSParserDeclaration_name(const CSSParserDeclaration *self) {
    return em_Val_as(jb_String, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("name")));
}


jb_Array CSSParserDeclaration_body(const CSSParserDeclaration *self) {
    return em_Val_as(jb_Array, em_Val_get(CSSParserRule_as_val(self->inner), em_Val_from("body")));
}

