#include <webcbind/SensorErrorEvent.h>

#include <webcbind/SensorErrorEventInit.h>
#include <webcbind/DOMException.h>

DEFINE_EMLITE_TYPE(SensorErrorEvent, Event);


SensorErrorEvent SensorErrorEvent_new(jb_String * type, SensorErrorEventInit * errorEventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SensorErrorEvent") , em_Val_from(type), em_Val_from(errorEventInitDict));
        return SensorErrorEvent_from_val(&vv);
      }


DOMException SensorErrorEvent_error(const SensorErrorEvent *self) {
    return em_Val_as(DOMException, em_Val_get(Event_as_val(self->inner), em_Val_from("error")));
}

