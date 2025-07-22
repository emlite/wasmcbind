#include <webbind/BarcodeDetector.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DetectedBarcode, em_Val);


DOMRectReadOnly DetectedBarcode_boundingBox(const DetectedBarcode *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBox")));
}


void DetectedBarcode_set_boundingBox(DetectedBarcode* self, DOMRectReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("boundingBox"), em_Val_from(value));
}


jb_DOMString DetectedBarcode_rawValue(const DetectedBarcode *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rawValue")));
}


void DetectedBarcode_set_rawValue(DetectedBarcode* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rawValue"), em_Val_from(value));
}


BarcodeFormat DetectedBarcode_format(const DetectedBarcode *self) {
    return em_Val_as(BarcodeFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void DetectedBarcode_set_format(DetectedBarcode* self, BarcodeFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


jb_Sequence DetectedBarcode_cornerPoints(const DetectedBarcode *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cornerPoints")));
}


void DetectedBarcode_set_cornerPoints(DetectedBarcode* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cornerPoints"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(BarcodeDetector, em_Val);


BarcodeDetector BarcodeDetector_new0() {
        em_Val vv = em_Val_new(em_Val_global("BarcodeDetector") );
        return BarcodeDetector_from_val(&vv);
      }


BarcodeDetector BarcodeDetector_new1(jb_Any * barcodeDetectorOptions) {
        em_Val vv = em_Val_new(em_Val_global("BarcodeDetector") , em_Val_from(barcodeDetectorOptions));
        return BarcodeDetector_from_val(&vv);
      }


jb_Promise BarcodeDetector_getSupportedFormats(BarcodeDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("barcodedetector"), "getSupportedFormats"));
}


jb_Promise BarcodeDetector_detect(BarcodeDetector* self , jb_Any * image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

