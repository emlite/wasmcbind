#include <webbind/NavigationUpdateCurrentEntryOptions.h>

DEFINE_EMLITE_TYPE(NavigationUpdateCurrentEntryOptions, em_Val);


jb_Any NavigationUpdateCurrentEntryOptions_state(const NavigationUpdateCurrentEntryOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("state")));
}


void NavigationUpdateCurrentEntryOptions_set_state(NavigationUpdateCurrentEntryOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions_new() {
    em_Val obj = em_Val_object();
    return NavigationUpdateCurrentEntryOptions_from_val(&obj);
}

