#include <webbind/CSSFontPaletteValuesRule.h>

DEFINE_EMLITE_TYPE(CSSFontPaletteValuesRule, CSSRule);


jb_String CSSFontPaletteValuesRule_name(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


jb_String CSSFontPaletteValuesRule_fontFamily(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("fontFamily")));
}


jb_String CSSFontPaletteValuesRule_basePalette(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("basePalette")));
}


jb_String CSSFontPaletteValuesRule_overrideColors(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("overrideColors")));
}

