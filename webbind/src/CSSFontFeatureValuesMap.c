#include <webbind/CSSFontFeatureValuesMap.h>


DEFINE_EMLITE_TYPE(CSSFontFeatureValuesMap, em_Val);


jb_Undefined CSSFontFeatureValuesMap_set(CSSFontFeatureValuesMap* self , const jb_CSSOMString* featureValueName, const jb_Any* values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(featureValueName), em_Val_from(values)));
}

