#include <webbind/DetectedFace.h>

#include <webbind/DOMRectReadOnly.h>

DEFINE_EMLITE_TYPE(DetectedFace, em_Val);


DOMRectReadOnly DetectedFace_boundingBox(const DetectedFace *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBox")));
}


void DetectedFace_set_boundingBox(DetectedFace* self, DOMRectReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("boundingBox"), em_Val_from(value));
}


jb_Array DetectedFace_landmarks(const DetectedFace *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("landmarks")));
}


void DetectedFace_set_landmarks(DetectedFace* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("landmarks"), em_Val_from(value));
}


DetectedFace DetectedFace_new() {
    em_Val obj = em_Val_object();
    return DetectedFace_from_val(&obj);
}

