#include <webcbind/CaretPositionFromPointOptions.h>

#include <webcbind/ShadowRoot.h>

DEFINE_EMLITE_TYPE(CaretPositionFromPointOptions, em_Val);


jb_Array CaretPositionFromPointOptions_shadowRoots(const CaretPositionFromPointOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void CaretPositionFromPointOptions_set_shadowRoots(CaretPositionFromPointOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}


CaretPositionFromPointOptions CaretPositionFromPointOptions_new() {
    em_Val obj = em_Val_object();
    return CaretPositionFromPointOptions_from_val(&obj);
}

