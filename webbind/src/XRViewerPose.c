#include <webbind/XRViewerPose.h>
#include <webbind/XRView.h>


DEFINE_EMLITE_TYPE(XRViewerPose, XRPose);


jb_FrozenArray XRViewerPose_views(const XRViewerPose *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(XRPose_as_val(self->inner), "views"));
}

