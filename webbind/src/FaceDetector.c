#include <webbind/FaceDetector.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DetectedFace, em_Val);


DOMRectReadOnly DetectedFace_boundingBox(const DetectedFace *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "boundingBox"));
}


void DetectedFace_set_boundingBox(DetectedFace* self, const DOMRectReadOnly* value) {
    em_Val_set(em_Val_as_val(self->inner), "boundingBox", value);
}


jb_Sequence DetectedFace_landmarks(const DetectedFace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "landmarks"));
}


void DetectedFace_set_landmarks(DetectedFace* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "landmarks", value);
}

DEFINE_EMLITE_TYPE(FaceDetector, em_Val);


FaceDetector FaceDetector_new() : em_Val(em_Val_global("FaceDetector").new_()) {
        return FaceDetector(em_Val_new(em_Val_global("FaceDetector", ));
      }


FaceDetector FaceDetector_new(const jb_Any* faceDetectorOptions) : em_Val(em_Val_global("FaceDetector").new_(em_Val_from(faceDetectorOptions))) {
        return FaceDetector(em_Val_new(em_Val_global("FaceDetector", em_Val_from(faceDetectorOptions)));
      }


jb_Promise FaceDetector_detect(FaceDetector* self , const jb_Any* image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

