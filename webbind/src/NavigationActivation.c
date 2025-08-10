#include <webbind/NavigationActivation.h>

#include <webbind/NavigationHistoryEntry.h>

DEFINE_EMLITE_TYPE(NavigationActivation, em_Val);


NavigationHistoryEntry NavigationActivation_from(const NavigationActivation *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("from")));
}


NavigationHistoryEntry NavigationActivation_entry(const NavigationActivation *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entry")));
}


NavigationType NavigationActivation_navigationType(const NavigationActivation *self) {
    return em_Val_as(NavigationType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("navigationType")));
}

