#include <webbind/SFrameTransformOptions.h>

DEFINE_EMLITE_TYPE(SFrameTransformOptions, em_Val);


SFrameTransformRole SFrameTransformOptions_role(const SFrameTransformOptions *self) {
    return em_Val_as(SFrameTransformRole, em_Val_get(em_Val_as_val(self->inner), em_Val_from("role")));
}


void SFrameTransformOptions_set_role(SFrameTransformOptions* self, SFrameTransformRole * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("role"), em_Val_from(value));
}


SFrameCipherSuite SFrameTransformOptions_cipherSuite(const SFrameTransformOptions *self) {
    return em_Val_as(SFrameCipherSuite, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cipherSuite")));
}


void SFrameTransformOptions_set_cipherSuite(SFrameTransformOptions* self, SFrameCipherSuite * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cipherSuite"), em_Val_from(value));
}


SFrameTransformOptions SFrameTransformOptions_new() {
    em_Val obj = em_Val_object();
    return SFrameTransformOptions_from_val(&obj);
}

