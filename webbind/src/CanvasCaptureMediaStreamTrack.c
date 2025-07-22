#include <webbind/CanvasCaptureMediaStreamTrack.h>
#include <webbind/HTMLCanvasElement.h>


DEFINE_EMLITE_TYPE(CanvasCaptureMediaStreamTrack, MediaStreamTrack);


HTMLCanvasElement CanvasCaptureMediaStreamTrack_canvas(const CanvasCaptureMediaStreamTrack *self) {
    return em_Val_as(HTMLCanvasElement, em_Val_get(MediaStreamTrack_as_val(self->inner), "canvas"));
}


jb_Undefined CanvasCaptureMediaStreamTrack_requestFrame(CanvasCaptureMediaStreamTrack* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(MediaStreamTrack_as_val(self->inner), "requestFrame"));
}

