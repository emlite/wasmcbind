#include <webbind/TextDetector.h>

#include <webbind/DetectedText.h>

DEFINE_EMLITE_TYPE(TextDetector, em_Val);


TextDetector TextDetector_new() {
        em_Val vv = em_Val_new(em_Val_global("TextDetector") );
        return TextDetector_from_val(&vv);
      }


jb_Promise TextDetector_detect(TextDetector* self , jb_Any * image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

