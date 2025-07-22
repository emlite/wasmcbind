#include <webbind/TrackEvent.h>


DEFINE_EMLITE_TYPE(TrackEvent, Event);


TrackEvent TrackEvent_new(const jb_DOMString* type) : Event(em_Val_global("TrackEvent").new_(em_Val_from(type))) {
        return TrackEvent(em_Val_new(em_Val_global("TrackEvent", em_Val_from(type)));
      }


TrackEvent TrackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("TrackEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return TrackEvent(em_Val_new(em_Val_global("TrackEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Any TrackEvent_track(const TrackEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "track"));
}

