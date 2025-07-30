#include <webbind/MLGraphBuilder.h>
#include <webbind/MLOperand.h>
#include <webbind/MLContext.h>
#include <webbind/MLTensor.h>
#include <webbind/MLGraph.h>


DEFINE_EMLITE_TYPE(MLArgMinMaxOptions, em_Val);


bool MLArgMinMaxOptions_keepDimensions(const MLArgMinMaxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepDimensions")));
}


void MLArgMinMaxOptions_set_keepDimensions(MLArgMinMaxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keepDimensions"), em_Val_from(value));
}


MLOperandDataType MLArgMinMaxOptions_outputDataType(const MLArgMinMaxOptions *self) {
    return em_Val_as(MLOperandDataType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputDataType")));
}


void MLArgMinMaxOptions_set_outputDataType(MLArgMinMaxOptions* self, MLOperandDataType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputDataType"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLBatchNormalizationOptions, em_Val);


MLOperand MLBatchNormalizationOptions_scale(const MLBatchNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void MLBatchNormalizationOptions_set_scale(MLBatchNormalizationOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLOperand MLBatchNormalizationOptions_bias(const MLBatchNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLBatchNormalizationOptions_set_bias(MLBatchNormalizationOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


unsigned long MLBatchNormalizationOptions_axis(const MLBatchNormalizationOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axis")));
}


void MLBatchNormalizationOptions_set_axis(MLBatchNormalizationOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


double MLBatchNormalizationOptions_epsilon(const MLBatchNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("epsilon")));
}


void MLBatchNormalizationOptions_set_epsilon(MLBatchNormalizationOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("epsilon"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLOperatorOptions, em_Val);


jb_String MLOperatorOptions_label(const MLOperatorOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void MLOperatorOptions_set_label(MLOperatorOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLClampOptions, em_Val);


jb_Any MLClampOptions_minValue(const MLClampOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minValue")));
}


void MLClampOptions_set_minValue(MLClampOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minValue"), em_Val_from(value));
}


jb_Any MLClampOptions_maxValue(const MLClampOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxValue")));
}


void MLClampOptions_set_maxValue(MLClampOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxValue"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLConv2dOptions, em_Val);


jb_Array MLConv2dOptions_padding(const MLConv2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("padding")));
}


void MLConv2dOptions_set_padding(MLConv2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("padding"), em_Val_from(value));
}


jb_Array MLConv2dOptions_strides(const MLConv2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strides")));
}


void MLConv2dOptions_set_strides(MLConv2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}


jb_Array MLConv2dOptions_dilations(const MLConv2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dilations")));
}


void MLConv2dOptions_set_dilations(MLConv2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dilations"), em_Val_from(value));
}


unsigned long MLConv2dOptions_groups(const MLConv2dOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("groups")));
}


void MLConv2dOptions_set_groups(MLConv2dOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("groups"), em_Val_from(value));
}


MLInputOperandLayout MLConv2dOptions_inputLayout(const MLConv2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputLayout")));
}


void MLConv2dOptions_set_inputLayout(MLConv2dOptions* self, MLInputOperandLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputLayout"), em_Val_from(value));
}


MLConv2dFilterOperandLayout MLConv2dOptions_filterLayout(const MLConv2dOptions *self) {
    return em_Val_as(MLConv2dFilterOperandLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filterLayout")));
}


void MLConv2dOptions_set_filterLayout(MLConv2dOptions* self, MLConv2dFilterOperandLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filterLayout"), em_Val_from(value));
}


MLOperand MLConv2dOptions_bias(const MLConv2dOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLConv2dOptions_set_bias(MLConv2dOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLConvTranspose2dOptions, em_Val);


jb_Array MLConvTranspose2dOptions_padding(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("padding")));
}


void MLConvTranspose2dOptions_set_padding(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("padding"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_strides(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strides")));
}


void MLConvTranspose2dOptions_set_strides(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_dilations(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dilations")));
}


void MLConvTranspose2dOptions_set_dilations(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dilations"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_outputPadding(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputPadding")));
}


void MLConvTranspose2dOptions_set_outputPadding(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputPadding"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_outputSizes(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputSizes")));
}


void MLConvTranspose2dOptions_set_outputSizes(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputSizes"), em_Val_from(value));
}


unsigned long MLConvTranspose2dOptions_groups(const MLConvTranspose2dOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("groups")));
}


void MLConvTranspose2dOptions_set_groups(MLConvTranspose2dOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("groups"), em_Val_from(value));
}


MLInputOperandLayout MLConvTranspose2dOptions_inputLayout(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputLayout")));
}


void MLConvTranspose2dOptions_set_inputLayout(MLConvTranspose2dOptions* self, MLInputOperandLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputLayout"), em_Val_from(value));
}


MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions_filterLayout(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLConvTranspose2dFilterOperandLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filterLayout")));
}


void MLConvTranspose2dOptions_set_filterLayout(MLConvTranspose2dOptions* self, MLConvTranspose2dFilterOperandLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filterLayout"), em_Val_from(value));
}


MLOperand MLConvTranspose2dOptions_bias(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLConvTranspose2dOptions_set_bias(MLConvTranspose2dOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLCumulativeSumOptions, em_Val);


bool MLCumulativeSumOptions_exclusive(const MLCumulativeSumOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exclusive")));
}


void MLCumulativeSumOptions_set_exclusive(MLCumulativeSumOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exclusive"), em_Val_from(value));
}


bool MLCumulativeSumOptions_reversed(const MLCumulativeSumOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reversed")));
}


void MLCumulativeSumOptions_set_reversed(MLCumulativeSumOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reversed"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLEluOptions, em_Val);


double MLEluOptions_alpha(const MLEluOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void MLEluOptions_set_alpha(MLEluOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLGatherOptions, em_Val);


unsigned long MLGatherOptions_axis(const MLGatherOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axis")));
}


void MLGatherOptions_set_axis(MLGatherOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLGemmOptions, em_Val);


MLOperand MLGemmOptions_c(const MLGemmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("c")));
}


void MLGemmOptions_set_c(MLGemmOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("c"), em_Val_from(value));
}


double MLGemmOptions_alpha(const MLGemmOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void MLGemmOptions_set_alpha(MLGemmOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double MLGemmOptions_beta(const MLGemmOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beta")));
}


void MLGemmOptions_set_beta(MLGemmOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}


bool MLGemmOptions_aTranspose(const MLGemmOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aTranspose")));
}


void MLGemmOptions_set_aTranspose(MLGemmOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aTranspose"), em_Val_from(value));
}


bool MLGemmOptions_bTranspose(const MLGemmOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bTranspose")));
}


void MLGemmOptions_set_bTranspose(MLGemmOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bTranspose"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLGruOptions, em_Val);


MLOperand MLGruOptions_bias(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLGruOptions_set_bias(MLGruOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLGruOptions_recurrentBias(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLGruOptions_set_recurrentBias(MLGruOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLOperand MLGruOptions_initialHiddenState(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initialHiddenState")));
}


void MLGruOptions_set_initialHiddenState(MLGruOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initialHiddenState"), em_Val_from(value));
}


bool MLGruOptions_resetAfter(const MLGruOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resetAfter")));
}


void MLGruOptions_set_resetAfter(MLGruOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resetAfter"), em_Val_from(value));
}


bool MLGruOptions_returnSequence(const MLGruOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("returnSequence")));
}


void MLGruOptions_set_returnSequence(MLGruOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("returnSequence"), em_Val_from(value));
}


MLRecurrentNetworkDirection MLGruOptions_direction(const MLGruOptions *self) {
    return em_Val_as(MLRecurrentNetworkDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void MLGruOptions_set_direction(MLGruOptions* self, MLRecurrentNetworkDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


MLGruWeightLayout MLGruOptions_layout(const MLGruOptions *self) {
    return em_Val_as(MLGruWeightLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void MLGruOptions_set_layout(MLGruOptions* self, MLGruWeightLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLGruOptions_activations(const MLGruOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("activations")));
}


void MLGruOptions_set_activations(MLGruOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLGruCellOptions, em_Val);


MLOperand MLGruCellOptions_bias(const MLGruCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLGruCellOptions_set_bias(MLGruCellOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLGruCellOptions_recurrentBias(const MLGruCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLGruCellOptions_set_recurrentBias(MLGruCellOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


bool MLGruCellOptions_resetAfter(const MLGruCellOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resetAfter")));
}


void MLGruCellOptions_set_resetAfter(MLGruCellOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resetAfter"), em_Val_from(value));
}


MLGruWeightLayout MLGruCellOptions_layout(const MLGruCellOptions *self) {
    return em_Val_as(MLGruWeightLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void MLGruCellOptions_set_layout(MLGruCellOptions* self, MLGruWeightLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLGruCellOptions_activations(const MLGruCellOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("activations")));
}


void MLGruCellOptions_set_activations(MLGruCellOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLHardSigmoidOptions, em_Val);


double MLHardSigmoidOptions_alpha(const MLHardSigmoidOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void MLHardSigmoidOptions_set_alpha(MLHardSigmoidOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double MLHardSigmoidOptions_beta(const MLHardSigmoidOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beta")));
}


void MLHardSigmoidOptions_set_beta(MLHardSigmoidOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLInstanceNormalizationOptions, em_Val);


MLOperand MLInstanceNormalizationOptions_scale(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void MLInstanceNormalizationOptions_set_scale(MLInstanceNormalizationOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLOperand MLInstanceNormalizationOptions_bias(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLInstanceNormalizationOptions_set_bias(MLInstanceNormalizationOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


double MLInstanceNormalizationOptions_epsilon(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("epsilon")));
}


void MLInstanceNormalizationOptions_set_epsilon(MLInstanceNormalizationOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("epsilon"), em_Val_from(value));
}


MLInputOperandLayout MLInstanceNormalizationOptions_layout(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void MLInstanceNormalizationOptions_set_layout(MLInstanceNormalizationOptions* self, MLInputOperandLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLLayerNormalizationOptions, em_Val);


MLOperand MLLayerNormalizationOptions_scale(const MLLayerNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void MLLayerNormalizationOptions_set_scale(MLLayerNormalizationOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLOperand MLLayerNormalizationOptions_bias(const MLLayerNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLLayerNormalizationOptions_set_bias(MLLayerNormalizationOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


jb_Array MLLayerNormalizationOptions_axes(const MLLayerNormalizationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axes")));
}


void MLLayerNormalizationOptions_set_axes(MLLayerNormalizationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}


double MLLayerNormalizationOptions_epsilon(const MLLayerNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("epsilon")));
}


void MLLayerNormalizationOptions_set_epsilon(MLLayerNormalizationOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("epsilon"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLLeakyReluOptions, em_Val);


double MLLeakyReluOptions_alpha(const MLLeakyReluOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void MLLeakyReluOptions_set_alpha(MLLeakyReluOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLLinearOptions, em_Val);


double MLLinearOptions_alpha(const MLLinearOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void MLLinearOptions_set_alpha(MLLinearOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double MLLinearOptions_beta(const MLLinearOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beta")));
}


void MLLinearOptions_set_beta(MLLinearOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLLstmOptions, em_Val);


MLOperand MLLstmOptions_bias(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLLstmOptions_set_bias(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLLstmOptions_recurrentBias(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLLstmOptions_set_recurrentBias(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLOperand MLLstmOptions_peepholeWeight(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peepholeWeight")));
}


void MLLstmOptions_set_peepholeWeight(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peepholeWeight"), em_Val_from(value));
}


MLOperand MLLstmOptions_initialHiddenState(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initialHiddenState")));
}


void MLLstmOptions_set_initialHiddenState(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initialHiddenState"), em_Val_from(value));
}


MLOperand MLLstmOptions_initialCellState(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initialCellState")));
}


void MLLstmOptions_set_initialCellState(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initialCellState"), em_Val_from(value));
}


bool MLLstmOptions_returnSequence(const MLLstmOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("returnSequence")));
}


void MLLstmOptions_set_returnSequence(MLLstmOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("returnSequence"), em_Val_from(value));
}


MLRecurrentNetworkDirection MLLstmOptions_direction(const MLLstmOptions *self) {
    return em_Val_as(MLRecurrentNetworkDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void MLLstmOptions_set_direction(MLLstmOptions* self, MLRecurrentNetworkDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


MLLstmWeightLayout MLLstmOptions_layout(const MLLstmOptions *self) {
    return em_Val_as(MLLstmWeightLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void MLLstmOptions_set_layout(MLLstmOptions* self, MLLstmWeightLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLLstmOptions_activations(const MLLstmOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("activations")));
}


void MLLstmOptions_set_activations(MLLstmOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLLstmCellOptions, em_Val);


MLOperand MLLstmCellOptions_bias(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLLstmCellOptions_set_bias(MLLstmCellOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLLstmCellOptions_recurrentBias(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLLstmCellOptions_set_recurrentBias(MLLstmCellOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLOperand MLLstmCellOptions_peepholeWeight(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peepholeWeight")));
}


void MLLstmCellOptions_set_peepholeWeight(MLLstmCellOptions* self, MLOperand * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peepholeWeight"), em_Val_from(value));
}


MLLstmWeightLayout MLLstmCellOptions_layout(const MLLstmCellOptions *self) {
    return em_Val_as(MLLstmWeightLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void MLLstmCellOptions_set_layout(MLLstmCellOptions* self, MLLstmWeightLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLLstmCellOptions_activations(const MLLstmCellOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("activations")));
}


void MLLstmCellOptions_set_activations(MLLstmCellOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLPadOptions, em_Val);


MLPaddingMode MLPadOptions_mode(const MLPadOptions *self) {
    return em_Val_as(MLPaddingMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void MLPadOptions_set_mode(MLPadOptions* self, MLPaddingMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


jb_Any MLPadOptions_value(const MLPadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void MLPadOptions_set_value(MLPadOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLPool2dOptions, em_Val);


jb_Array MLPool2dOptions_windowDimensions(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("windowDimensions")));
}


void MLPool2dOptions_set_windowDimensions(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("windowDimensions"), em_Val_from(value));
}


jb_Array MLPool2dOptions_padding(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("padding")));
}


void MLPool2dOptions_set_padding(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("padding"), em_Val_from(value));
}


jb_Array MLPool2dOptions_strides(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strides")));
}


void MLPool2dOptions_set_strides(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}


jb_Array MLPool2dOptions_dilations(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dilations")));
}


void MLPool2dOptions_set_dilations(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dilations"), em_Val_from(value));
}


MLInputOperandLayout MLPool2dOptions_layout(const MLPool2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void MLPool2dOptions_set_layout(MLPool2dOptions* self, MLInputOperandLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


MLRoundingType MLPool2dOptions_roundingType(const MLPool2dOptions *self) {
    return em_Val_as(MLRoundingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("roundingType")));
}


void MLPool2dOptions_set_roundingType(MLPool2dOptions* self, MLRoundingType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("roundingType"), em_Val_from(value));
}


jb_Array MLPool2dOptions_outputSizes(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputSizes")));
}


void MLPool2dOptions_set_outputSizes(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputSizes"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLReduceOptions, em_Val);


jb_Array MLReduceOptions_axes(const MLReduceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axes")));
}


void MLReduceOptions_set_axes(MLReduceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}


bool MLReduceOptions_keepDimensions(const MLReduceOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepDimensions")));
}


void MLReduceOptions_set_keepDimensions(MLReduceOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keepDimensions"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLResample2dOptions, em_Val);


MLInterpolationMode MLResample2dOptions_mode(const MLResample2dOptions *self) {
    return em_Val_as(MLInterpolationMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void MLResample2dOptions_set_mode(MLResample2dOptions* self, MLInterpolationMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


jb_Array MLResample2dOptions_scales(const MLResample2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scales")));
}


void MLResample2dOptions_set_scales(MLResample2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scales"), em_Val_from(value));
}


jb_Array MLResample2dOptions_sizes(const MLResample2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sizes")));
}


void MLResample2dOptions_set_sizes(MLResample2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sizes"), em_Val_from(value));
}


jb_Array MLResample2dOptions_axes(const MLResample2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axes")));
}


void MLResample2dOptions_set_axes(MLResample2dOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLReverseOptions, em_Val);


jb_Array MLReverseOptions_axes(const MLReverseOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axes")));
}


void MLReverseOptions_set_axes(MLReverseOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLScatterOptions, em_Val);


unsigned long MLScatterOptions_axis(const MLScatterOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axis")));
}


void MLScatterOptions_set_axis(MLScatterOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLSliceOptions, em_Val);


jb_Array MLSliceOptions_strides(const MLSliceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strides")));
}


void MLSliceOptions_set_strides(MLSliceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLSplitOptions, em_Val);


unsigned long MLSplitOptions_axis(const MLSplitOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axis")));
}


void MLSplitOptions_set_axis(MLSplitOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLTransposeOptions, em_Val);


jb_Array MLTransposeOptions_permutation(const MLTransposeOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("permutation")));
}


void MLTransposeOptions_set_permutation(MLTransposeOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("permutation"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLTriangularOptions, em_Val);


bool MLTriangularOptions_upper(const MLTriangularOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("upper")));
}


void MLTriangularOptions_set_upper(MLTriangularOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("upper"), em_Val_from(value));
}


long MLTriangularOptions_diagonal(const MLTriangularOptions *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("diagonal")));
}


void MLTriangularOptions_set_diagonal(MLTriangularOptions* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("diagonal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLGraphBuilder, em_Val);


MLGraphBuilder MLGraphBuilder_new(MLContext * context) {
        em_Val vv = em_Val_new(em_Val_global("MLGraphBuilder") , em_Val_from(context));
        return MLGraphBuilder_from_val(&vv);
      }


MLOperand MLGraphBuilder_input(MLGraphBuilder* self , jb_String * name, MLOperandDescriptor * descriptor) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "input", em_Val_from(name), em_Val_from(descriptor)));
}


MLOperand MLGraphBuilder_constant(MLGraphBuilder* self , MLTensor * tensor) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "constant", em_Val_from(tensor)));
}


jb_Promise MLGraphBuilder_build(MLGraphBuilder* self , jb_Any * outputs) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "build", em_Val_from(outputs)));
}


MLOperand MLGraphBuilder_argMin0(MLGraphBuilder* self , MLOperand * input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMin", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_argMin1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMin", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_argMax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMax", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_argMax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMax", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_batchNormalization0(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "batchNormalization", em_Val_from(input), em_Val_from(mean), em_Val_from(variance)));
}


MLOperand MLGraphBuilder_batchNormalization1(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance, MLBatchNormalizationOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "batchNormalization", em_Val_from(input), em_Val_from(mean), em_Val_from(variance), em_Val_from(options)));
}


MLOperand MLGraphBuilder_cast0(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cast", em_Val_from(input), em_Val_from(type)));
}


MLOperand MLGraphBuilder_cast1(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cast", em_Val_from(input), em_Val_from(type), em_Val_from(options)));
}


MLOperand MLGraphBuilder_clamp0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "clamp", em_Val_from(input)));
}


MLOperand MLGraphBuilder_clamp1(MLGraphBuilder* self , MLOperand * input, MLClampOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "clamp", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_concat0(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "concat", em_Val_from(inputs), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_concat1(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "concat", em_Val_from(inputs), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_conv2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "conv2d", em_Val_from(input), em_Val_from(filter)));
}


MLOperand MLGraphBuilder_conv2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConv2dOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "conv2d", em_Val_from(input), em_Val_from(filter), em_Val_from(options)));
}


MLOperand MLGraphBuilder_convTranspose2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "convTranspose2d", em_Val_from(input), em_Val_from(filter)));
}


MLOperand MLGraphBuilder_convTranspose2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConvTranspose2dOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "convTranspose2d", em_Val_from(input), em_Val_from(filter), em_Val_from(options)));
}


MLOperand MLGraphBuilder_cumulativeSum0(MLGraphBuilder* self , MLOperand * input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cumulativeSum", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_cumulativeSum1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLCumulativeSumOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cumulativeSum", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_add0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_add1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sub0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sub", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_sub1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sub", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_mul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "mul", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_mul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "mul", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_div0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "div", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_div1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "div", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_max0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "max", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_max1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "max", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_min0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "min", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_min1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "min", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_pow0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pow", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_pow1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pow", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_equal0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "equal", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_equal1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "equal", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_notEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "notEqual", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_notEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "notEqual", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_greater0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greater", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_greater1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greater", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_greaterOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greaterOrEqual", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_greaterOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greaterOrEqual", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_lesser0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesser", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_lesser1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesser", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_lesserOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesserOrEqual", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_lesserOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesserOrEqual", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalNot0(MLGraphBuilder* self , MLOperand * a) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalNot", em_Val_from(a)));
}


MLOperand MLGraphBuilder_logicalNot1(MLGraphBuilder* self , MLOperand * a, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalNot", em_Val_from(a), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalAnd0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalAnd", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_logicalAnd1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalAnd", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalOr0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalOr", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_logicalOr1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalOr", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalXor0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalXor", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_logicalXor1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalXor", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_abs0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "abs", em_Val_from(input)));
}


MLOperand MLGraphBuilder_abs1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "abs", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_ceil0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "ceil", em_Val_from(input)));
}


MLOperand MLGraphBuilder_ceil1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "ceil", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_cos0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cos", em_Val_from(input)));
}


MLOperand MLGraphBuilder_cos1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cos", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_erf0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "erf", em_Val_from(input)));
}


MLOperand MLGraphBuilder_erf1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "erf", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_exp0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "exp", em_Val_from(input)));
}


MLOperand MLGraphBuilder_exp1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "exp", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_floor0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "floor", em_Val_from(input)));
}


MLOperand MLGraphBuilder_floor1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "floor", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_identity0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "identity", em_Val_from(input)));
}


MLOperand MLGraphBuilder_identity1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "identity", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_log0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "log", em_Val_from(input)));
}


MLOperand MLGraphBuilder_log1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "log", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_neg0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "neg", em_Val_from(input)));
}


MLOperand MLGraphBuilder_neg1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "neg", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reciprocal0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reciprocal", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reciprocal1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reciprocal", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sin0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sin", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sin1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sin", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sign0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sign", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sign", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sqrt0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sqrt", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sqrt1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sqrt", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_tan0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tan", em_Val_from(input)));
}


MLOperand MLGraphBuilder_tan1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tan", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_dequantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "dequantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint)));
}


MLOperand MLGraphBuilder_dequantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "dequantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint), em_Val_from(options)));
}


MLOperand MLGraphBuilder_quantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "quantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint)));
}


MLOperand MLGraphBuilder_quantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "quantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint), em_Val_from(options)));
}


MLOperand MLGraphBuilder_elu0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "elu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_elu1(MLGraphBuilder* self , MLOperand * input, MLEluOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "elu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_expand0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "expand", em_Val_from(input), em_Val_from(newShape)));
}


MLOperand MLGraphBuilder_expand1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "expand", em_Val_from(input), em_Val_from(newShape), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gather0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gather", em_Val_from(input), em_Val_from(indices)));
}


MLOperand MLGraphBuilder_gather1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gather", em_Val_from(input), em_Val_from(indices), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gatherElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherElements", em_Val_from(input), em_Val_from(indices)));
}


MLOperand MLGraphBuilder_gatherElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherElements", em_Val_from(input), em_Val_from(indices), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gatherND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherND", em_Val_from(input), em_Val_from(indices)));
}


MLOperand MLGraphBuilder_gatherND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherND", em_Val_from(input), em_Val_from(indices), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gelu0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gelu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_gelu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gelu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gemm0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gemm", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_gemm1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLGemmOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gemm", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


jb_Array MLGraphBuilder_gru0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "gru", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize)));
}


jb_Array MLGraphBuilder_gru1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLGruOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "gru", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gruCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gruCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(hiddenSize)));
}


MLOperand MLGraphBuilder_gruCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize, MLGruCellOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gruCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(hiddenSize), em_Val_from(options)));
}


MLOperand MLGraphBuilder_hardSigmoid0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSigmoid", em_Val_from(input)));
}


MLOperand MLGraphBuilder_hardSigmoid1(MLGraphBuilder* self , MLOperand * input, MLHardSigmoidOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSigmoid", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_hardSwish0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSwish", em_Val_from(input)));
}


MLOperand MLGraphBuilder_hardSwish1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSwish", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_instanceNormalization0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "instanceNormalization", em_Val_from(input)));
}


MLOperand MLGraphBuilder_instanceNormalization1(MLGraphBuilder* self , MLOperand * input, MLInstanceNormalizationOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "instanceNormalization", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_layerNormalization0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "layerNormalization", em_Val_from(input)));
}


MLOperand MLGraphBuilder_layerNormalization1(MLGraphBuilder* self , MLOperand * input, MLLayerNormalizationOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "layerNormalization", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_leakyRelu0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "leakyRelu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_leakyRelu1(MLGraphBuilder* self , MLOperand * input, MLLeakyReluOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "leakyRelu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_linear0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "linear", em_Val_from(input)));
}


MLOperand MLGraphBuilder_linear1(MLGraphBuilder* self , MLOperand * input, MLLinearOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "linear", em_Val_from(input), em_Val_from(options)));
}


jb_Array MLGraphBuilder_lstm0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "lstm", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize)));
}


jb_Array MLGraphBuilder_lstm1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLLstmOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "lstm", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize), em_Val_from(options)));
}


jb_Array MLGraphBuilder_lstmCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "lstmCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(cellState), em_Val_from(hiddenSize)));
}


jb_Array MLGraphBuilder_lstmCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize, MLLstmCellOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "lstmCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(cellState), em_Val_from(hiddenSize), em_Val_from(options)));
}


MLOperand MLGraphBuilder_matmul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "matmul", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_matmul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "matmul", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_pad0(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pad", em_Val_from(input), em_Val_from(beginningPadding), em_Val_from(endingPadding)));
}


MLOperand MLGraphBuilder_pad1(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding, MLPadOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pad", em_Val_from(input), em_Val_from(beginningPadding), em_Val_from(endingPadding), em_Val_from(options)));
}


MLOperand MLGraphBuilder_averagePool2d0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "averagePool2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_averagePool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "averagePool2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_l2Pool2d0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "l2Pool2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_l2Pool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "l2Pool2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_maxPool2d0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "maxPool2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_maxPool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "maxPool2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_prelu0(MLGraphBuilder* self , MLOperand * input, MLOperand * slope) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "prelu", em_Val_from(input), em_Val_from(slope)));
}


MLOperand MLGraphBuilder_prelu1(MLGraphBuilder* self , MLOperand * input, MLOperand * slope, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "prelu", em_Val_from(input), em_Val_from(slope), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceL10(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL1", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceL11(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL1", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceL20(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL2", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceL21(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL2", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceLogSum0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSum", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceLogSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSum", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceLogSumExp0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSumExp", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceLogSumExp1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSumExp", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceMax0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMax", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceMax1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMax", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceMean0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMean", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceMean1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMean", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceMin0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMin", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceMin1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMin", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceProduct0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceProduct", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceProduct1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceProduct", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceSum0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSum", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSum", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceSumSquare0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSumSquare", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceSumSquare1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSumSquare", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_relu0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "relu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_relu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "relu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_resample2d0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "resample2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_resample2d1(MLGraphBuilder* self , MLOperand * input, MLResample2dOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "resample2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reshape0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reshape", em_Val_from(input), em_Val_from(newShape)));
}


MLOperand MLGraphBuilder_reshape1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reshape", em_Val_from(input), em_Val_from(newShape), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reverse0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reverse", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reverse1(MLGraphBuilder* self , MLOperand * input, MLReverseOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reverse", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_scatterElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterElements", em_Val_from(input), em_Val_from(indices), em_Val_from(updates)));
}


MLOperand MLGraphBuilder_scatterElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLScatterOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterElements", em_Val_from(input), em_Val_from(indices), em_Val_from(updates), em_Val_from(options)));
}


MLOperand MLGraphBuilder_scatterND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterND", em_Val_from(input), em_Val_from(indices), em_Val_from(updates)));
}


MLOperand MLGraphBuilder_scatterND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterND", em_Val_from(input), em_Val_from(indices), em_Val_from(updates), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sigmoid0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sigmoid", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sigmoid1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sigmoid", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_slice0(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(input), em_Val_from(starts), em_Val_from(sizes)));
}


MLOperand MLGraphBuilder_slice1(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes, MLSliceOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(input), em_Val_from(starts), em_Val_from(sizes), em_Val_from(options)));
}


MLOperand MLGraphBuilder_softmax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softmax", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_softmax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softmax", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_softplus0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softplus", em_Val_from(input)));
}


MLOperand MLGraphBuilder_softplus1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softplus", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_softsign0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softsign", em_Val_from(input)));
}


MLOperand MLGraphBuilder_softsign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softsign", em_Val_from(input), em_Val_from(options)));
}


jb_Array MLGraphBuilder_split0(MLGraphBuilder* self , MLOperand * input, jb_Any * splits) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "split", em_Val_from(input), em_Val_from(splits)));
}


jb_Array MLGraphBuilder_split1(MLGraphBuilder* self , MLOperand * input, jb_Any * splits, MLSplitOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "split", em_Val_from(input), em_Val_from(splits), em_Val_from(options)));
}


MLOperand MLGraphBuilder_tanh0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tanh", em_Val_from(input)));
}


MLOperand MLGraphBuilder_tanh1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tanh", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_tile0(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tile", em_Val_from(input), em_Val_from(repetitions)));
}


MLOperand MLGraphBuilder_tile1(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tile", em_Val_from(input), em_Val_from(repetitions), em_Val_from(options)));
}


MLOperand MLGraphBuilder_transpose0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "transpose", em_Val_from(input)));
}


MLOperand MLGraphBuilder_transpose1(MLGraphBuilder* self , MLOperand * input, MLTransposeOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "transpose", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_triangular0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "triangular", em_Val_from(input)));
}


MLOperand MLGraphBuilder_triangular1(MLGraphBuilder* self , MLOperand * input, MLTriangularOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "triangular", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_where0(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "where", em_Val_from(condition), em_Val_from(trueValue), em_Val_from(falseValue)));
}


MLOperand MLGraphBuilder_where1(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "where", em_Val_from(condition), em_Val_from(trueValue), em_Val_from(falseValue), em_Val_from(options)));
}

