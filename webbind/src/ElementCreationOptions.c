#include <webbind/ElementCreationOptions.h>

#include <webbind/CustomElementRegistry.h>

DEFINE_EMLITE_TYPE(ElementCreationOptions, em_Val);


CustomElementRegistry ElementCreationOptions_customElementRegistry(const ElementCreationOptions *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("customElementRegistry")));
}


void ElementCreationOptions_set_customElementRegistry(ElementCreationOptions* self, CustomElementRegistry * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("customElementRegistry"), em_Val_from(value));
}


jb_String ElementCreationOptions_is(const ElementCreationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("is")));
}


void ElementCreationOptions_set_is(ElementCreationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("is"), em_Val_from(value));
}


ElementCreationOptions ElementCreationOptions_new() {
    em_Val obj = em_Val_object();
    return ElementCreationOptions_from_val(&obj);
}

