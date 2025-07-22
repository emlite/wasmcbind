#include <webbind/AnimationPlaybackEvent.h>


DEFINE_EMLITE_TYPE(AnimationPlaybackEvent, Event);


AnimationPlaybackEvent AnimationPlaybackEvent_new(const jb_DOMString* type) : Event(em_Val_global("AnimationPlaybackEvent").new_(em_Val_from(type))) {
        return AnimationPlaybackEvent(em_Val_new(em_Val_global("AnimationPlaybackEvent", em_Val_from(type)));
      }


AnimationPlaybackEvent AnimationPlaybackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("AnimationPlaybackEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return AnimationPlaybackEvent(em_Val_new(em_Val_global("AnimationPlaybackEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Any AnimationPlaybackEvent_currentTime(const AnimationPlaybackEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "currentTime"));
}


jb_Any AnimationPlaybackEvent_timelineTime(const AnimationPlaybackEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "timelineTime"));
}

