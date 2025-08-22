#include <webcbind/HIDInputReportEventInit.h>

#include <webcbind/HIDDevice.h>

DEFINE_EMLITE_TYPE(HIDInputReportEventInit, EventInit);


HIDDevice HIDInputReportEventInit_device(const HIDInputReportEventInit *self) {
    return em_Val_as(HIDDevice, em_Val_get(EventInit_as_val(self->inner), em_Val_from("device")));
}


void HIDInputReportEventInit_set_device(HIDInputReportEventInit* self, HIDDevice * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("device"), em_Val_from(value));
}


unsigned char HIDInputReportEventInit_reportId(const HIDInputReportEventInit *self) {
    return em_Val_as(unsigned char, em_Val_get(EventInit_as_val(self->inner), em_Val_from("reportId")));
}


void HIDInputReportEventInit_set_reportId(HIDInputReportEventInit* self, unsigned char value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("reportId"), em_Val_from(value));
}


jb_DataView HIDInputReportEventInit_data(const HIDInputReportEventInit *self) {
    return em_Val_as(jb_DataView, em_Val_get(EventInit_as_val(self->inner), em_Val_from("data")));
}


void HIDInputReportEventInit_set_data(HIDInputReportEventInit* self, jb_DataView * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


HIDInputReportEventInit HIDInputReportEventInit_new() {
    em_Val obj = em_Val_object();
    return HIDInputReportEventInit_from_val(&obj);
}

