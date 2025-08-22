#include <webcbind/StyleSheet.h>

#include <webcbind/CSSStyleSheet.h>
#include <webcbind/MediaList.h>

DEFINE_EMLITE_TYPE(StyleSheet, em_Val);


jb_String StyleSheet_type(const StyleSheet *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_String StyleSheet_href(const StyleSheet *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("href")));
}


jb_Any StyleSheet_ownerNode(const StyleSheet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ownerNode")));
}


CSSStyleSheet StyleSheet_parentStyleSheet(const StyleSheet *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parentStyleSheet")));
}


jb_String StyleSheet_title(const StyleSheet *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


MediaList StyleSheet_media(const StyleSheet *self) {
    return em_Val_as(MediaList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("media")));
}


bool StyleSheet_disabled(const StyleSheet *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("disabled")));
}


void StyleSheet_set_disabled(StyleSheet* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}

