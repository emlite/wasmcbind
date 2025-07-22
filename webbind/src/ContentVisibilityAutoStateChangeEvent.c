#include <webbind/ContentVisibilityAutoStateChangeEvent.h>


DEFINE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEvent, Event);


ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new(const jb_DOMString* type) : Event(em_Val_global("ContentVisibilityAutoStateChangeEvent").new_(em_Val_from(type))) {
        return ContentVisibilityAutoStateChangeEvent(em_Val_new(em_Val_global("ContentVisibilityAutoStateChangeEvent", em_Val_from(type)));
      }


ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("ContentVisibilityAutoStateChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ContentVisibilityAutoStateChangeEvent(em_Val_new(em_Val_global("ContentVisibilityAutoStateChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


bool ContentVisibilityAutoStateChangeEvent_skipped(const ContentVisibilityAutoStateChangeEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "skipped"));
}

