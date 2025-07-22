#include <webbind/ContentIndex.h>


DEFINE_EMLITE_TYPE(ContentDescription, em_Val);


jb_DOMString ContentDescription_id(const ContentDescription *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void ContentDescription_set_id(ContentDescription* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_DOMString ContentDescription_title(const ContentDescription *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void ContentDescription_set_title(ContentDescription* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_DOMString ContentDescription_description(const ContentDescription *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


void ContentDescription_set_description(ContentDescription* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("description"), em_Val_from(value));
}


ContentCategory ContentDescription_category(const ContentDescription *self) {
    return em_Val_as(ContentCategory, em_Val_get(em_Val_as_val(self->inner), em_Val_from("category")));
}


void ContentDescription_set_category(ContentDescription* self, ContentCategory * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("category"), em_Val_from(value));
}


jb_Sequence ContentDescription_icons(const ContentDescription *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icons")));
}


void ContentDescription_set_icons(ContentDescription* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icons"), em_Val_from(value));
}


jb_USVString ContentDescription_url(const ContentDescription *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void ContentDescription_set_url(ContentDescription* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ContentIndex, em_Val);


jb_Promise ContentIndex_add(ContentIndex* self , ContentDescription * description) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(description)));
}


jb_Promise ContentIndex_delete_(ContentIndex* self , jb_DOMString * id) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(id)));
}


jb_Promise ContentIndex_getAll(ContentIndex* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getAll"));
}

