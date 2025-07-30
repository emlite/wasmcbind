#include <webbind/AnimationWorkletGlobalScope.h>


DEFINE_EMLITE_TYPE(AnimationWorkletGlobalScope, WorkletGlobalScope);


jb_Undefined AnimationWorkletGlobalScope_registerAnimator(AnimationWorkletGlobalScope* self , jb_String * name, jb_Function * animatorCtor) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkletGlobalScope_as_val(self->inner), "registerAnimator", em_Val_from(name), em_Val_from(animatorCtor)));
}

