#include <webbind/CSSNamespaceRule.h>


DEFINE_EMLITE_TYPE(CSSNamespaceRule, CSSRule);


jb_String CSSNamespaceRule_namespaceURI(const CSSNamespaceRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("namespaceURI")));
}


jb_String CSSNamespaceRule_prefix(const CSSNamespaceRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("prefix")));
}

