#include <webbind/CSSStyleValue.h>


DEFINE_EMLITE_TYPE(CSSStyleValue, em_Val);


CSSStyleValue CSSStyleValue_parse(CSSStyleValue* self , jb_USVString * property, jb_USVString * cssText) {
    return em_Val_as(CSSStyleValue, em_Val_call(em_Val_global("cssstylevalue"), "parse", em_Val_from(property), em_Val_from(cssText)));
}


jb_Sequence CSSStyleValue_parseAll(CSSStyleValue* self , jb_USVString * property, jb_USVString * cssText) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_global("cssstylevalue"), "parseAll", em_Val_from(property), em_Val_from(cssText)));
}

