#include <webcbind/NavigationNavigateOptions.h>

DEFINE_EMLITE_TYPE(NavigationNavigateOptions, NavigationOptions);


jb_Any NavigationNavigateOptions_state(const NavigationNavigateOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(NavigationOptions_as_val(self->inner), em_Val_from("state")));
}


void NavigationNavigateOptions_set_state(NavigationNavigateOptions* self, jb_Any * value) {
    em_Val_set(NavigationOptions_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


NavigationHistoryBehavior NavigationNavigateOptions_history(const NavigationNavigateOptions *self) {
    return em_Val_as(NavigationHistoryBehavior, em_Val_get(NavigationOptions_as_val(self->inner), em_Val_from("history")));
}


void NavigationNavigateOptions_set_history(NavigationNavigateOptions* self, NavigationHistoryBehavior * value) {
    em_Val_set(NavigationOptions_as_val(self->inner), em_Val_from("history"), em_Val_from(value));
}


NavigationNavigateOptions NavigationNavigateOptions_new() {
    em_Val obj = em_Val_object();
    return NavigationNavigateOptions_from_val(&obj);
}

