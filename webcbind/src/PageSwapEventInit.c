#include <webcbind/PageSwapEventInit.h>

#include <webcbind/NavigationActivation.h>
#include <webcbind/ViewTransition.h>

DEFINE_EMLITE_TYPE(PageSwapEventInit, EventInit);


NavigationActivation PageSwapEventInit_activation(const PageSwapEventInit *self) {
    return em_Val_as(NavigationActivation, em_Val_get(EventInit_as_val(self->inner), em_Val_from("activation")));
}


void PageSwapEventInit_set_activation(PageSwapEventInit* self, NavigationActivation * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("activation"), em_Val_from(value));
}


ViewTransition PageSwapEventInit_viewTransition(const PageSwapEventInit *self) {
    return em_Val_as(ViewTransition, em_Val_get(EventInit_as_val(self->inner), em_Val_from("viewTransition")));
}


void PageSwapEventInit_set_viewTransition(PageSwapEventInit* self, ViewTransition * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("viewTransition"), em_Val_from(value));
}


PageSwapEventInit PageSwapEventInit_new() {
    em_Val obj = em_Val_object();
    return PageSwapEventInit_from_val(&obj);
}

