#include <webbind/NavigationCurrentEntryChangeEvent.h>
#include <webbind/NavigationHistoryEntry.h>


DEFINE_EMLITE_TYPE(NavigationCurrentEntryChangeEvent, Event);


NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("NavigationCurrentEntryChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return NavigationCurrentEntryChangeEvent(em_Val_new(em_Val_global("NavigationCurrentEntryChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


NavigationType NavigationCurrentEntryChangeEvent_navigationType(const NavigationCurrentEntryChangeEvent *self) {
    return em_Val_as(NavigationType, em_Val_get(Event_as_val(self->inner), "navigationType"));
}


NavigationHistoryEntry NavigationCurrentEntryChangeEvent_from(const NavigationCurrentEntryChangeEvent *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(Event_as_val(self->inner), "from"));
}

