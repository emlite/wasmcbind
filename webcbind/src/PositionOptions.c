#include <webcbind/PositionOptions.h>

DEFINE_EMLITE_TYPE(PositionOptions, em_Val);


bool PositionOptions_enableHighAccuracy(const PositionOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enableHighAccuracy")));
}


void PositionOptions_set_enableHighAccuracy(PositionOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enableHighAccuracy"), em_Val_from(value));
}


unsigned long PositionOptions_timeout(const PositionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PositionOptions_set_timeout(PositionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


unsigned long PositionOptions_maximumAge(const PositionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maximumAge")));
}


void PositionOptions_set_maximumAge(PositionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maximumAge"), em_Val_from(value));
}


PositionOptions PositionOptions_new() {
    em_Val obj = em_Val_object();
    return PositionOptions_from_val(&obj);
}

