#include <webbind/MockMicrophoneConfiguration.h>

DEFINE_EMLITE_TYPE(MockMicrophoneConfiguration, MockCaptureDeviceConfiguration);


unsigned long MockMicrophoneConfiguration_defaultSampleRate(const MockMicrophoneConfiguration *self) {
    return em_Val_as(unsigned long, em_Val_get(MockCaptureDeviceConfiguration_as_val(self->inner), em_Val_from("defaultSampleRate")));
}


void MockMicrophoneConfiguration_set_defaultSampleRate(MockMicrophoneConfiguration* self, unsigned long value) {
    em_Val_set(MockCaptureDeviceConfiguration_as_val(self->inner), em_Val_from("defaultSampleRate"), em_Val_from(value));
}


MockMicrophoneConfiguration MockMicrophoneConfiguration_new() {
    em_Val obj = em_Val_object();
    return MockMicrophoneConfiguration_from_val(&obj);
}

