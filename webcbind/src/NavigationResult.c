#include <webcbind/NavigationResult.h>

#include <webcbind/NavigationHistoryEntry.h>

DEFINE_EMLITE_TYPE(NavigationResult, em_Val);


jb_Promise NavigationResult_committed(const NavigationResult *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("committed")));
}


void NavigationResult_set_committed(NavigationResult* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("committed"), em_Val_from(value));
}


jb_Promise NavigationResult_finished(const NavigationResult *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("finished")));
}


void NavigationResult_set_finished(NavigationResult* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("finished"), em_Val_from(value));
}


NavigationResult NavigationResult_new() {
    em_Val obj = em_Val_object();
    return NavigationResult_from_val(&obj);
}

