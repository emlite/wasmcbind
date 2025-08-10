#include <webbind/HIDConnectionEventInit.h>

#include <webbind/HIDDevice.h>

DEFINE_EMLITE_TYPE(HIDConnectionEventInit, EventInit);


HIDDevice HIDConnectionEventInit_device(const HIDConnectionEventInit *self) {
    return em_Val_as(HIDDevice, em_Val_get(EventInit_as_val(self->inner), em_Val_from("device")));
}


void HIDConnectionEventInit_set_device(HIDConnectionEventInit* self, HIDDevice * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("device"), em_Val_from(value));
}


HIDConnectionEventInit HIDConnectionEventInit_new() {
    em_Val obj = em_Val_object();
    return HIDConnectionEventInit_from_val(&obj);
}

