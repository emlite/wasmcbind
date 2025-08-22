#include <webcbind/WebAssemblyInstantiatedSource.h>

#include <webcbind/Module.h>
#include <webcbind/Instance.h>

DEFINE_EMLITE_TYPE(WebAssemblyInstantiatedSource, em_Val);


Module WebAssemblyInstantiatedSource_module_(const WebAssemblyInstantiatedSource *self) {
    return em_Val_as(Module, em_Val_get(em_Val_as_val(self->inner), em_Val_from("module")));
}


void WebAssemblyInstantiatedSource_set_module_(WebAssemblyInstantiatedSource* self, Module * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("module"), em_Val_from(value));
}


Instance WebAssemblyInstantiatedSource_instance(const WebAssemblyInstantiatedSource *self) {
    return em_Val_as(Instance, em_Val_get(em_Val_as_val(self->inner), em_Val_from("instance")));
}


void WebAssemblyInstantiatedSource_set_instance(WebAssemblyInstantiatedSource* self, Instance * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("instance"), em_Val_from(value));
}


WebAssemblyInstantiatedSource WebAssemblyInstantiatedSource_new() {
    em_Val obj = em_Val_object();
    return WebAssemblyInstantiatedSource_from_val(&obj);
}

