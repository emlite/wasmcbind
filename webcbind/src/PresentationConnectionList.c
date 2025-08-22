#include <webcbind/PresentationConnectionList.h>

#include <webcbind/PresentationConnection.h>

DEFINE_EMLITE_TYPE(PresentationConnectionList, EventTarget);


jb_Array PresentationConnectionList_connections(const PresentationConnectionList *self) {
    return em_Val_as(jb_Array, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("connections")));
}


jb_Any PresentationConnectionList_onconnectionavailable(const PresentationConnectionList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnectionavailable")));
}


void PresentationConnectionList_set_onconnectionavailable(PresentationConnectionList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnectionavailable"), em_Val_from(value));
}

