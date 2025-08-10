#include <webbind/FaceDetector.h>

#include <webbind/FaceDetectorOptions.h>
#include <webbind/DetectedFace.h>

DEFINE_EMLITE_TYPE(FaceDetector, em_Val);


FaceDetector FaceDetector_new0() {
        em_Val vv = em_Val_new(em_Val_global("FaceDetector") );
        return FaceDetector_from_val(&vv);
      }


FaceDetector FaceDetector_new1(FaceDetectorOptions * faceDetectorOptions) {
        em_Val vv = em_Val_new(em_Val_global("FaceDetector") , em_Val_from(faceDetectorOptions));
        return FaceDetector_from_val(&vv);
      }


jb_Promise FaceDetector_detect(FaceDetector* self , jb_Any * image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

