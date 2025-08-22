#include <webcbind/ElementDefinitionOptions.h>

DEFINE_EMLITE_TYPE(ElementDefinitionOptions, em_Val);


jb_String ElementDefinitionOptions_extends(const ElementDefinitionOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extends")));
}


void ElementDefinitionOptions_set_extends(ElementDefinitionOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extends"), em_Val_from(value));
}


ElementDefinitionOptions ElementDefinitionOptions_new() {
    em_Val obj = em_Val_object();
    return ElementDefinitionOptions_from_val(&obj);
}

