#include <webbind/StructuredSerializeOptions.h>

DEFINE_EMLITE_TYPE(StructuredSerializeOptions, em_Val);


jb_Array StructuredSerializeOptions_transfer(const StructuredSerializeOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


void StructuredSerializeOptions_set_transfer(StructuredSerializeOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transfer"), em_Val_from(value));
}


StructuredSerializeOptions StructuredSerializeOptions_new() {
    em_Val obj = em_Val_object();
    return StructuredSerializeOptions_from_val(&obj);
}

