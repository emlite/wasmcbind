#include <webbind/HTMLVideoElement.h>
#include <webbind/VideoPlaybackQuality.h>
#include <webbind/PictureInPictureWindow.h>


DEFINE_EMLITE_TYPE(HTMLVideoElement, HTMLMediaElement);


HTMLVideoElement HTMLVideoElement_new() : HTMLMediaElement(em_Val_global("HTMLVideoElement").new_()) {
        return HTMLVideoElement(em_Val_new(em_Val_global("HTMLVideoElement", ));
      }


unsigned long HTMLVideoElement_width(const HTMLVideoElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLMediaElement_as_val(self->inner), "width"));
}


void HTMLVideoElement_set_width(HTMLVideoElement* self, unsigned long value) {
    em_Val_set(HTMLMediaElement_as_val(self->inner), "width", value);
}


unsigned long HTMLVideoElement_height(const HTMLVideoElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLMediaElement_as_val(self->inner), "height"));
}


void HTMLVideoElement_set_height(HTMLVideoElement* self, unsigned long value) {
    em_Val_set(HTMLMediaElement_as_val(self->inner), "height", value);
}


unsigned long HTMLVideoElement_videoWidth(const HTMLVideoElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLMediaElement_as_val(self->inner), "videoWidth"));
}


unsigned long HTMLVideoElement_videoHeight(const HTMLVideoElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLMediaElement_as_val(self->inner), "videoHeight"));
}


jb_USVString HTMLVideoElement_poster(const HTMLVideoElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLMediaElement_as_val(self->inner), "poster"));
}


void HTMLVideoElement_set_poster(HTMLVideoElement* self, const jb_USVString* value) {
    em_Val_set(HTMLMediaElement_as_val(self->inner), "poster", value);
}


bool HTMLVideoElement_playsInline(const HTMLVideoElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLMediaElement_as_val(self->inner), "playsInline"));
}


void HTMLVideoElement_set_playsInline(HTMLVideoElement* self, bool value) {
    em_Val_set(HTMLMediaElement_as_val(self->inner), "playsInline", value);
}


VideoPlaybackQuality HTMLVideoElement_getVideoPlaybackQuality(HTMLVideoElement* self ) {
    return em_Val_as(VideoPlaybackQuality, em_Val_call(HTMLMediaElement_as_val(self->inner), "getVideoPlaybackQuality"));
}


jb_Promise HTMLVideoElement_requestPictureInPicture(HTMLVideoElement* self ) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLMediaElement_as_val(self->inner), "requestPictureInPicture"));
}


jb_Any HTMLVideoElement_onenterpictureinpicture(const HTMLVideoElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLMediaElement_as_val(self->inner), "onenterpictureinpicture"));
}


void HTMLVideoElement_set_onenterpictureinpicture(HTMLVideoElement* self, const jb_Any* value) {
    em_Val_set(HTMLMediaElement_as_val(self->inner), "onenterpictureinpicture", value);
}


jb_Any HTMLVideoElement_onleavepictureinpicture(const HTMLVideoElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLMediaElement_as_val(self->inner), "onleavepictureinpicture"));
}


void HTMLVideoElement_set_onleavepictureinpicture(HTMLVideoElement* self, const jb_Any* value) {
    em_Val_set(HTMLMediaElement_as_val(self->inner), "onleavepictureinpicture", value);
}


bool HTMLVideoElement_disablePictureInPicture(const HTMLVideoElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLMediaElement_as_val(self->inner), "disablePictureInPicture"));
}


void HTMLVideoElement_set_disablePictureInPicture(HTMLVideoElement* self, bool value) {
    em_Val_set(HTMLMediaElement_as_val(self->inner), "disablePictureInPicture", value);
}


unsigned long HTMLVideoElement_requestVideoFrameCallback(HTMLVideoElement* self , const jb_Function* callback) {
    return em_Val_as(unsigned long, em_Val_call(HTMLMediaElement_as_val(self->inner), "requestVideoFrameCallback", em_Val_from(callback)));
}


jb_Undefined HTMLVideoElement_cancelVideoFrameCallback(HTMLVideoElement* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLMediaElement_as_val(self->inner), "cancelVideoFrameCallback", em_Val_from(handle)));
}

