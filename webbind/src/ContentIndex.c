#include <webbind/ContentIndex.h>


DEFINE_EMLITE_TYPE(ContentDescription, em_Val);


jb_DOMString ContentDescription_id(const ContentDescription *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


void ContentDescription_set_id(ContentDescription* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "id", value);
}


jb_DOMString ContentDescription_title(const ContentDescription *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


void ContentDescription_set_title(ContentDescription* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "title", value);
}


jb_DOMString ContentDescription_description(const ContentDescription *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "description"));
}


void ContentDescription_set_description(ContentDescription* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "description", value);
}


ContentCategory ContentDescription_category(const ContentDescription *self) {
    return em_Val_as(ContentCategory, em_Val_get(em_Val_as_val(self->inner), "category"));
}


void ContentDescription_set_category(ContentDescription* self, const ContentCategory* value) {
    em_Val_set(em_Val_as_val(self->inner), "category", value);
}


jb_Sequence ContentDescription_icons(const ContentDescription *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "icons"));
}


void ContentDescription_set_icons(ContentDescription* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "icons", value);
}


jb_USVString ContentDescription_url(const ContentDescription *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


void ContentDescription_set_url(ContentDescription* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "url", value);
}

DEFINE_EMLITE_TYPE(ContentIndex, em_Val);


jb_Promise ContentIndex_add(ContentIndex* self , const ContentDescription* description) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(description)));
}


jb_Promise ContentIndex_delete_(ContentIndex* self , const jb_DOMString* id) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(id)));
}


jb_Promise ContentIndex_getAll(ContentIndex* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getAll"));
}

