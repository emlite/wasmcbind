#include <webbind/XRTransientInputHitTestResult.h>
#include <webbind/XRInputSource.h>
#include <webbind/XRHitTestResult.h>


DEFINE_EMLITE_TYPE(XRTransientInputHitTestResult, em_Val);


XRInputSource XRTransientInputHitTestResult_inputSource(const XRTransientInputHitTestResult *self) {
    return em_Val_as(XRInputSource, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputSource")));
}


jb_FrozenArray XRTransientInputHitTestResult_results(const XRTransientInputHitTestResult *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("results")));
}

