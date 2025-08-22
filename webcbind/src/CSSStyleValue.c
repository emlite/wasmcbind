#include <webcbind/CSSStyleValue.h>

DEFINE_EMLITE_TYPE(CSSStyleValue, em_Val);


CSSStyleValue CSSStyleValue_parse(CSSStyleValue* self , jb_String * property, jb_String * cssText) {
    return em_Val_as(CSSStyleValue, em_Val_call(em_Val_global("cssstylevalue"), "parse", em_Val_from(property), em_Val_from(cssText)));
}


jb_Array CSSStyleValue_parseAll(CSSStyleValue* self , jb_String * property, jb_String * cssText) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_global("cssstylevalue"), "parseAll", em_Val_from(property), em_Val_from(cssText)));
}

