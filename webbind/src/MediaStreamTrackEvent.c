#include <webbind/MediaStreamTrackEvent.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(MediaStreamTrackEvent, Event);


MediaStreamTrackEvent MediaStreamTrackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("MediaStreamTrackEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return MediaStreamTrackEvent(em_Val_new(em_Val_global("MediaStreamTrackEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


MediaStreamTrack MediaStreamTrackEvent_track(const MediaStreamTrackEvent *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(Event_as_val(self->inner), "track"));
}

