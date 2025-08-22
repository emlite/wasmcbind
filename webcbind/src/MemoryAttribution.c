#include <webcbind/MemoryAttribution.h>

DEFINE_EMLITE_TYPE(MemoryAttribution, em_Val);


jb_String MemoryAttribution_url(const MemoryAttribution *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void MemoryAttribution_set_url(MemoryAttribution* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


MemoryAttributionContainer MemoryAttribution_container(const MemoryAttribution *self) {
    return em_Val_as(MemoryAttributionContainer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("container")));
}


void MemoryAttribution_set_container(MemoryAttribution* self, MemoryAttributionContainer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("container"), em_Val_from(value));
}


jb_String MemoryAttribution_scope(const MemoryAttribution *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scope")));
}


void MemoryAttribution_set_scope(MemoryAttribution* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scope"), em_Val_from(value));
}


MemoryAttribution MemoryAttribution_new() {
    em_Val obj = em_Val_object();
    return MemoryAttribution_from_val(&obj);
}

