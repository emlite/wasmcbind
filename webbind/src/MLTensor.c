#include <webbind/MLTensor.h>


DEFINE_EMLITE_TYPE(MLTensor, em_Val);


MLOperandDataType MLTensor_dataType(const MLTensor *self) {
    return em_Val_as(MLOperandDataType, em_Val_get(em_Val_as_val(self->inner), "dataType"));
}


jb_FrozenArray MLTensor_shape(const MLTensor *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "shape"));
}


bool MLTensor_readable(const MLTensor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "readable"));
}


bool MLTensor_writable(const MLTensor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "writable"));
}


bool MLTensor_constant(const MLTensor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "constant"));
}


jb_Undefined MLTensor_destroy(MLTensor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

