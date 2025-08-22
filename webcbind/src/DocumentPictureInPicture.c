#include <webcbind/DocumentPictureInPicture.h>

#include <webcbind/Window.h>
#include <webcbind/DocumentPictureInPictureOptions.h>

DEFINE_EMLITE_TYPE(DocumentPictureInPicture, EventTarget);


jb_Promise DocumentPictureInPicture_requestWindow0(DocumentPictureInPicture* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestWindow"));
}


jb_Promise DocumentPictureInPicture_requestWindow1(DocumentPictureInPicture* self , DocumentPictureInPictureOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestWindow", em_Val_from(options)));
}


Window DocumentPictureInPicture_window(const DocumentPictureInPicture *self) {
    return em_Val_as(Window, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("window")));
}


jb_Any DocumentPictureInPicture_onenter(const DocumentPictureInPicture *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onenter")));
}


void DocumentPictureInPicture_set_onenter(DocumentPictureInPicture* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onenter"), em_Val_from(value));
}

