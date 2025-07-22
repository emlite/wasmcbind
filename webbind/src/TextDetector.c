#include <webbind/TextDetector.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DetectedText, em_Val);


DOMRectReadOnly DetectedText_boundingBox(const DetectedText *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "boundingBox"));
}


void DetectedText_set_boundingBox(DetectedText* self, const DOMRectReadOnly* value) {
    em_Val_set(em_Val_as_val(self->inner), "boundingBox", value);
}


jb_DOMString DetectedText_rawValue(const DetectedText *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rawValue"));
}


void DetectedText_set_rawValue(DetectedText* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "rawValue", value);
}


jb_Sequence DetectedText_cornerPoints(const DetectedText *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "cornerPoints"));
}


void DetectedText_set_cornerPoints(DetectedText* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "cornerPoints", value);
}

DEFINE_EMLITE_TYPE(TextDetector, em_Val);


TextDetector TextDetector_new() : em_Val(em_Val_global("TextDetector").new_()) {
        return TextDetector(em_Val_new(em_Val_global("TextDetector", ));
      }


jb_Promise TextDetector_detect(TextDetector* self , const jb_Any* image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

