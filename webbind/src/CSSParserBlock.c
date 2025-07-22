#include <webbind/CSSParserBlock.h>


DEFINE_EMLITE_TYPE(CSSParserBlock, CSSParserValue);


CSSParserBlock CSSParserBlock_new(jb_DOMString * name, jb_Sequence * body) {
        em_Val vv = em_Val_new(em_Val_global("CSSParserBlock") , em_Val_from(name), em_Val_from(body));
        return CSSParserBlock_from_val(&vv);
      }


jb_DOMString CSSParserBlock_name(const CSSParserBlock *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserValue_as_val(self->inner), em_Val_from("name")));
}


jb_FrozenArray CSSParserBlock_body(const CSSParserBlock *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserValue_as_val(self->inner), em_Val_from("body")));
}

