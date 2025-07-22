#include <webbind/HIDDevice.h>


DEFINE_EMLITE_TYPE(HIDCollectionInfo, em_Val);


unsigned short HIDCollectionInfo_usagePage(const HIDCollectionInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "usagePage"));
}


void HIDCollectionInfo_set_usagePage(HIDCollectionInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "usagePage", value);
}


unsigned short HIDCollectionInfo_usage(const HIDCollectionInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "usage"));
}


void HIDCollectionInfo_set_usage(HIDCollectionInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "usage", value);
}


unsigned char HIDCollectionInfo_type(const HIDCollectionInfo *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void HIDCollectionInfo_set_type(HIDCollectionInfo* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


jb_Sequence HIDCollectionInfo_children(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "children"));
}


void HIDCollectionInfo_set_children(HIDCollectionInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "children", value);
}


jb_Sequence HIDCollectionInfo_inputReports(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "inputReports"));
}


void HIDCollectionInfo_set_inputReports(HIDCollectionInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "inputReports", value);
}


jb_Sequence HIDCollectionInfo_outputReports(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "outputReports"));
}


void HIDCollectionInfo_set_outputReports(HIDCollectionInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputReports", value);
}


jb_Sequence HIDCollectionInfo_featureReports(const HIDCollectionInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "featureReports"));
}


void HIDCollectionInfo_set_featureReports(HIDCollectionInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "featureReports", value);
}

DEFINE_EMLITE_TYPE(HIDDevice, EventTarget);


jb_Any HIDDevice_oninputreport(const HIDDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oninputreport"));
}


void HIDDevice_set_oninputreport(HIDDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oninputreport", value);
}


bool HIDDevice_opened(const HIDDevice *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "opened"));
}


unsigned short HIDDevice_vendorId(const HIDDevice *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "vendorId"));
}


unsigned short HIDDevice_productId(const HIDDevice *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "productId"));
}


jb_DOMString HIDDevice_productName(const HIDDevice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "productName"));
}


jb_FrozenArray HIDDevice_collections(const HIDDevice *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), "collections"));
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


jb_Promise HIDDevice_sendReport(HIDDevice* self , unsigned char reportId, const jb_Any* data) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendReport", em_Val_from(reportId), em_Val_from(data)));
}


jb_Promise HIDDevice_sendFeatureReport(HIDDevice* self , unsigned char reportId, const jb_Any* data) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendFeatureReport", em_Val_from(reportId), em_Val_from(data)));
}


jb_Promise HIDDevice_receiveFeatureReport(HIDDevice* self , unsigned char reportId) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "receiveFeatureReport", em_Val_from(reportId)));
}

