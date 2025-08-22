#include <webcbind/LayoutWorkletGlobalScope.h>

DEFINE_EMLITE_TYPE(LayoutWorkletGlobalScope, WorkletGlobalScope);


jb_Undefined LayoutWorkletGlobalScope_registerLayout(LayoutWorkletGlobalScope* self , jb_String * name, jb_Function * layoutCtor) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkletGlobalScope_as_val(self->inner), "registerLayout", em_Val_from(name), em_Val_from(layoutCtor)));
}

