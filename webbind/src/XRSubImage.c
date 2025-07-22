#include <webbind/XRSubImage.h>
#include <webbind/XRViewport.h>


DEFINE_EMLITE_TYPE(XRSubImage, em_Val);


XRViewport XRSubImage_viewport(const XRSubImage *self) {
    return em_Val_as(XRViewport, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewport")));
}

