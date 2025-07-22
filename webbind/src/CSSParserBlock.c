#include <webbind/CSSParserBlock.h>


DEFINE_EMLITE_TYPE(CSSParserBlock, CSSParserValue);


CSSParserBlock CSSParserBlock_new(const jb_DOMString* name, const jb_Sequence* body) : CSSParserValue(em_Val_global("CSSParserBlock").new_(em_Val_from(name), em_Val_from(body))) {
        return CSSParserBlock(em_Val_new(em_Val_global("CSSParserBlock", em_Val_from(name), em_Val_from(body)));
      }


jb_DOMString CSSParserBlock_name(const CSSParserBlock *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CSSParserValue_as_val(self->inner), "name"));
}


jb_FrozenArray CSSParserBlock_body(const CSSParserBlock *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSParserValue_as_val(self->inner), "body"));
}

