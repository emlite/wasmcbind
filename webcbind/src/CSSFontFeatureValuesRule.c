#include <webcbind/CSSFontFeatureValuesRule.h>

#include <webcbind/CSSFontFeatureValuesMap.h>

DEFINE_EMLITE_TYPE(CSSFontFeatureValuesRule, CSSRule);


jb_String CSSFontFeatureValuesRule_fontFamily(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("fontFamily")));
}


void CSSFontFeatureValuesRule_set_fontFamily(CSSFontFeatureValuesRule* self, jb_String * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("fontFamily"), em_Val_from(value));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_annotation(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("annotation")));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_ornaments(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("ornaments")));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_stylistic(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("stylistic")));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_swash(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("swash")));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_characterVariant(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("characterVariant")));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_styleset(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("styleset")));
}


CSSFontFeatureValuesMap CSSFontFeatureValuesRule_historicalForms(const CSSFontFeatureValuesRule *self) {
    return em_Val_as(CSSFontFeatureValuesMap, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("historicalForms")));
}

