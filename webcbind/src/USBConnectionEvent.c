#include <webcbind/USBConnectionEvent.h>

#include <webcbind/USBConnectionEventInit.h>
#include <webcbind/USBDevice.h>

DEFINE_EMLITE_TYPE(USBConnectionEvent, Event);


USBConnectionEvent USBConnectionEvent_new(jb_String * type, USBConnectionEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("USBConnectionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return USBConnectionEvent_from_val(&vv);
      }


USBDevice USBConnectionEvent_device(const USBConnectionEvent *self) {
    return em_Val_as(USBDevice, em_Val_get(Event_as_val(self->inner), em_Val_from("device")));
}

