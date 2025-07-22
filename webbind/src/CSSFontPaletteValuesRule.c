#include <webbind/CSSFontPaletteValuesRule.h>


DEFINE_EMLITE_TYPE(CSSFontPaletteValuesRule, CSSRule);


jb_CSSOMString CSSFontPaletteValuesRule_name(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


jb_CSSOMString CSSFontPaletteValuesRule_fontFamily(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("fontFamily")));
}


jb_CSSOMString CSSFontPaletteValuesRule_basePalette(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("basePalette")));
}


jb_CSSOMString CSSFontPaletteValuesRule_overrideColors(const CSSFontPaletteValuesRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("overrideColors")));
}

