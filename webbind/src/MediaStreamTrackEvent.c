#include <webbind/MediaStreamTrackEvent.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(MediaStreamTrackEvent, Event);


MediaStreamTrackEvent MediaStreamTrackEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MediaStreamTrackEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MediaStreamTrackEvent_from_val(&vv);
      }


MediaStreamTrack MediaStreamTrackEvent_track(const MediaStreamTrackEvent *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(Event_as_val(self->inner), em_Val_from("track")));
}

