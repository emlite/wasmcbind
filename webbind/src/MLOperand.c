#include <webbind/MLOperand.h>


DEFINE_EMLITE_TYPE(MLOperand, em_Val);


MLOperandDataType MLOperand_dataType(const MLOperand *self) {
    return em_Val_as(MLOperandDataType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataType")));
}


jb_FrozenArray MLOperand_shape(const MLOperand *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shape")));
}

