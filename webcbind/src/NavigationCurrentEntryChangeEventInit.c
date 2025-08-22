#include <webcbind/NavigationCurrentEntryChangeEventInit.h>

#include <webcbind/NavigationHistoryEntry.h>

DEFINE_EMLITE_TYPE(NavigationCurrentEntryChangeEventInit, EventInit);


NavigationType NavigationCurrentEntryChangeEventInit_navigationType(const NavigationCurrentEntryChangeEventInit *self) {
    return em_Val_as(NavigationType, em_Val_get(EventInit_as_val(self->inner), em_Val_from("navigationType")));
}


void NavigationCurrentEntryChangeEventInit_set_navigationType(NavigationCurrentEntryChangeEventInit* self, NavigationType * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("navigationType"), em_Val_from(value));
}


NavigationHistoryEntry NavigationCurrentEntryChangeEventInit_from(const NavigationCurrentEntryChangeEventInit *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(EventInit_as_val(self->inner), em_Val_from("from")));
}


void NavigationCurrentEntryChangeEventInit_set_from(NavigationCurrentEntryChangeEventInit* self, NavigationHistoryEntry * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("from"), em_Val_from(value));
}


NavigationCurrentEntryChangeEventInit NavigationCurrentEntryChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return NavigationCurrentEntryChangeEventInit_from_val(&obj);
}

