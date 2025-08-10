#include <webbind/FaceDetectorOptions.h>

DEFINE_EMLITE_TYPE(FaceDetectorOptions, em_Val);


unsigned short FaceDetectorOptions_maxDetectedFaces(const FaceDetectorOptions *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxDetectedFaces")));
}


void FaceDetectorOptions_set_maxDetectedFaces(FaceDetectorOptions* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxDetectedFaces"), em_Val_from(value));
}


bool FaceDetectorOptions_fastMode(const FaceDetectorOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fastMode")));
}


void FaceDetectorOptions_set_fastMode(FaceDetectorOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fastMode"), em_Val_from(value));
}


FaceDetectorOptions FaceDetectorOptions_new() {
    em_Val obj = em_Val_object();
    return FaceDetectorOptions_from_val(&obj);
}

