#include <webbind/DocumentPictureInPictureOptions.h>

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


DocumentPictureInPictureOptions DocumentPictureInPictureOptions_new() {
    em_Val obj = em_Val_object();
    return DocumentPictureInPictureOptions_from_val(&obj);
}

