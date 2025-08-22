#include <webcbind/PortalActivateEventInit.h>

DEFINE_EMLITE_TYPE(PortalActivateEventInit, EventInit);


jb_Any PortalActivateEventInit_data(const PortalActivateEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("data")));
}


void PortalActivateEventInit_set_data(PortalActivateEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


PortalActivateEventInit PortalActivateEventInit_new() {
    em_Val obj = em_Val_object();
    return PortalActivateEventInit_from_val(&obj);
}

