#include <webcbind/GlobalDescriptor.h>

DEFINE_EMLITE_TYPE(GlobalDescriptor, em_Val);


ValueType GlobalDescriptor_value(const GlobalDescriptor *self) {
    return em_Val_as(ValueType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void GlobalDescriptor_set_value(GlobalDescriptor* self, ValueType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


bool GlobalDescriptor_mutable_(const GlobalDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mutable")));
}


void GlobalDescriptor_set_mutable_(GlobalDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mutable"), em_Val_from(value));
}


GlobalDescriptor GlobalDescriptor_new() {
    em_Val obj = em_Val_object();
    return GlobalDescriptor_from_val(&obj);
}

