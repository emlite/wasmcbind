#include <webcbind/RelatedApplication.h>

DEFINE_EMLITE_TYPE(RelatedApplication, em_Val);


jb_String RelatedApplication_platform(const RelatedApplication *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platform")));
}


void RelatedApplication_set_platform(RelatedApplication* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("platform"), em_Val_from(value));
}


jb_String RelatedApplication_url(const RelatedApplication *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void RelatedApplication_set_url(RelatedApplication* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


jb_String RelatedApplication_id(const RelatedApplication *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void RelatedApplication_set_id(RelatedApplication* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String RelatedApplication_version(const RelatedApplication *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void RelatedApplication_set_version(RelatedApplication* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}


RelatedApplication RelatedApplication_new() {
    em_Val obj = em_Val_object();
    return RelatedApplication_from_val(&obj);
}

