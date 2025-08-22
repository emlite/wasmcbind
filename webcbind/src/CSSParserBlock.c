#include <webcbind/CSSParserBlock.h>

DEFINE_EMLITE_TYPE(CSSParserBlock, CSSParserValue);


CSSParserBlock CSSParserBlock_new(jb_String * name, jb_Array * body) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserBlock") , em_Val_from(name), em_Val_from(body));
        return CSSParserBlock_from_val(&vv);
      }


jb_String CSSParserBlock_name(const CSSParserBlock *self) {
    return em_Val_as(jb_String, em_Val_get(CSSParserValue_as_val(self->inner), em_Val_from("name")));
}


jb_Array CSSParserBlock_body(const CSSParserBlock *self) {
    return em_Val_as(jb_Array, em_Val_get(CSSParserValue_as_val(self->inner), em_Val_from("body")));
}

