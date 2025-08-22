#include <webcbind/PropertyDefinition.h>

DEFINE_EMLITE_TYPE(PropertyDefinition, em_Val);


jb_String PropertyDefinition_name(const PropertyDefinition *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void PropertyDefinition_set_name(PropertyDefinition* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String PropertyDefinition_syntax(const PropertyDefinition *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("syntax")));
}


void PropertyDefinition_set_syntax(PropertyDefinition* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("syntax"), em_Val_from(value));
}


bool PropertyDefinition_inherits(const PropertyDefinition *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inherits")));
}


void PropertyDefinition_set_inherits(PropertyDefinition* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inherits"), em_Val_from(value));
}


jb_String PropertyDefinition_initialValue(const PropertyDefinition *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initialValue")));
}


void PropertyDefinition_set_initialValue(PropertyDefinition* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initialValue"), em_Val_from(value));
}


PropertyDefinition PropertyDefinition_new() {
    em_Val obj = em_Val_object();
    return PropertyDefinition_from_val(&obj);
}

