#include <webcbind/AnimationPlaybackEvent.h>

#include <webcbind/AnimationPlaybackEventInit.h>

DEFINE_EMLITE_TYPE(AnimationPlaybackEvent, Event);


AnimationPlaybackEvent AnimationPlaybackEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("AnimationPlaybackEvent") , em_Val_from(type));
        return AnimationPlaybackEvent_from_val(&vv);
      }


AnimationPlaybackEvent AnimationPlaybackEvent_new1(jb_String * type, AnimationPlaybackEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("AnimationPlaybackEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return AnimationPlaybackEvent_from_val(&vv);
      }


jb_Any AnimationPlaybackEvent_currentTime(const AnimationPlaybackEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("currentTime")));
}


jb_Any AnimationPlaybackEvent_timelineTime(const AnimationPlaybackEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("timelineTime")));
}

