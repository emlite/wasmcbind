#include <webcbind/BrowserCaptureMediaStreamTrack.h>

#include <webcbind/CropTarget.h>
#include <webcbind/RestrictionTarget.h>

DEFINE_EMLITE_TYPE(BrowserCaptureMediaStreamTrack, MediaStreamTrack);


jb_Promise BrowserCaptureMediaStreamTrack_cropTo(BrowserCaptureMediaStreamTrack* self , CropTarget * cropTarget) {
    return em_Val_as(jb_Promise, em_Val_call(MediaStreamTrack_as_val(self->inner), "cropTo", em_Val_from(cropTarget)));
}


BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack_clone(BrowserCaptureMediaStreamTrack* self ) {
    return em_Val_as(BrowserCaptureMediaStreamTrack, em_Val_call(MediaStreamTrack_as_val(self->inner), "clone"));
}


jb_Promise BrowserCaptureMediaStreamTrack_restrictTo(BrowserCaptureMediaStreamTrack* self , RestrictionTarget * RestrictionTarget) {
    return em_Val_as(jb_Promise, em_Val_call(MediaStreamTrack_as_val(self->inner), "restrictTo", em_Val_from(RestrictionTarget)));
}

