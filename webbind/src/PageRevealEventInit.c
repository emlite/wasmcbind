#include <webbind/PageRevealEventInit.h>

#include <webbind/ViewTransition.h>

DEFINE_EMLITE_TYPE(PageRevealEventInit, EventInit);


ViewTransition PageRevealEventInit_viewTransition(const PageRevealEventInit *self) {
    return em_Val_as(ViewTransition, em_Val_get(EventInit_as_val(self->inner), em_Val_from("viewTransition")));
}


void PageRevealEventInit_set_viewTransition(PageRevealEventInit* self, ViewTransition * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("viewTransition"), em_Val_from(value));
}


PageRevealEventInit PageRevealEventInit_new() {
    em_Val obj = em_Val_object();
    return PageRevealEventInit_from_val(&obj);
}

