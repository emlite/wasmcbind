#include <webbind/SyncEvent.h>


DEFINE_EMLITE_TYPE(SyncEvent, ExtendableEvent);


SyncEvent SyncEvent_new(const jb_DOMString* type, const jb_Any* init) : ExtendableEvent(em_Val_global("SyncEvent").new_(em_Val_from(type), em_Val_from(init))) {
        return SyncEvent(em_Val_new(em_Val_global("SyncEvent", em_Val_from(type), em_Val_from(init)));
      }


jb_DOMString SyncEvent_tag(const SyncEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "tag"));
}


bool SyncEvent_lastChance(const SyncEvent *self) {
    return em_Val_as(bool, em_Val_get(ExtendableEvent_as_val(self->inner), "lastChance"));
}

