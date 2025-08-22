#include <webcbind/NavigationTransition.h>

#include <webcbind/NavigationHistoryEntry.h>

DEFINE_EMLITE_TYPE(NavigationTransition, em_Val);


NavigationType NavigationTransition_navigationType(const NavigationTransition *self) {
    return em_Val_as(NavigationType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("navigationType")));
}


NavigationHistoryEntry NavigationTransition_from(const NavigationTransition *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("from")));
}


jb_Promise NavigationTransition_finished(const NavigationTransition *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("finished")));
}

