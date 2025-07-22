#include <webbind/XRHitTestSource.h>


DEFINE_EMLITE_TYPE(XRHitTestSource, em_Val);


jb_Undefined XRHitTestSource_cancel(XRHitTestSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "cancel"));
}

