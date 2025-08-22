#include <webcbind/XRTransientInputHitTestSource.h>

DEFINE_EMLITE_TYPE(XRTransientInputHitTestSource, em_Val);


jb_Undefined XRTransientInputHitTestSource_cancel(XRTransientInputHitTestSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "cancel"));
}

