#include <webcbind/NavigationOptions.h>

DEFINE_EMLITE_TYPE(NavigationOptions, em_Val);


jb_Any NavigationOptions_info(const NavigationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("info")));
}


void NavigationOptions_set_info(NavigationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("info"), em_Val_from(value));
}


NavigationOptions NavigationOptions_new() {
    em_Val obj = em_Val_object();
    return NavigationOptions_from_val(&obj);
}

