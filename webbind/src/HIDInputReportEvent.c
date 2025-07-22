#include <webbind/HIDInputReportEvent.h>
#include <webbind/HIDDevice.h>


DEFINE_EMLITE_TYPE(HIDInputReportEvent, Event);


HIDInputReportEvent HIDInputReportEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("HIDInputReportEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return HIDInputReportEvent(em_Val_new(em_Val_global("HIDInputReportEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


HIDDevice HIDInputReportEvent_device(const HIDInputReportEvent *self) {
    return em_Val_as(HIDDevice, em_Val_get(Event_as_val(self->inner), "device"));
}


unsigned char HIDInputReportEvent_reportId(const HIDInputReportEvent *self) {
    return em_Val_as(unsigned char, em_Val_get(Event_as_val(self->inner), "reportId"));
}


jb_DataView HIDInputReportEvent_data(const HIDInputReportEvent *self) {
    return em_Val_as(jb_DataView, em_Val_get(Event_as_val(self->inner), "data"));
}

