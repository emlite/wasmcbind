#include <webbind/HIDInputReportEvent.h>
#include <webbind/HIDDevice.h>


DEFINE_EMLITE_TYPE(HIDInputReportEvent, Event);


HIDInputReportEvent HIDInputReportEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("HIDInputReportEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return HIDInputReportEvent_from_val(&vv);
      }


HIDDevice HIDInputReportEvent_device(const HIDInputReportEvent *self) {
    return em_Val_as(HIDDevice, em_Val_get(Event_as_val(self->inner), em_Val_from("device")));
}


unsigned char HIDInputReportEvent_reportId(const HIDInputReportEvent *self) {
    return em_Val_as(unsigned char, em_Val_get(Event_as_val(self->inner), em_Val_from("reportId")));
}


jb_DataView HIDInputReportEvent_data(const HIDInputReportEvent *self) {
    return em_Val_as(jb_DataView, em_Val_get(Event_as_val(self->inner), em_Val_from("data")));
}

