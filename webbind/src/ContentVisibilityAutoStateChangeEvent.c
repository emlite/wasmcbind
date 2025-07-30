#include <webbind/ContentVisibilityAutoStateChangeEvent.h>


DEFINE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEvent, Event);


ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ContentVisibilityAutoStateChangeEvent") , em_Val_from(type));
        return ContentVisibilityAutoStateChangeEvent_from_val(&vv);
      }


ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ContentVisibilityAutoStateChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ContentVisibilityAutoStateChangeEvent_from_val(&vv);
      }


bool ContentVisibilityAutoStateChangeEvent_skipped(const ContentVisibilityAutoStateChangeEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("skipped")));
}

