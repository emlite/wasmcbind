#include <webcbind/XRViewerPose.h>

#include <webcbind/XRView.h>

DEFINE_EMLITE_TYPE(XRViewerPose, XRPose);


jb_Array XRViewerPose_views(const XRViewerPose *self) {
    return em_Val_as(jb_Array, em_Val_get(XRPose_as_val(self->inner), em_Val_from("views")));
}

