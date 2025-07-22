#include <webbind/XRJointPose.h>


DEFINE_EMLITE_TYPE(XRJointPose, XRPose);


float XRJointPose_radius(const XRJointPose *self) {
    return em_Val_as(float, em_Val_get(XRPose_as_val(self->inner), em_Val_from("radius")));
}

