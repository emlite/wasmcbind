#include <webbind/BarcodeDetector.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DetectedBarcode, em_Val);


DOMRectReadOnly DetectedBarcode_boundingBox(const DetectedBarcode *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "boundingBox"));
}


void DetectedBarcode_set_boundingBox(DetectedBarcode* self, const DOMRectReadOnly* value) {
    em_Val_set(em_Val_as_val(self->inner), "boundingBox", value);
}


jb_DOMString DetectedBarcode_rawValue(const DetectedBarcode *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rawValue"));
}


void DetectedBarcode_set_rawValue(DetectedBarcode* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "rawValue", value);
}


BarcodeFormat DetectedBarcode_format(const DetectedBarcode *self) {
    return em_Val_as(BarcodeFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void DetectedBarcode_set_format(DetectedBarcode* self, const BarcodeFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


jb_Sequence DetectedBarcode_cornerPoints(const DetectedBarcode *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "cornerPoints"));
}


void DetectedBarcode_set_cornerPoints(DetectedBarcode* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "cornerPoints", value);
}

DEFINE_EMLITE_TYPE(BarcodeDetector, em_Val);


BarcodeDetector BarcodeDetector_new() : em_Val(em_Val_global("BarcodeDetector").new_()) {
        return BarcodeDetector(em_Val_new(em_Val_global("BarcodeDetector", ));
      }


BarcodeDetector BarcodeDetector_new(const jb_Any* barcodeDetectorOptions) : em_Val(em_Val_global("BarcodeDetector").new_(em_Val_from(barcodeDetectorOptions))) {
        return BarcodeDetector(em_Val_new(em_Val_global("BarcodeDetector", em_Val_from(barcodeDetectorOptions)));
      }


jb_Promise BarcodeDetector_getSupportedFormats(BarcodeDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("barcodedetector"), "getSupportedFormats"));
}


jb_Promise BarcodeDetector_detect(BarcodeDetector* self , const jb_Any* image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

