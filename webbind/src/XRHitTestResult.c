#include <webbind/XRHitTestResult.h>
#include <webbind/XRPose.h>
#include <webbind/XRSpace.h>
#include <webbind/XRAnchor.h>


DEFINE_EMLITE_TYPE(XRHitTestResult, em_Val);


XRPose XRHitTestResult_getPose(XRHitTestResult* self , const XRSpace* baseSpace) {
    return em_Val_as(XRPose, em_Val_call(em_Val_as_val(self->inner), "getPose", em_Val_from(baseSpace)));
}


jb_Promise XRHitTestResult_createAnchor(XRHitTestResult* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createAnchor"));
}

