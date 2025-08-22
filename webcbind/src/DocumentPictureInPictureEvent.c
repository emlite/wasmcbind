#include <webcbind/DocumentPictureInPictureEvent.h>

#include <webcbind/DocumentPictureInPictureEventInit.h>
#include <webcbind/Window.h>

DEFINE_EMLITE_TYPE(DocumentPictureInPictureEvent, Event);


DocumentPictureInPictureEvent DocumentPictureInPictureEvent_new(jb_String * type, DocumentPictureInPictureEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("DocumentPictureInPictureEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return DocumentPictureInPictureEvent_from_val(&vv);
      }


Window DocumentPictureInPictureEvent_window(const DocumentPictureInPictureEvent *self) {
    return em_Val_as(Window, em_Val_get(Event_as_val(self->inner), em_Val_from("window")));
}

