#include <webbind/SanitizerConfig.h>

DEFINE_EMLITE_TYPE(SanitizerConfig, em_Val);


jb_Array SanitizerConfig_elements(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("elements")));
}


void SanitizerConfig_set_elements(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("elements"), em_Val_from(value));
}


jb_Array SanitizerConfig_removeElements(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("removeElements")));
}


void SanitizerConfig_set_removeElements(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("removeElements"), em_Val_from(value));
}


jb_Array SanitizerConfig_replaceWithChildrenElements(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("replaceWithChildrenElements")));
}


void SanitizerConfig_set_replaceWithChildrenElements(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("replaceWithChildrenElements"), em_Val_from(value));
}


jb_Array SanitizerConfig_attributes(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributes")));
}


void SanitizerConfig_set_attributes(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributes"), em_Val_from(value));
}


jb_Array SanitizerConfig_removeAttributes(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("removeAttributes")));
}


void SanitizerConfig_set_removeAttributes(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("removeAttributes"), em_Val_from(value));
}


bool SanitizerConfig_comments(const SanitizerConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("comments")));
}


void SanitizerConfig_set_comments(SanitizerConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("comments"), em_Val_from(value));
}


bool SanitizerConfig_dataAttributes(const SanitizerConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataAttributes")));
}


void SanitizerConfig_set_dataAttributes(SanitizerConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataAttributes"), em_Val_from(value));
}


SanitizerConfig SanitizerConfig_new() {
    em_Val obj = em_Val_object();
    return SanitizerConfig_from_val(&obj);
}

