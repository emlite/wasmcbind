#include <webbind/PresentationConnectionList.h>
#include <webbind/PresentationConnection.h>


DEFINE_EMLITE_TYPE(PresentationConnectionList, EventTarget);


jb_FrozenArray PresentationConnectionList_connections(const PresentationConnectionList *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), "connections"));
}


jb_Any PresentationConnectionList_onconnectionavailable(const PresentationConnectionList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnectionavailable"));
}


void PresentationConnectionList_set_onconnectionavailable(PresentationConnectionList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnectionavailable", value);
}

