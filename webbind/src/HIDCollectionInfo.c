#include <webbind/HIDCollectionInfo.h>

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


HIDCollectionInfo HIDCollectionInfo_new() {
    em_Val obj = em_Val_object();
    return HIDCollectionInfo_from_val(&obj);
}

