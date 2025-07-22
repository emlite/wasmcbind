#include <webbind/Instance.h>
#include <webbind/Module.h>


DEFINE_EMLITE_TYPE(Instance, em_Val);


Instance Instance_new0(Module * module_) {
        em_Val vv = em_Val_new(em_Val_global("Instance") , em_Val_from(module_));
        return Instance_from_val(&vv);
      }


Instance Instance_new1(Module * module_, jb_Object * importObject) {
        em_Val vv = em_Val_new(em_Val_global("Instance") , em_Val_from(module_), em_Val_from(importObject));
        return Instance_from_val(&vv);
      }


jb_Object Instance_exports(const Instance *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exports")));
}

