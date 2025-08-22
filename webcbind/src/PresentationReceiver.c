#include <webcbind/PresentationReceiver.h>

#include <webcbind/PresentationConnectionList.h>

DEFINE_EMLITE_TYPE(PresentationReceiver, em_Val);


jb_Promise PresentationReceiver_connectionList(const PresentationReceiver *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("connectionList")));
}

