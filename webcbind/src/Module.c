#include <webcbind/Module.h>

#include <webcbind/ModuleExportDescriptor.h>
#include <webcbind/ModuleImportDescriptor.h>

DEFINE_EMLITE_TYPE(Module, em_Val);


Module Module_new(jb_Any * bytes) {
        em_Val vv = em_Val_new(em_Val_global("Module") , em_Val_from(bytes));
        return Module_from_val(&vv);
      }


jb_Array Module_exports(Module* self , Module * moduleObject) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_global("module"), "exports", em_Val_from(moduleObject)));
}


jb_Array Module_imports(Module* self , Module * moduleObject) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_global("module"), "imports", em_Val_from(moduleObject)));
}


jb_Array Module_customSections(Module* self , Module * moduleObject, jb_String * sectionName) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_global("module"), "customSections", em_Val_from(moduleObject), em_Val_from(sectionName)));
}

