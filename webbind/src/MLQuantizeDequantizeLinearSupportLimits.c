#include <webbind/MLQuantizeDequantizeLinearSupportLimits.h>

DEFINE_EMLITE_TYPE(MLQuantizeDequantizeLinearSupportLimits, em_Val);


MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_input(const MLQuantizeDequantizeLinearSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLQuantizeDequantizeLinearSupportLimits_set_input(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_scale(const MLQuantizeDequantizeLinearSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void MLQuantizeDequantizeLinearSupportLimits_set_scale(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_zeroPoint(const MLQuantizeDequantizeLinearSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("zeroPoint")));
}


void MLQuantizeDequantizeLinearSupportLimits_set_zeroPoint(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("zeroPoint"), em_Val_from(value));
}


MLDataTypeLimits MLQuantizeDequantizeLinearSupportLimits_output(const MLQuantizeDequantizeLinearSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLQuantizeDequantizeLinearSupportLimits_set_output(MLQuantizeDequantizeLinearSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLQuantizeDequantizeLinearSupportLimits MLQuantizeDequantizeLinearSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLQuantizeDequantizeLinearSupportLimits_from_val(&obj);
}

