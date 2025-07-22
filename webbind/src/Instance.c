#include <webbind/Instance.h>
#include <webbind/Module.h>


DEFINE_EMLITE_TYPE(Instance, em_Val);


Instance Instance_new(const Module* module_) : em_Val(em_Val_global("Instance").new_(em_Val_from(module_))) {
        return Instance(em_Val_new(em_Val_global("Instance", em_Val_from(module_)));
      }


Instance Instance_new(const Module* module_, const jb_Object* importObject) : em_Val(em_Val_global("Instance").new_(em_Val_from(module_), em_Val_from(importObject))) {
        return Instance(em_Val_new(em_Val_global("Instance", em_Val_from(module_), em_Val_from(importObject)));
      }


jb_Object Instance_exports(const Instance *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "exports"));
}

