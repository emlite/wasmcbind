#include <webbind/BarcodeDetector.h>

#include <webbind/BarcodeDetectorOptions.h>
#include <webbind/DetectedBarcode.h>

DEFINE_EMLITE_TYPE(BarcodeDetector, em_Val);


BarcodeDetector BarcodeDetector_new0() {
        em_Val vv = em_Val_new(em_Val_global("BarcodeDetector") );
        return BarcodeDetector_from_val(&vv);
      }


BarcodeDetector BarcodeDetector_new1(BarcodeDetectorOptions * barcodeDetectorOptions) {
        em_Val vv = em_Val_new(em_Val_global("BarcodeDetector") , em_Val_from(barcodeDetectorOptions));
        return BarcodeDetector_from_val(&vv);
      }


jb_Promise BarcodeDetector_getSupportedFormats(BarcodeDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("barcodedetector"), "getSupportedFormats"));
}


jb_Promise BarcodeDetector_detect(BarcodeDetector* self , jb_Any * image) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(image)));
}

