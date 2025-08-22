#include <webcbind/PressureRecord.h>

DEFINE_EMLITE_TYPE(PressureRecord, em_Val);


PressureSource PressureRecord_source(const PressureRecord *self) {
    return em_Val_as(PressureSource, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


PressureState PressureRecord_state(const PressureRecord *self) {
    return em_Val_as(PressureState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("state")));
}


jb_Any PressureRecord_time(const PressureRecord *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("time")));
}


jb_Object PressureRecord_toJSON(PressureRecord* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

