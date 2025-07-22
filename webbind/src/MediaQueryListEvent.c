#include <webbind/MediaQueryListEvent.h>


DEFINE_EMLITE_TYPE(MediaQueryListEvent, Event);


MediaQueryListEvent MediaQueryListEvent_new(const jb_CSSOMString* type) : Event(em_Val_global("MediaQueryListEvent").new_(em_Val_from(type))) {
        return MediaQueryListEvent(em_Val_new(em_Val_global("MediaQueryListEvent", em_Val_from(type)));
      }


MediaQueryListEvent MediaQueryListEvent_new(const jb_CSSOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("MediaQueryListEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return MediaQueryListEvent(em_Val_new(em_Val_global("MediaQueryListEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_CSSOMString MediaQueryListEvent_media(const MediaQueryListEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), "media"));
}


bool MediaQueryListEvent_matches(const MediaQueryListEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "matches"));
}

