#include <webbind/CSSFontFeatureValuesRule.h>
#include <webbind/CSSFontFeatureValuesMap.h>


DEFINE_EMLITE_TYPE(CSSFontFeatureValuesRule, CSSRule);


jb_CSSOMString CSSFontFeatureValuesRule_fontFamily(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "fontFamily"));
}


void CSSFontFeatureValuesRule_set_fontFamily(CSSFontFeatureValuesRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "fontFamily", value);
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_annotation(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), "annotation"));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_ornaments(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), "ornaments"));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_stylistic(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), "stylistic"));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_swash(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), "swash"));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_characterVariant(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), "characterVariant"));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_styleset(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), "styleset"));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_historicalForms(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), "historicalForms"));
}

