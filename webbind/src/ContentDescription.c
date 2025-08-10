#include <webbind/ContentDescription.h>

DEFINE_EMLITE_TYPE(ContentDescription, em_Val);


jb_String ContentDescription_id(const ContentDescription *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void ContentDescription_set_id(ContentDescription* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String ContentDescription_title(const ContentDescription *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void ContentDescription_set_title(ContentDescription* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_String ContentDescription_description(const ContentDescription *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


void ContentDescription_set_description(ContentDescription* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("description"), em_Val_from(value));
}


ContentCategory ContentDescription_category(const ContentDescription *self) {
    return em_Val_as(ContentCategory, em_Val_get(em_Val_as_val(self->inner), em_Val_from("category")));
}


void ContentDescription_set_category(ContentDescription* self, ContentCategory * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("category"), em_Val_from(value));
}


jb_Array ContentDescription_icons(const ContentDescription *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icons")));
}


void ContentDescription_set_icons(ContentDescription* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icons"), em_Val_from(value));
}


jb_String ContentDescription_url(const ContentDescription *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void ContentDescription_set_url(ContentDescription* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


ContentDescription ContentDescription_new() {
    em_Val obj = em_Val_object();
    return ContentDescription_from_val(&obj);
}

