#include <webbind/XRHand.h>

#include <webbind/XRJointSpace.h>

DEFINE_EMLITE_TYPE(XRHand, em_Val);


unsigned long XRHand_size(const XRHand *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


XRJointSpace XRHand_get(XRHand* self , XRHandJoint * key) {
    return em_Val_as(XRJointSpace, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(key)));
}

