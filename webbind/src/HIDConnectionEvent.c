#include <webbind/HIDConnectionEvent.h>

#include <webbind/HIDConnectionEventInit.h>
#include <webbind/HIDDevice.h>

DEFINE_EMLITE_TYPE(HIDConnectionEvent, Event);


HIDConnectionEvent HIDConnectionEvent_new(jb_String * type, HIDConnectionEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("HIDConnectionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return HIDConnectionEvent_from_val(&vv);
      }


HIDDevice HIDConnectionEvent_device(const HIDConnectionEvent *self) {
    return em_Val_as(HIDDevice, em_Val_get(Event_as_val(self->inner), em_Val_from("device")));
}

