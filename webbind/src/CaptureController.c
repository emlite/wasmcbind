#include <webbind/CaptureController.h>
#include <webbind/HTMLElement.h>


DEFINE_EMLITE_TYPE(CaptureController, EventTarget);


CaptureController CaptureController_new() {
        em_Val vv = em_Val_new(em_Val_global("CaptureController") );
        return CaptureController_from_val(&vv);
      }


jb_Undefined CaptureController_setFocusBehavior(CaptureController* self , CaptureStartFocusBehavior * focusBehavior) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setFocusBehavior", em_Val_from(focusBehavior)));
}


jb_Any CaptureController_oncapturedmousechange(const CaptureController *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncapturedmousechange")));
}


void CaptureController_set_oncapturedmousechange(CaptureController* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncapturedmousechange"), em_Val_from(value));
}


jb_Sequence CaptureController_getSupportedZoomLevels(CaptureController* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getSupportedZoomLevels"));
}


long CaptureController_zoomLevel(const CaptureController *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("zoomLevel")));
}


jb_Promise CaptureController_increaseZoomLevel(CaptureController* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "increaseZoomLevel"));
}


jb_Promise CaptureController_decreaseZoomLevel(CaptureController* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "decreaseZoomLevel"));
}


jb_Promise CaptureController_resetZoomLevel(CaptureController* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "resetZoomLevel"));
}


jb_Any CaptureController_onzoomlevelchange(const CaptureController *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onzoomlevelchange")));
}


void CaptureController_set_onzoomlevelchange(CaptureController* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onzoomlevelchange"), em_Val_from(value));
}


jb_Promise CaptureController_forwardWheel(CaptureController* self , HTMLElement * element) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "forwardWheel", em_Val_from(element)));
}

