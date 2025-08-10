#include <webbind/MockCaptureDeviceConfiguration.h>

DEFINE_EMLITE_TYPE(MockCaptureDeviceConfiguration, em_Val);


jb_String MockCaptureDeviceConfiguration_label(const MockCaptureDeviceConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void MockCaptureDeviceConfiguration_set_label(MockCaptureDeviceConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_String MockCaptureDeviceConfiguration_deviceId(const MockCaptureDeviceConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deviceId")));
}


void MockCaptureDeviceConfiguration_set_deviceId(MockCaptureDeviceConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("deviceId"), em_Val_from(value));
}


jb_String MockCaptureDeviceConfiguration_groupId(const MockCaptureDeviceConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("groupId")));
}


void MockCaptureDeviceConfiguration_set_groupId(MockCaptureDeviceConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("groupId"), em_Val_from(value));
}


MockCaptureDeviceConfiguration MockCaptureDeviceConfiguration_new() {
    em_Val obj = em_Val_object();
    return MockCaptureDeviceConfiguration_from_val(&obj);
}

