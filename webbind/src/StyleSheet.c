#include <webbind/StyleSheet.h>
#include <webbind/CSSStyleSheet.h>
#include <webbind/MediaList.h>


DEFINE_EMLITE_TYPE(StyleSheet, em_Val);


jb_CSSOMString StyleSheet_type(const StyleSheet *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


jb_USVString StyleSheet_href(const StyleSheet *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "href"));
}


jb_Any StyleSheet_ownerNode(const StyleSheet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "ownerNode"));
}


CSSStyleSheet StyleSheet_parentStyleSheet(const StyleSheet *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(em_Val_as_val(self->inner), "parentStyleSheet"));
}


jb_DOMString StyleSheet_title(const StyleSheet *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


MediaList StyleSheet_media(const StyleSheet *self) {
    return em_Val_as(MediaList, em_Val_get(em_Val_as_val(self->inner), "media"));
}


bool StyleSheet_disabled(const StyleSheet *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "disabled"));
}


void StyleSheet_set_disabled(StyleSheet* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "disabled", value);
}

