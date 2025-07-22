#include <webbind/CSSKeywordValue.h>


DEFINE_EMLITE_TYPE(CSSKeywordValue, CSSStyleValue);


CSSKeywordValue CSSKeywordValue_new(jb_USVString * value) {
        em_Val vv = em_Val_new(em_Val_global("CSSKeywordValue") , em_Val_from(value));
        return CSSKeywordValue_from_val(&vv);
      }


jb_USVString CSSKeywordValue_value(const CSSKeywordValue *self) {
    return em_Val_as(jb_USVString, em_Val_get(CSSStyleValue_as_val(self->inner), em_Val_from("value")));
}


void CSSKeywordValue_set_value(CSSKeywordValue* self, jb_USVString * value) {
    em_Val_set(CSSStyleValue_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}

