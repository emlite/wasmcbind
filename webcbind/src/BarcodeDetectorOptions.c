#include <webcbind/BarcodeDetectorOptions.h>

DEFINE_EMLITE_TYPE(BarcodeDetectorOptions, em_Val);


jb_Array BarcodeDetectorOptions_formats(const BarcodeDetectorOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("formats")));
}


void BarcodeDetectorOptions_set_formats(BarcodeDetectorOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("formats"), em_Val_from(value));
}


BarcodeDetectorOptions BarcodeDetectorOptions_new() {
    em_Val obj = em_Val_object();
    return BarcodeDetectorOptions_from_val(&obj);
}

