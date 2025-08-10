#include <webbind/ImportNodeOptions.h>

#include <webbind/CustomElementRegistry.h>

DEFINE_EMLITE_TYPE(ImportNodeOptions, em_Val);


CustomElementRegistry ImportNodeOptions_customElementRegistry(const ImportNodeOptions *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("customElementRegistry")));
}


void ImportNodeOptions_set_customElementRegistry(ImportNodeOptions* self, CustomElementRegistry * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("customElementRegistry"), em_Val_from(value));
}


bool ImportNodeOptions_selfOnly(const ImportNodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selfOnly")));
}


void ImportNodeOptions_set_selfOnly(ImportNodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selfOnly"), em_Val_from(value));
}


ImportNodeOptions ImportNodeOptions_new() {
    em_Val obj = em_Val_object();
    return ImportNodeOptions_from_val(&obj);
}

