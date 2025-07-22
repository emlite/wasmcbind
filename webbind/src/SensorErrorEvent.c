#include <webbind/SensorErrorEvent.h>
#include <webbind/DOMException.h>


DEFINE_EMLITE_TYPE(SensorErrorEvent, Event);


SensorErrorEvent SensorErrorEvent_new(const jb_DOMString* type, const jb_Any* errorEventInitDict) : Event(em_Val_global("SensorErrorEvent").new_(em_Val_from(type), em_Val_from(errorEventInitDict))) {
        return SensorErrorEvent(em_Val_new(em_Val_global("SensorErrorEvent", em_Val_from(type), em_Val_from(errorEventInitDict)));
      }


DOMException SensorErrorEvent_error(const SensorErrorEvent *self) {
    return em_Val_as(DOMException, em_Val_get(Event_as_val(self->inner), "error"));
}

