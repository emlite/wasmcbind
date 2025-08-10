#include <webbind/PageTransitionEventInit.h>

DEFINE_EMLITE_TYPE(PageTransitionEventInit, EventInit);


bool PageTransitionEventInit_persisted(const PageTransitionEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("persisted")));
}


void PageTransitionEventInit_set_persisted(PageTransitionEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("persisted"), em_Val_from(value));
}


PageTransitionEventInit PageTransitionEventInit_new() {
    em_Val obj = em_Val_object();
    return PageTransitionEventInit_from_val(&obj);
}

