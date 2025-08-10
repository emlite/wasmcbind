#include <webbind/NavigationEventInit.h>

#include <webbind/EventTarget.h>

DEFINE_EMLITE_TYPE(NavigationEventInit, UIEventInit);


SpatialNavigationDirection NavigationEventInit_dir(const NavigationEventInit *self) {
    return em_Val_as(SpatialNavigationDirection, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("dir")));
}


void NavigationEventInit_set_dir(NavigationEventInit* self, SpatialNavigationDirection * value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("dir"), em_Val_from(value));
}


EventTarget NavigationEventInit_relatedTarget(const NavigationEventInit *self) {
    return em_Val_as(EventTarget, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("relatedTarget")));
}


void NavigationEventInit_set_relatedTarget(NavigationEventInit* self, EventTarget * value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("relatedTarget"), em_Val_from(value));
}


NavigationEventInit NavigationEventInit_new() {
    em_Val obj = em_Val_object();
    return NavigationEventInit_from_val(&obj);
}

