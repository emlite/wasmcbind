#include <webbind/DeviceChangeEvent.h>
#include <webbind/MediaDeviceInfo.h>


DEFINE_EMLITE_TYPE(DeviceChangeEvent, Event);


DeviceChangeEvent DeviceChangeEvent_new(const jb_DOMString* type) : Event(em_Val_global("DeviceChangeEvent").new_(em_Val_from(type))) {
        return DeviceChangeEvent(em_Val_new(em_Val_global("DeviceChangeEvent", em_Val_from(type)));
      }


DeviceChangeEvent DeviceChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("DeviceChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return DeviceChangeEvent(em_Val_new(em_Val_global("DeviceChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_FrozenArray DeviceChangeEvent_devices(const DeviceChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "devices"));
}


jb_FrozenArray DeviceChangeEvent_userInsertedDevices(const DeviceChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "userInsertedDevices"));
}

