#include <webbind/HIDConnectionEvent.h>
#include <webbind/HIDDevice.h>


DEFINE_EMLITE_TYPE(HIDConnectionEvent, Event);


HIDConnectionEvent HIDConnectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("HIDConnectionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return HIDConnectionEvent(em_Val_new(em_Val_global("HIDConnectionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


HIDDevice HIDConnectionEvent_device(const HIDConnectionEvent *self) {
    return em_Val_as(HIDDevice, em_Val_get(Event_as_val(self->inner), "device"));
}

