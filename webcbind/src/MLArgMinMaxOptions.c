#include <webcbind/MLArgMinMaxOptions.h>

DEFINE_EMLITE_TYPE(MLArgMinMaxOptions, MLOperatorOptions);


bool MLArgMinMaxOptions_keepDimensions(const MLArgMinMaxOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("keepDimensions")));
}


void MLArgMinMaxOptions_set_keepDimensions(MLArgMinMaxOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("keepDimensions"), em_Val_from(value));
}


MLOperandDataType MLArgMinMaxOptions_outputDataType(const MLArgMinMaxOptions *self) {
    return em_Val_as(MLOperandDataType, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("outputDataType")));
}


void MLArgMinMaxOptions_set_outputDataType(MLArgMinMaxOptions* self, MLOperandDataType * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("outputDataType"), em_Val_from(value));
}


MLArgMinMaxOptions MLArgMinMaxOptions_new() {
    em_Val obj = em_Val_object();
    return MLArgMinMaxOptions_from_val(&obj);
}

