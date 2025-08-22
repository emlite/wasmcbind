#include <webcbind/SanitizerElementNamespaceWithAttributes.h>

DEFINE_EMLITE_TYPE(SanitizerElementNamespaceWithAttributes, SanitizerElementNamespace);


jb_Array SanitizerElementNamespaceWithAttributes_attributes(const SanitizerElementNamespaceWithAttributes *self) {
    return em_Val_as(jb_Array, em_Val_get(SanitizerElementNamespace_as_val(self->inner), em_Val_from("attributes")));
}


void SanitizerElementNamespaceWithAttributes_set_attributes(SanitizerElementNamespaceWithAttributes* self, jb_Array * value) {
    em_Val_set(SanitizerElementNamespace_as_val(self->inner), em_Val_from("attributes"), em_Val_from(value));
}


jb_Array SanitizerElementNamespaceWithAttributes_removeAttributes(const SanitizerElementNamespaceWithAttributes *self) {
    return em_Val_as(jb_Array, em_Val_get(SanitizerElementNamespace_as_val(self->inner), em_Val_from("removeAttributes")));
}


void SanitizerElementNamespaceWithAttributes_set_removeAttributes(SanitizerElementNamespaceWithAttributes* self, jb_Array * value) {
    em_Val_set(SanitizerElementNamespace_as_val(self->inner), em_Val_from("removeAttributes"), em_Val_from(value));
}


SanitizerElementNamespaceWithAttributes SanitizerElementNamespaceWithAttributes_new() {
    em_Val obj = em_Val_object();
    return SanitizerElementNamespaceWithAttributes_from_val(&obj);
}

