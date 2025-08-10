#include <webbind/XRJointSpace.h>

DEFINE_EMLITE_TYPE(XRJointSpace, XRSpace);


XRHandJoint XRJointSpace_jointName(const XRJointSpace *self) {
    return em_Val_as(XRHandJoint, em_Val_get(XRSpace_as_val(self->inner), em_Val_from("jointName")));
}

