#include <webbind/BlobEvent.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(BlobEvent, Event);


BlobEvent BlobEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("BlobEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return BlobEvent_from_val(&vv);
      }


Blob BlobEvent_data(const BlobEvent *self) {
    return em_Val_as(Blob, em_Val_get(Event_as_val(self->inner), em_Val_from("data")));
}


jb_Any BlobEvent_timecode(const BlobEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("timecode")));
}

