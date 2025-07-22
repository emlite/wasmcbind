#include <webbind/MediaQueryListEvent.h>


DEFINE_EMLITE_TYPE(MediaQueryListEvent, Event);


MediaQueryListEvent MediaQueryListEvent_new0(jb_CSSOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("MediaQueryListEvent") , em_Val_from(type));
        return MediaQueryListEvent_from_val(&vv);
      }


MediaQueryListEvent MediaQueryListEvent_new1(jb_CSSOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MediaQueryListEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MediaQueryListEvent_from_val(&vv);
      }


jb_CSSOMString MediaQueryListEvent_media(const MediaQueryListEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("media")));
}


bool MediaQueryListEvent_matches(const MediaQueryListEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("matches")));
}

