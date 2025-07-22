#include <webbind/PictureInPictureEvent.h>
#include <webbind/PictureInPictureWindow.h>


DEFINE_EMLITE_TYPE(PictureInPictureEvent, Event);


PictureInPictureEvent PictureInPictureEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PictureInPictureEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PictureInPictureEvent_from_val(&vv);
      }


PictureInPictureWindow PictureInPictureEvent_pictureInPictureWindow(const PictureInPictureEvent *self) {
    return em_Val_as(PictureInPictureWindow, em_Val_get(Event_as_val(self->inner), em_Val_from("pictureInPictureWindow")));
}

