#include <webbind/PictureInPictureWindow.h>

DEFINE_EMLITE_TYPE(PictureInPictureWindow, EventTarget);


long PictureInPictureWindow_width(const PictureInPictureWindow *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("width")));
}


long PictureInPictureWindow_height(const PictureInPictureWindow *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("height")));
}


jb_Any PictureInPictureWindow_onresize(const PictureInPictureWindow *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onresize")));
}


void PictureInPictureWindow_set_onresize(PictureInPictureWindow* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onresize"), em_Val_from(value));
}

