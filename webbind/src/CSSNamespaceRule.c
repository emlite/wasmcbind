#include <webbind/CSSNamespaceRule.h>


DEFINE_EMLITE_TYPE(CSSNamespaceRule, CSSRule);


jb_CSSOMString CSSNamespaceRule_namespaceURI(const CSSNamespaceRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("namespaceURI")));
}


jb_CSSOMString CSSNamespaceRule_prefix(const CSSNamespaceRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("prefix")));
}

