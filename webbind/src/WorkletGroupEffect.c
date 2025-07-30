#include <webbind/WorkletGroupEffect.h>
#include <webbind/WorkletAnimationEffect.h>


DEFINE_EMLITE_TYPE(WorkletGroupEffect, em_Val);


jb_Array WorkletGroupEffect_getChildren(WorkletGroupEffect* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getChildren"));
}

