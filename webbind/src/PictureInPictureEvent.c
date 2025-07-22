#include <webbind/PictureInPictureEvent.h>
#include <webbind/PictureInPictureWindow.h>


DEFINE_EMLITE_TYPE(PictureInPictureEvent, Event);


PictureInPictureEvent PictureInPictureEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PictureInPictureEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PictureInPictureEvent(em_Val_new(em_Val_global("PictureInPictureEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


PictureInPictureWindow PictureInPictureEvent_pictureInPictureWindow(const PictureInPictureEvent *self) {
    return em_Val_as(PictureInPictureWindow, em_Val_get(Event_as_val(self->inner), "pictureInPictureWindow"));
}

