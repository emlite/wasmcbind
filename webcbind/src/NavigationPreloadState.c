#include <webcbind/NavigationPreloadState.h>

DEFINE_EMLITE_TYPE(NavigationPreloadState, em_Val);


bool NavigationPreloadState_enabled(const NavigationPreloadState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enabled")));
}


void NavigationPreloadState_set_enabled(NavigationPreloadState* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enabled"), em_Val_from(value));
}


jb_String NavigationPreloadState_headerValue(const NavigationPreloadState *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("headerValue")));
}


void NavigationPreloadState_set_headerValue(NavigationPreloadState* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("headerValue"), em_Val_from(value));
}


NavigationPreloadState NavigationPreloadState_new() {
    em_Val obj = em_Val_object();
    return NavigationPreloadState_from_val(&obj);
}

