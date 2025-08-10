#include <webbind/MemoryAttributionContainer.h>

DEFINE_EMLITE_TYPE(MemoryAttributionContainer, em_Val);


jb_String MemoryAttributionContainer_id(const MemoryAttributionContainer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void MemoryAttributionContainer_set_id(MemoryAttributionContainer* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String MemoryAttributionContainer_src(const MemoryAttributionContainer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("src")));
}


void MemoryAttributionContainer_set_src(MemoryAttributionContainer* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


MemoryAttributionContainer MemoryAttributionContainer_new() {
    em_Val obj = em_Val_object();
    return MemoryAttributionContainer_from_val(&obj);
}

