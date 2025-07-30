#include <webbind/HIDDevice.h>


DEFINE_EMLITE_TYPE(HIDCollectionInfo, em_Val);


unsigned short HIDCollectionInfo_usagePage(const HIDCollectionInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usagePage")));
}


void HIDCollectionInfo_set_usagePage(HIDCollectionInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usagePage"), em_Val_from(value));
}


unsigned short HIDCollectionInfo_usage(const HIDCollectionInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void HIDCollectionInfo_set_usage(HIDCollectionInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


unsigned char HIDCollectionInfo_type(const HIDCollectionInfo *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void HIDCollectionInfo_set_type(HIDCollectionInfo* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Array HIDCollectionInfo_children(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("children")));
}


void HIDCollectionInfo_set_children(HIDCollectionInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("children"), em_Val_from(value));
}


jb_Array HIDCollectionInfo_inputReports(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputReports")));
}


void HIDCollectionInfo_set_inputReports(HIDCollectionInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputReports"), em_Val_from(value));
}


jb_Array HIDCollectionInfo_outputReports(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputReports")));
}


void HIDCollectionInfo_set_outputReports(HIDCollectionInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputReports"), em_Val_from(value));
}


jb_Array HIDCollectionInfo_featureReports(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("featureReports")));
}


void HIDCollectionInfo_set_featureReports(HIDCollectionInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("featureReports"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HIDDevice, EventTarget);


jb_Any HIDDevice_oninputreport(const HIDDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oninputreport")));
}


void HIDDevice_set_oninputreport(HIDDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oninputreport"), em_Val_from(value));
}


bool HIDDevice_opened(const HIDDevice *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("opened")));
}


unsigned short HIDDevice_vendorId(const HIDDevice *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("vendorId")));
}


unsigned short HIDDevice_productId(const HIDDevice *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("productId")));
}


jb_String HIDDevice_productName(const HIDDevice *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("productName")));
}


jb_Array HIDDevice_collections(const HIDDevice *self) {
    return em_Val_as(jb_Array, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("collections")));
}


jb_Promise HIDDevice_open(HIDDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "open"));
}


jb_Promise HIDDevice_close(HIDDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise HIDDevice_forget(HIDDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "forget"));
}


jb_Promise HIDDevice_sendReport(HIDDevice* self , unsigned char reportId, jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendReport", em_Val_from(reportId), em_Val_from(data)));
}


jb_Promise HIDDevice_sendFeatureReport(HIDDevice* self , unsigned char reportId, jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendFeatureReport", em_Val_from(reportId), em_Val_from(data)));
}


jb_Promise HIDDevice_receiveFeatureReport(HIDDevice* self , unsigned char reportId) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "receiveFeatureReport", em_Val_from(reportId)));
}

