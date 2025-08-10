#include <webbind/HIDReportInfo.h>

DEFINE_EMLITE_TYPE(HIDReportInfo, em_Val);


unsigned char HIDReportInfo_reportId(const HIDReportInfo *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reportId")));
}


void HIDReportInfo_set_reportId(HIDReportInfo* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reportId"), em_Val_from(value));
}


jb_Array HIDReportInfo_items(const HIDReportInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("items")));
}


void HIDReportInfo_set_items(HIDReportInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("items"), em_Val_from(value));
}


HIDReportInfo HIDReportInfo_new() {
    em_Val obj = em_Val_object();
    return HIDReportInfo_from_val(&obj);
}

