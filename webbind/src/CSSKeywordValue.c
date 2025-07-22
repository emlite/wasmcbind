#include <webbind/CSSKeywordValue.h>


DEFINE_EMLITE_TYPE(CSSKeywordValue, CSSStyleValue);


CSSKeywordValue CSSKeywordValue_new(const jb_USVString* value) : CSSStyleValue(em_Val_global("CSSKeywordValue").new_(em_Val_from(value))) {
        return CSSKeywordValue(em_Val_new(em_Val_global("CSSKeywordValue", em_Val_from(value)));
      }


jb_USVString CSSKeywordValue_value(const CSSKeywordValue *self) {
    return em_Val_as(jb_USVString, em_Val_get(CSSStyleValue_as_val(self->inner), "value"));
}


void CSSKeywordValue_set_value(CSSKeywordValue* self, const jb_USVString* value) {
    em_Val_set(CSSStyleValue_as_val(self->inner), "value", value);
}

