#include <webbind/MockCameraConfiguration.h>

DEFINE_EMLITE_TYPE(MockCameraConfiguration, MockCaptureDeviceConfiguration);


double MockCameraConfiguration_defaultFrameRate(const MockCameraConfiguration *self) {
    return em_Val_as(double, em_Val_get(MockCaptureDeviceConfiguration_as_val(self->inner), em_Val_from("defaultFrameRate")));
}


void MockCameraConfiguration_set_defaultFrameRate(MockCameraConfiguration* self, double value) {
    em_Val_set(MockCaptureDeviceConfiguration_as_val(self->inner), em_Val_from("defaultFrameRate"), em_Val_from(value));
}


jb_String MockCameraConfiguration_facingMode(const MockCameraConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(MockCaptureDeviceConfiguration_as_val(self->inner), em_Val_from("facingMode")));
}


void MockCameraConfiguration_set_facingMode(MockCameraConfiguration* self, jb_String * value) {
    em_Val_set(MockCaptureDeviceConfiguration_as_val(self->inner), em_Val_from("facingMode"), em_Val_from(value));
}


MockCameraConfiguration MockCameraConfiguration_new() {
    em_Val obj = em_Val_object();
    return MockCameraConfiguration_from_val(&obj);
}

