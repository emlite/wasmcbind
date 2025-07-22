#include <webbind/XRCPUDepthInformation.h>


DEFINE_EMLITE_TYPE(XRCPUDepthInformation, XRDepthInformation);


jb_ArrayBuffer XRCPUDepthInformation_data(const XRCPUDepthInformation *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(XRDepthInformation_as_val(self->inner), "data"));
}


float XRCPUDepthInformation_getDepthInMeters(XRCPUDepthInformation* self , float x, float y) {
    return em_Val_as(float, em_Val_call(XRDepthInformation_as_val(self->inner), "getDepthInMeters", em_Val_from(x), em_Val_from(y)));
}

