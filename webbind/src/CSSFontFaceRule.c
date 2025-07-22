#include <webbind/CSSFontFaceRule.h>
#include <webbind/CSSFontFaceDescriptors.h>


DEFINE_EMLITE_TYPE(CSSFontFaceRule, CSSRule);


CSSFontFaceDescriptors CSSFontFaceRule_style(const CSSFontFaceRule *self) {
    return em_Val_as(CSSFontFaceDescriptors, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("style")));
}

