#include <webbind/XRDepthInformation.h>

#include <webbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRDepthInformation, em_Val);


unsigned long XRDepthInformation_width(const XRDepthInformation *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


unsigned long XRDepthInformation_height(const XRDepthInformation *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


XRRigidTransform XRDepthInformation_normDepthBufferFromNormView(const XRDepthInformation *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), em_Val_from("normDepthBufferFromNormView")));
}


float XRDepthInformation_rawValueToMeters(const XRDepthInformation *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rawValueToMeters")));
}


jb_Float32Array XRDepthInformation_projectionMatrix(const XRDepthInformation *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("projectionMatrix")));
}


XRRigidTransform XRDepthInformation_transform(const XRDepthInformation *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transform")));
}

