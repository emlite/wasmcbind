#include <webcbind/IIRFilterOptions.h>

DEFINE_EMLITE_TYPE(IIRFilterOptions, AudioNodeOptions);


jb_Array IIRFilterOptions_feedforward(const IIRFilterOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("feedforward")));
}


void IIRFilterOptions_set_feedforward(IIRFilterOptions* self, jb_Array * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("feedforward"), em_Val_from(value));
}


jb_Array IIRFilterOptions_feedback(const IIRFilterOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("feedback")));
}


void IIRFilterOptions_set_feedback(IIRFilterOptions* self, jb_Array * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("feedback"), em_Val_from(value));
}


IIRFilterOptions IIRFilterOptions_new() {
    em_Val obj = em_Val_object();
    return IIRFilterOptions_from_val(&obj);
}

