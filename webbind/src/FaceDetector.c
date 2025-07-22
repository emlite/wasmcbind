#include <webbind/FaceDetector.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DetectedFace, em_Val);


DOMRectReadOnly DetectedFace_boundingBox(const DetectedFace *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBox")));
}


void DetectedFace_set_boundingBox(DetectedFace* self, DOMRectReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("boundingBox"), em_Val_from(value));
}


jb_Sequence DetectedFace_landmarks(const DetectedFace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("landmarks")));
}


void DetectedFace_set_landmarks(DetectedFace* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("landmarks"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(FaceDetector, em_Val);


FaceDetector FaceDetector_new0() {
        em_Val vv = em_Val_new(em_Val_global("FaceDetector") );
        return FaceDetector_from_val(&vv);
      }


FaceDetector FaceDetector_new1(jb_Any * faceDetectorOptions) {
        em_Val vv = em_Val_new(em_Val_global("FaceDetector") , em_Val_from(faceDetectorOptions));
        return FaceDetector_from_val(&vv);
      }


jb_Promise FaceDetector_detect(FaceDetector* self , jb_Any * image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

