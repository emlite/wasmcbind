#include <webbind/CSSColorValue.h>


DEFINE_EMLITE_TYPE(CSSColorValue, CSSStyleValue);


jb_Any CSSColorValue_parse(CSSColorValue* self , jb_USVString * cssText) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_global("csscolorvalue"), "parse", em_Val_from(cssText)));
}

