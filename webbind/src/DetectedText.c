#include <webbind/DetectedText.h>

#include <webbind/DOMRectReadOnly.h>

DEFINE_EMLITE_TYPE(DetectedText, em_Val);


DOMRectReadOnly DetectedText_boundingBox(const DetectedText *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBox")));
}


void DetectedText_set_boundingBox(DetectedText* self, DOMRectReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("boundingBox"), em_Val_from(value));
}


jb_String DetectedText_rawValue(const DetectedText *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rawValue")));
}


void DetectedText_set_rawValue(DetectedText* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rawValue"), em_Val_from(value));
}


jb_Array DetectedText_cornerPoints(const DetectedText *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cornerPoints")));
}


void DetectedText_set_cornerPoints(DetectedText* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cornerPoints"), em_Val_from(value));
}


DetectedText DetectedText_new() {
    em_Val obj = em_Val_object();
    return DetectedText_from_val(&obj);
}

