#include <webbind/DetectedBarcode.h>

#include <webbind/DOMRectReadOnly.h>

DEFINE_EMLITE_TYPE(DetectedBarcode, em_Val);


DOMRectReadOnly DetectedBarcode_boundingBox(const DetectedBarcode *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBox")));
}


void DetectedBarcode_set_boundingBox(DetectedBarcode* self, DOMRectReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("boundingBox"), em_Val_from(value));
}


jb_String DetectedBarcode_rawValue(const DetectedBarcode *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rawValue")));
}


void DetectedBarcode_set_rawValue(DetectedBarcode* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rawValue"), em_Val_from(value));
}


BarcodeFormat DetectedBarcode_format(const DetectedBarcode *self) {
    return em_Val_as(BarcodeFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void DetectedBarcode_set_format(DetectedBarcode* self, BarcodeFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


jb_Array DetectedBarcode_cornerPoints(const DetectedBarcode *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cornerPoints")));
}


void DetectedBarcode_set_cornerPoints(DetectedBarcode* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cornerPoints"), em_Val_from(value));
}


DetectedBarcode DetectedBarcode_new() {
    em_Val obj = em_Val_object();
    return DetectedBarcode_from_val(&obj);
}

