#include <webbind/PeriodicSyncEvent.h>


DEFINE_EMLITE_TYPE(PeriodicSyncEvent, ExtendableEvent);


PeriodicSyncEvent PeriodicSyncEvent_new(const jb_DOMString* type, const jb_Any* init) : ExtendableEvent(em_Val_global("PeriodicSyncEvent").new_(em_Val_from(type), em_Val_from(init))) {
        return PeriodicSyncEvent(em_Val_new(em_Val_global("PeriodicSyncEvent", em_Val_from(type), em_Val_from(init)));
      }


jb_DOMString PeriodicSyncEvent_tag(const PeriodicSyncEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "tag"));
}

