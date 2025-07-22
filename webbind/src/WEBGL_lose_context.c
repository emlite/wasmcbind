#include <webbind/WEBGL_lose_context.h>


DEFINE_EMLITE_TYPE(WEBGL_lose_context, em_Val);


jb_Undefined WEBGL_lose_context_loseContext(WEBGL_lose_context* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "loseContext"));
}


jb_Undefined WEBGL_lose_context_restoreContext(WEBGL_lose_context* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "restoreContext"));
}

