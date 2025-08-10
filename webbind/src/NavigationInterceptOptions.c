#include <webbind/NavigationInterceptOptions.h>

DEFINE_EMLITE_TYPE(NavigationInterceptOptions, em_Val);


jb_Function NavigationInterceptOptions_handler(const NavigationInterceptOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("handler")));
}


void NavigationInterceptOptions_set_handler(NavigationInterceptOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("handler"), em_Val_from(value));
}


NavigationFocusReset NavigationInterceptOptions_focusReset(const NavigationInterceptOptions *self) {
    return em_Val_as(NavigationFocusReset, em_Val_get(em_Val_as_val(self->inner), em_Val_from("focusReset")));
}


void NavigationInterceptOptions_set_focusReset(NavigationInterceptOptions* self, NavigationFocusReset * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("focusReset"), em_Val_from(value));
}


NavigationScrollBehavior NavigationInterceptOptions_scroll(const NavigationInterceptOptions *self) {
    return em_Val_as(NavigationScrollBehavior, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scroll")));
}


void NavigationInterceptOptions_set_scroll(NavigationInterceptOptions* self, NavigationScrollBehavior * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scroll"), em_Val_from(value));
}


NavigationInterceptOptions NavigationInterceptOptions_new() {
    em_Val obj = em_Val_object();
    return NavigationInterceptOptions_from_val(&obj);
}

