#include <webbind/BrowserCaptureMediaStreamTrack.h>
#include <webbind/CropTarget.h>
#include <webbind/RestrictionTarget.h>


DEFINE_EMLITE_TYPE(BrowserCaptureMediaStreamTrack, MediaStreamTrack);


jb_Promise BrowserCaptureMediaStreamTrack_cropTo(BrowserCaptureMediaStreamTrack* self , const CropTarget* cropTarget) {
    return em_Val_as(jb_Promise, em_Val_call(MediaStreamTrack_as_val(self->inner), "cropTo", em_Val_from(cropTarget)));
}


BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack_clone(BrowserCaptureMediaStreamTrack* self ) {
    return em_Val_as(BrowserCaptureMediaStreamTrack, em_Val_call(MediaStreamTrack_as_val(self->inner), "clone"));
}


jb_Promise BrowserCaptureMediaStreamTrack_restrictTo(BrowserCaptureMediaStreamTrack* self , const RestrictionTarget* RestrictionTarget) {
    return em_Val_as(jb_Promise, em_Val_call(MediaStreamTrack_as_val(self->inner), "restrictTo", em_Val_from(RestrictionTarget)));
}

