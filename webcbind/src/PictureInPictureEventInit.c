#include <webcbind/PictureInPictureEventInit.h>

#include <webcbind/PictureInPictureWindow.h>

DEFINE_EMLITE_TYPE(PictureInPictureEventInit, EventInit);


PictureInPictureWindow PictureInPictureEventInit_pictureInPictureWindow(const PictureInPictureEventInit *self) {
    return em_Val_as(PictureInPictureWindow, em_Val_get(EventInit_as_val(self->inner), em_Val_from("pictureInPictureWindow")));
}


void PictureInPictureEventInit_set_pictureInPictureWindow(PictureInPictureEventInit* self, PictureInPictureWindow * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("pictureInPictureWindow"), em_Val_from(value));
}


PictureInPictureEventInit PictureInPictureEventInit_new() {
    em_Val obj = em_Val_object();
    return PictureInPictureEventInit_from_val(&obj);
}

