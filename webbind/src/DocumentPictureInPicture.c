#include <webbind/DocumentPictureInPicture.h>
#include <webbind/Window.h>


DEFINE_EMLITE_TYPE(DocumentPictureInPictureOptions, em_Val);


long long DocumentPictureInPictureOptions_width(const DocumentPictureInPictureOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void DocumentPictureInPictureOptions_set_width(DocumentPictureInPictureOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


long long DocumentPictureInPictureOptions_height(const DocumentPictureInPictureOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void DocumentPictureInPictureOptions_set_height(DocumentPictureInPictureOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


bool DocumentPictureInPictureOptions_disallowReturnToOpener(const DocumentPictureInPictureOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("disallowReturnToOpener")));
}


void DocumentPictureInPictureOptions_set_disallowReturnToOpener(DocumentPictureInPictureOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("disallowReturnToOpener"), em_Val_from(value));
}


bool DocumentPictureInPictureOptions_preferInitialWindowPlacement(const DocumentPictureInPictureOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preferInitialWindowPlacement")));
}


void DocumentPictureInPictureOptions_set_preferInitialWindowPlacement(DocumentPictureInPictureOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preferInitialWindowPlacement"), em_Val_from(value));
}

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

