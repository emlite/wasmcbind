#include <webbind/USBConnectionEvent.h>
#include <webbind/USBDevice.h>


DEFINE_EMLITE_TYPE(USBConnectionEvent, Event);


USBConnectionEvent USBConnectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("USBConnectionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return USBConnectionEvent(em_Val_new(em_Val_global("USBConnectionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


USBDevice USBConnectionEvent_device(const USBConnectionEvent *self) {
    return em_Val_as(USBDevice, em_Val_get(Event_as_val(self->inner), "device"));
}

