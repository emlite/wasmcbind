#include <webbind/TrackEvent.h>


DEFINE_EMLITE_TYPE(TrackEvent, Event);


TrackEvent TrackEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("TrackEvent") , em_Val_from(type));
        return TrackEvent_from_val(&vv);
      }


TrackEvent TrackEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("TrackEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return TrackEvent_from_val(&vv);
      }


jb_Any TrackEvent_track(const TrackEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("track")));
}

