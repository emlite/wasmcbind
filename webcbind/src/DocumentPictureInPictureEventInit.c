#include <webcbind/DocumentPictureInPictureEventInit.h>

#include <webcbind/Window.h>

DEFINE_EMLITE_TYPE(DocumentPictureInPictureEventInit, EventInit);


Window DocumentPictureInPictureEventInit_window(const DocumentPictureInPictureEventInit *self) {
    return em_Val_as(Window, em_Val_get(EventInit_as_val(self->inner), em_Val_from("window")));
}


void DocumentPictureInPictureEventInit_set_window(DocumentPictureInPictureEventInit* self, Window * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("window"), em_Val_from(value));
}


DocumentPictureInPictureEventInit DocumentPictureInPictureEventInit_new() {
    em_Val obj = em_Val_object();
    return DocumentPictureInPictureEventInit_from_val(&obj);
}

