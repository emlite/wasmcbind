#include <webcbind/CSSStyleSheetInit.h>

DEFINE_EMLITE_TYPE(CSSStyleSheetInit, em_Val);


jb_String CSSStyleSheetInit_baseURL(const CSSStyleSheetInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseURL")));
}


void CSSStyleSheetInit_set_baseURL(CSSStyleSheetInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseURL"), em_Val_from(value));
}


jb_Any CSSStyleSheetInit_media(const CSSStyleSheetInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("media")));
}


void CSSStyleSheetInit_set_media(CSSStyleSheetInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("media"), em_Val_from(value));
}


bool CSSStyleSheetInit_disabled(const CSSStyleSheetInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("disabled")));
}


void CSSStyleSheetInit_set_disabled(CSSStyleSheetInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


CSSStyleSheetInit CSSStyleSheetInit_new() {
    em_Val obj = em_Val_object();
    return CSSStyleSheetInit_from_val(&obj);
}

