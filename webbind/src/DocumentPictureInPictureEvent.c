#include <webbind/DocumentPictureInPictureEvent.h>
#include <webbind/Window.h>


DEFINE_EMLITE_TYPE(DocumentPictureInPictureEvent, Event);


DocumentPictureInPictureEvent DocumentPictureInPictureEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("DocumentPictureInPictureEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return DocumentPictureInPictureEvent(em_Val_new(em_Val_global("DocumentPictureInPictureEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Window DocumentPictureInPictureEvent_window(const DocumentPictureInPictureEvent *self) {
    return em_Val_as(Window, em_Val_get(Event_as_val(self->inner), "window"));
}

