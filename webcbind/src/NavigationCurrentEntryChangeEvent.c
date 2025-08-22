#include <webcbind/NavigationCurrentEntryChangeEvent.h>

#include <webcbind/NavigationCurrentEntryChangeEventInit.h>
#include <webcbind/NavigationHistoryEntry.h>

DEFINE_EMLITE_TYPE(NavigationCurrentEntryChangeEvent, Event);


NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent_new(jb_String * type, NavigationCurrentEntryChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("NavigationCurrentEntryChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return NavigationCurrentEntryChangeEvent_from_val(&vv);
      }


NavigationType NavigationCurrentEntryChangeEvent_navigationType(const NavigationCurrentEntryChangeEvent *self) {
    return em_Val_as(NavigationType, em_Val_get(Event_as_val(self->inner), em_Val_from("navigationType")));
}


NavigationHistoryEntry NavigationCurrentEntryChangeEvent_from(const NavigationCurrentEntryChangeEvent *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(Event_as_val(self->inner), em_Val_from("from")));
}

