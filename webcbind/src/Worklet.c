#include <webcbind/Worklet.h>

#include <webcbind/WorkletOptions.h>

DEFINE_EMLITE_TYPE(Worklet, em_Val);


jb_Promise Worklet_addModule0(Worklet* self , jb_String * moduleURL) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addModule", em_Val_from(moduleURL)));
}


jb_Promise Worklet_addModule1(Worklet* self , jb_String * moduleURL, WorkletOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addModule", em_Val_from(moduleURL), em_Val_from(options)));
}

