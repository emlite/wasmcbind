#include <webcbind/NavigationReloadOptions.h>

DEFINE_EMLITE_TYPE(NavigationReloadOptions, NavigationOptions);


jb_Any NavigationReloadOptions_state(const NavigationReloadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(NavigationOptions_as_val(self->inner), em_Val_from("state")));
}


void NavigationReloadOptions_set_state(NavigationReloadOptions* self, jb_Any * value) {
    em_Val_set(NavigationOptions_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


NavigationReloadOptions NavigationReloadOptions_new() {
    em_Val obj = em_Val_object();
    return NavigationReloadOptions_from_val(&obj);
}

