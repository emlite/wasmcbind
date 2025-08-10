#include <webbind/Landmark.h>

DEFINE_EMLITE_TYPE(Landmark, em_Val);


jb_Array Landmark_locations(const Landmark *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locations")));
}


void Landmark_set_locations(Landmark* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("locations"), em_Val_from(value));
}


LandmarkType Landmark_type(const Landmark *self) {
    return em_Val_as(LandmarkType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void Landmark_set_type(Landmark* self, LandmarkType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


Landmark Landmark_new() {
    em_Val obj = em_Val_object();
    return Landmark_from_val(&obj);
}

