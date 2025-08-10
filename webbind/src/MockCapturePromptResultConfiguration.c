#include <webbind/MockCapturePromptResultConfiguration.h>

DEFINE_EMLITE_TYPE(MockCapturePromptResultConfiguration, em_Val);


MockCapturePromptResult MockCapturePromptResultConfiguration_getUserMedia(const MockCapturePromptResultConfiguration *self) {
    return em_Val_as(MockCapturePromptResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("getUserMedia")));
}


void MockCapturePromptResultConfiguration_set_getUserMedia(MockCapturePromptResultConfiguration* self, MockCapturePromptResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("getUserMedia"), em_Val_from(value));
}


MockCapturePromptResult MockCapturePromptResultConfiguration_getDisplayMedia(const MockCapturePromptResultConfiguration *self) {
    return em_Val_as(MockCapturePromptResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("getDisplayMedia")));
}


void MockCapturePromptResultConfiguration_set_getDisplayMedia(MockCapturePromptResultConfiguration* self, MockCapturePromptResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("getDisplayMedia"), em_Val_from(value));
}


MockCapturePromptResultConfiguration MockCapturePromptResultConfiguration_new() {
    em_Val obj = em_Val_object();
    return MockCapturePromptResultConfiguration_from_val(&obj);
}

