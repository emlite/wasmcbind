#include <webbind/TextDetector.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DetectedText, em_Val);


DOMRectReadOnly DetectedText_boundingBox(const DetectedText *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBox")));
}


void DetectedText_set_boundingBox(DetectedText* self, DOMRectReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("boundingBox"), em_Val_from(value));
}


jb_DOMString DetectedText_rawValue(const DetectedText *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rawValue")));
}


void DetectedText_set_rawValue(DetectedText* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rawValue"), em_Val_from(value));
}


jb_Sequence DetectedText_cornerPoints(const DetectedText *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cornerPoints")));
}


void DetectedText_set_cornerPoints(DetectedText* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cornerPoints"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(TextDetector, em_Val);


TextDetector TextDetector_new() {
        em_Val vv = em_Val_new(em_Val_global("TextDetector") );
        return TextDetector_from_val(&vv);
      }


jb_Promise TextDetector_detect(TextDetector* self , jb_Any * image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

