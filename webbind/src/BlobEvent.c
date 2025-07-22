#include <webbind/BlobEvent.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(BlobEvent, Event);


BlobEvent BlobEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("BlobEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return BlobEvent(em_Val_new(em_Val_global("BlobEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Blob BlobEvent_data(const BlobEvent *self) {
    return em_Val_as(Blob, em_Val_get(Event_as_val(self->inner), "data"));
}


jb_Any BlobEvent_timecode(const BlobEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "timecode"));
}

