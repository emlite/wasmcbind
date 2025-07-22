#include <webbind/AbortController.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(AbortController, em_Val);


AbortController AbortController_new() : em_Val(em_Val_global("AbortController").new_()) {
        return AbortController(em_Val_new(em_Val_global("AbortController", ));
      }


AbortSignal AbortController_signal(const AbortController *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


jb_Undefined AbortController_abort(AbortController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "abort"));
}


jb_Undefined AbortController_abort(AbortController* self , const jb_Any* reason) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "abort", em_Val_from(reason)));
}

