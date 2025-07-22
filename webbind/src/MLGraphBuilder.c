#include <webbind/MLGraphBuilder.h>
#include <webbind/MLOperand.h>
#include <webbind/MLContext.h>
#include <webbind/MLTensor.h>
#include <webbind/MLGraph.h>


DEFINE_EMLITE_TYPE(MLArgMinMaxOptions, em_Val);


bool MLArgMinMaxOptions_keepDimensions(const MLArgMinMaxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "keepDimensions"));
}


void MLArgMinMaxOptions_set_keepDimensions(MLArgMinMaxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "keepDimensions", value);
}


MLOperandDataType MLArgMinMaxOptions_outputDataType(const MLArgMinMaxOptions *self) {
    return em_Val_as(MLOperandDataType, em_Val_get(em_Val_as_val(self->inner), "outputDataType"));
}


void MLArgMinMaxOptions_set_outputDataType(MLArgMinMaxOptions* self, const MLOperandDataType* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputDataType", value);
}

DEFINE_EMLITE_TYPE(MLBatchNormalizationOptions, em_Val);


MLOperand MLBatchNormalizationOptions_scale(const MLBatchNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "scale"));
}


void MLBatchNormalizationOptions_set_scale(MLBatchNormalizationOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "scale", value);
}


MLOperand MLBatchNormalizationOptions_bias(const MLBatchNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLBatchNormalizationOptions_set_bias(MLBatchNormalizationOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}


unsigned long MLBatchNormalizationOptions_axis(const MLBatchNormalizationOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "axis"));
}


void MLBatchNormalizationOptions_set_axis(MLBatchNormalizationOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "axis", value);
}


double MLBatchNormalizationOptions_epsilon(const MLBatchNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "epsilon"));
}


void MLBatchNormalizationOptions_set_epsilon(MLBatchNormalizationOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "epsilon", value);
}

DEFINE_EMLITE_TYPE(MLOperatorOptions, em_Val);


jb_USVString MLOperatorOptions_label(const MLOperatorOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void MLOperatorOptions_set_label(MLOperatorOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

DEFINE_EMLITE_TYPE(MLClampOptions, em_Val);


jb_Any MLClampOptions_minValue(const MLClampOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "minValue"));
}


void MLClampOptions_set_minValue(MLClampOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "minValue", value);
}


jb_Any MLClampOptions_maxValue(const MLClampOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "maxValue"));
}


void MLClampOptions_set_maxValue(MLClampOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "maxValue", value);
}

DEFINE_EMLITE_TYPE(MLConv2dOptions, em_Val);


jb_Sequence MLConv2dOptions_padding(const MLConv2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "padding"));
}


void MLConv2dOptions_set_padding(MLConv2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "padding", value);
}


jb_Sequence MLConv2dOptions_strides(const MLConv2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "strides"));
}


void MLConv2dOptions_set_strides(MLConv2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "strides", value);
}


jb_Sequence MLConv2dOptions_dilations(const MLConv2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "dilations"));
}


void MLConv2dOptions_set_dilations(MLConv2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "dilations", value);
}


unsigned long MLConv2dOptions_groups(const MLConv2dOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "groups"));
}


void MLConv2dOptions_set_groups(MLConv2dOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "groups", value);
}


MLInputOperandLayout MLConv2dOptions_inputLayout(const MLConv2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), "inputLayout"));
}


void MLConv2dOptions_set_inputLayout(MLConv2dOptions* self, const MLInputOperandLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "inputLayout", value);
}


MLConv2dFilterOperandLayout MLConv2dOptions_filterLayout(const MLConv2dOptions *self) {
    return em_Val_as(MLConv2dFilterOperandLayout, em_Val_get(em_Val_as_val(self->inner), "filterLayout"));
}


void MLConv2dOptions_set_filterLayout(MLConv2dOptions* self, const MLConv2dFilterOperandLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "filterLayout", value);
}


MLOperand MLConv2dOptions_bias(const MLConv2dOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLConv2dOptions_set_bias(MLConv2dOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}

DEFINE_EMLITE_TYPE(MLConvTranspose2dOptions, em_Val);


jb_Sequence MLConvTranspose2dOptions_padding(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "padding"));
}


void MLConvTranspose2dOptions_set_padding(MLConvTranspose2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "padding", value);
}


jb_Sequence MLConvTranspose2dOptions_strides(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "strides"));
}


void MLConvTranspose2dOptions_set_strides(MLConvTranspose2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "strides", value);
}


jb_Sequence MLConvTranspose2dOptions_dilations(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "dilations"));
}


void MLConvTranspose2dOptions_set_dilations(MLConvTranspose2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "dilations", value);
}


jb_Sequence MLConvTranspose2dOptions_outputPadding(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "outputPadding"));
}


void MLConvTranspose2dOptions_set_outputPadding(MLConvTranspose2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputPadding", value);
}


jb_Sequence MLConvTranspose2dOptions_outputSizes(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "outputSizes"));
}


void MLConvTranspose2dOptions_set_outputSizes(MLConvTranspose2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputSizes", value);
}


unsigned long MLConvTranspose2dOptions_groups(const MLConvTranspose2dOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "groups"));
}


void MLConvTranspose2dOptions_set_groups(MLConvTranspose2dOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "groups", value);
}


MLInputOperandLayout MLConvTranspose2dOptions_inputLayout(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), "inputLayout"));
}


void MLConvTranspose2dOptions_set_inputLayout(MLConvTranspose2dOptions* self, const MLInputOperandLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "inputLayout", value);
}


MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions_filterLayout(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLConvTranspose2dFilterOperandLayout, em_Val_get(em_Val_as_val(self->inner), "filterLayout"));
}


void MLConvTranspose2dOptions_set_filterLayout(MLConvTranspose2dOptions* self, const MLConvTranspose2dFilterOperandLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "filterLayout", value);
}


MLOperand MLConvTranspose2dOptions_bias(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLConvTranspose2dOptions_set_bias(MLConvTranspose2dOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}

DEFINE_EMLITE_TYPE(MLCumulativeSumOptions, em_Val);


bool MLCumulativeSumOptions_exclusive(const MLCumulativeSumOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "exclusive"));
}


void MLCumulativeSumOptions_set_exclusive(MLCumulativeSumOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "exclusive", value);
}


bool MLCumulativeSumOptions_reversed(const MLCumulativeSumOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "reversed"));
}


void MLCumulativeSumOptions_set_reversed(MLCumulativeSumOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "reversed", value);
}

DEFINE_EMLITE_TYPE(MLEluOptions, em_Val);


double MLEluOptions_alpha(const MLEluOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "alpha"));
}


void MLEluOptions_set_alpha(MLEluOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "alpha", value);
}

DEFINE_EMLITE_TYPE(MLGatherOptions, em_Val);


unsigned long MLGatherOptions_axis(const MLGatherOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "axis"));
}


void MLGatherOptions_set_axis(MLGatherOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "axis", value);
}

DEFINE_EMLITE_TYPE(MLGemmOptions, em_Val);


MLOperand MLGemmOptions_c(const MLGemmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "c"));
}


void MLGemmOptions_set_c(MLGemmOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "c", value);
}


double MLGemmOptions_alpha(const MLGemmOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "alpha"));
}


void MLGemmOptions_set_alpha(MLGemmOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "alpha", value);
}


double MLGemmOptions_beta(const MLGemmOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "beta"));
}


void MLGemmOptions_set_beta(MLGemmOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "beta", value);
}


bool MLGemmOptions_aTranspose(const MLGemmOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "aTranspose"));
}


void MLGemmOptions_set_aTranspose(MLGemmOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "aTranspose", value);
}


bool MLGemmOptions_bTranspose(const MLGemmOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "bTranspose"));
}


void MLGemmOptions_set_bTranspose(MLGemmOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "bTranspose", value);
}

DEFINE_EMLITE_TYPE(MLGruOptions, em_Val);


MLOperand MLGruOptions_bias(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLGruOptions_set_bias(MLGruOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}


MLOperand MLGruOptions_recurrentBias(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "recurrentBias"));
}


void MLGruOptions_set_recurrentBias(MLGruOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "recurrentBias", value);
}


MLOperand MLGruOptions_initialHiddenState(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "initialHiddenState"));
}


void MLGruOptions_set_initialHiddenState(MLGruOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "initialHiddenState", value);
}


bool MLGruOptions_resetAfter(const MLGruOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "resetAfter"));
}


void MLGruOptions_set_resetAfter(MLGruOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "resetAfter", value);
}


bool MLGruOptions_returnSequence(const MLGruOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "returnSequence"));
}


void MLGruOptions_set_returnSequence(MLGruOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "returnSequence", value);
}


MLRecurrentNetworkDirection MLGruOptions_direction(const MLGruOptions *self) {
    return em_Val_as(MLRecurrentNetworkDirection, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


void MLGruOptions_set_direction(MLGruOptions* self, const MLRecurrentNetworkDirection* value) {
    em_Val_set(em_Val_as_val(self->inner), "direction", value);
}


MLGruWeightLayout MLGruOptions_layout(const MLGruOptions *self) {
    return em_Val_as(MLGruWeightLayout, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void MLGruOptions_set_layout(MLGruOptions* self, const MLGruWeightLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}


jb_Sequence MLGruOptions_activations(const MLGruOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "activations"));
}


void MLGruOptions_set_activations(MLGruOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "activations", value);
}

DEFINE_EMLITE_TYPE(MLGruCellOptions, em_Val);


MLOperand MLGruCellOptions_bias(const MLGruCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLGruCellOptions_set_bias(MLGruCellOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}


MLOperand MLGruCellOptions_recurrentBias(const MLGruCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "recurrentBias"));
}


void MLGruCellOptions_set_recurrentBias(MLGruCellOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "recurrentBias", value);
}


bool MLGruCellOptions_resetAfter(const MLGruCellOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "resetAfter"));
}


void MLGruCellOptions_set_resetAfter(MLGruCellOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "resetAfter", value);
}


MLGruWeightLayout MLGruCellOptions_layout(const MLGruCellOptions *self) {
    return em_Val_as(MLGruWeightLayout, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void MLGruCellOptions_set_layout(MLGruCellOptions* self, const MLGruWeightLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}


jb_Sequence MLGruCellOptions_activations(const MLGruCellOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "activations"));
}


void MLGruCellOptions_set_activations(MLGruCellOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "activations", value);
}

DEFINE_EMLITE_TYPE(MLHardSigmoidOptions, em_Val);


double MLHardSigmoidOptions_alpha(const MLHardSigmoidOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "alpha"));
}


void MLHardSigmoidOptions_set_alpha(MLHardSigmoidOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "alpha", value);
}


double MLHardSigmoidOptions_beta(const MLHardSigmoidOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "beta"));
}


void MLHardSigmoidOptions_set_beta(MLHardSigmoidOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "beta", value);
}

DEFINE_EMLITE_TYPE(MLInstanceNormalizationOptions, em_Val);


MLOperand MLInstanceNormalizationOptions_scale(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "scale"));
}


void MLInstanceNormalizationOptions_set_scale(MLInstanceNormalizationOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "scale", value);
}


MLOperand MLInstanceNormalizationOptions_bias(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLInstanceNormalizationOptions_set_bias(MLInstanceNormalizationOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}


double MLInstanceNormalizationOptions_epsilon(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "epsilon"));
}


void MLInstanceNormalizationOptions_set_epsilon(MLInstanceNormalizationOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "epsilon", value);
}


MLInputOperandLayout MLInstanceNormalizationOptions_layout(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void MLInstanceNormalizationOptions_set_layout(MLInstanceNormalizationOptions* self, const MLInputOperandLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}

DEFINE_EMLITE_TYPE(MLLayerNormalizationOptions, em_Val);


MLOperand MLLayerNormalizationOptions_scale(const MLLayerNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "scale"));
}


void MLLayerNormalizationOptions_set_scale(MLLayerNormalizationOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "scale", value);
}


MLOperand MLLayerNormalizationOptions_bias(const MLLayerNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLLayerNormalizationOptions_set_bias(MLLayerNormalizationOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}


jb_Sequence MLLayerNormalizationOptions_axes(const MLLayerNormalizationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "axes"));
}


void MLLayerNormalizationOptions_set_axes(MLLayerNormalizationOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "axes", value);
}


double MLLayerNormalizationOptions_epsilon(const MLLayerNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "epsilon"));
}


void MLLayerNormalizationOptions_set_epsilon(MLLayerNormalizationOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "epsilon", value);
}

DEFINE_EMLITE_TYPE(MLLeakyReluOptions, em_Val);


double MLLeakyReluOptions_alpha(const MLLeakyReluOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "alpha"));
}


void MLLeakyReluOptions_set_alpha(MLLeakyReluOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "alpha", value);
}

DEFINE_EMLITE_TYPE(MLLinearOptions, em_Val);


double MLLinearOptions_alpha(const MLLinearOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "alpha"));
}


void MLLinearOptions_set_alpha(MLLinearOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "alpha", value);
}


double MLLinearOptions_beta(const MLLinearOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "beta"));
}


void MLLinearOptions_set_beta(MLLinearOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "beta", value);
}

DEFINE_EMLITE_TYPE(MLLstmOptions, em_Val);


MLOperand MLLstmOptions_bias(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLLstmOptions_set_bias(MLLstmOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}


MLOperand MLLstmOptions_recurrentBias(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "recurrentBias"));
}


void MLLstmOptions_set_recurrentBias(MLLstmOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "recurrentBias", value);
}


MLOperand MLLstmOptions_peepholeWeight(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "peepholeWeight"));
}


void MLLstmOptions_set_peepholeWeight(MLLstmOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "peepholeWeight", value);
}


MLOperand MLLstmOptions_initialHiddenState(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "initialHiddenState"));
}


void MLLstmOptions_set_initialHiddenState(MLLstmOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "initialHiddenState", value);
}


MLOperand MLLstmOptions_initialCellState(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "initialCellState"));
}


void MLLstmOptions_set_initialCellState(MLLstmOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "initialCellState", value);
}


bool MLLstmOptions_returnSequence(const MLLstmOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "returnSequence"));
}


void MLLstmOptions_set_returnSequence(MLLstmOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "returnSequence", value);
}


MLRecurrentNetworkDirection MLLstmOptions_direction(const MLLstmOptions *self) {
    return em_Val_as(MLRecurrentNetworkDirection, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


void MLLstmOptions_set_direction(MLLstmOptions* self, const MLRecurrentNetworkDirection* value) {
    em_Val_set(em_Val_as_val(self->inner), "direction", value);
}


MLLstmWeightLayout MLLstmOptions_layout(const MLLstmOptions *self) {
    return em_Val_as(MLLstmWeightLayout, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void MLLstmOptions_set_layout(MLLstmOptions* self, const MLLstmWeightLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}


jb_Sequence MLLstmOptions_activations(const MLLstmOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "activations"));
}


void MLLstmOptions_set_activations(MLLstmOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "activations", value);
}

DEFINE_EMLITE_TYPE(MLLstmCellOptions, em_Val);


MLOperand MLLstmCellOptions_bias(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "bias"));
}


void MLLstmCellOptions_set_bias(MLLstmCellOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "bias", value);
}


MLOperand MLLstmCellOptions_recurrentBias(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "recurrentBias"));
}


void MLLstmCellOptions_set_recurrentBias(MLLstmCellOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "recurrentBias", value);
}


MLOperand MLLstmCellOptions_peepholeWeight(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(em_Val_as_val(self->inner), "peepholeWeight"));
}


void MLLstmCellOptions_set_peepholeWeight(MLLstmCellOptions* self, const MLOperand* value) {
    em_Val_set(em_Val_as_val(self->inner), "peepholeWeight", value);
}


MLLstmWeightLayout MLLstmCellOptions_layout(const MLLstmCellOptions *self) {
    return em_Val_as(MLLstmWeightLayout, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void MLLstmCellOptions_set_layout(MLLstmCellOptions* self, const MLLstmWeightLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}


jb_Sequence MLLstmCellOptions_activations(const MLLstmCellOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "activations"));
}


void MLLstmCellOptions_set_activations(MLLstmCellOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "activations", value);
}

DEFINE_EMLITE_TYPE(MLPadOptions, em_Val);


MLPaddingMode MLPadOptions_mode(const MLPadOptions *self) {
    return em_Val_as(MLPaddingMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void MLPadOptions_set_mode(MLPadOptions* self, const MLPaddingMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}


jb_Any MLPadOptions_value(const MLPadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void MLPadOptions_set_value(MLPadOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}

DEFINE_EMLITE_TYPE(MLPool2dOptions, em_Val);


jb_Sequence MLPool2dOptions_windowDimensions(const MLPool2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "windowDimensions"));
}


void MLPool2dOptions_set_windowDimensions(MLPool2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "windowDimensions", value);
}


jb_Sequence MLPool2dOptions_padding(const MLPool2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "padding"));
}


void MLPool2dOptions_set_padding(MLPool2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "padding", value);
}


jb_Sequence MLPool2dOptions_strides(const MLPool2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "strides"));
}


void MLPool2dOptions_set_strides(MLPool2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "strides", value);
}


jb_Sequence MLPool2dOptions_dilations(const MLPool2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "dilations"));
}


void MLPool2dOptions_set_dilations(MLPool2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "dilations", value);
}


MLInputOperandLayout MLPool2dOptions_layout(const MLPool2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void MLPool2dOptions_set_layout(MLPool2dOptions* self, const MLInputOperandLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}


MLRoundingType MLPool2dOptions_roundingType(const MLPool2dOptions *self) {
    return em_Val_as(MLRoundingType, em_Val_get(em_Val_as_val(self->inner), "roundingType"));
}


void MLPool2dOptions_set_roundingType(MLPool2dOptions* self, const MLRoundingType* value) {
    em_Val_set(em_Val_as_val(self->inner), "roundingType", value);
}


jb_Sequence MLPool2dOptions_outputSizes(const MLPool2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "outputSizes"));
}


void MLPool2dOptions_set_outputSizes(MLPool2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputSizes", value);
}

DEFINE_EMLITE_TYPE(MLReduceOptions, em_Val);


jb_Sequence MLReduceOptions_axes(const MLReduceOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "axes"));
}


void MLReduceOptions_set_axes(MLReduceOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "axes", value);
}


bool MLReduceOptions_keepDimensions(const MLReduceOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "keepDimensions"));
}


void MLReduceOptions_set_keepDimensions(MLReduceOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "keepDimensions", value);
}

DEFINE_EMLITE_TYPE(MLResample2dOptions, em_Val);


MLInterpolationMode MLResample2dOptions_mode(const MLResample2dOptions *self) {
    return em_Val_as(MLInterpolationMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void MLResample2dOptions_set_mode(MLResample2dOptions* self, const MLInterpolationMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}


jb_Sequence MLResample2dOptions_scales(const MLResample2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "scales"));
}


void MLResample2dOptions_set_scales(MLResample2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "scales", value);
}


jb_Sequence MLResample2dOptions_sizes(const MLResample2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "sizes"));
}


void MLResample2dOptions_set_sizes(MLResample2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "sizes", value);
}


jb_Sequence MLResample2dOptions_axes(const MLResample2dOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "axes"));
}


void MLResample2dOptions_set_axes(MLResample2dOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "axes", value);
}

DEFINE_EMLITE_TYPE(MLReverseOptions, em_Val);


jb_Sequence MLReverseOptions_axes(const MLReverseOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "axes"));
}


void MLReverseOptions_set_axes(MLReverseOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "axes", value);
}

DEFINE_EMLITE_TYPE(MLScatterOptions, em_Val);


unsigned long MLScatterOptions_axis(const MLScatterOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "axis"));
}


void MLScatterOptions_set_axis(MLScatterOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "axis", value);
}

DEFINE_EMLITE_TYPE(MLSliceOptions, em_Val);


jb_Sequence MLSliceOptions_strides(const MLSliceOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "strides"));
}


void MLSliceOptions_set_strides(MLSliceOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "strides", value);
}

DEFINE_EMLITE_TYPE(MLSplitOptions, em_Val);


unsigned long MLSplitOptions_axis(const MLSplitOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "axis"));
}


void MLSplitOptions_set_axis(MLSplitOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "axis", value);
}

DEFINE_EMLITE_TYPE(MLTransposeOptions, em_Val);


jb_Sequence MLTransposeOptions_permutation(const MLTransposeOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "permutation"));
}


void MLTransposeOptions_set_permutation(MLTransposeOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "permutation", value);
}

DEFINE_EMLITE_TYPE(MLTriangularOptions, em_Val);


bool MLTriangularOptions_upper(const MLTriangularOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "upper"));
}


void MLTriangularOptions_set_upper(MLTriangularOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "upper", value);
}


long MLTriangularOptions_diagonal(const MLTriangularOptions *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "diagonal"));
}


void MLTriangularOptions_set_diagonal(MLTriangularOptions* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "diagonal", value);
}

DEFINE_EMLITE_TYPE(MLGraphBuilder, em_Val);


MLGraphBuilder MLGraphBuilder_new(const MLContext* context) : em_Val(em_Val_global("MLGraphBuilder").new_(em_Val_from(context))) {
        return MLGraphBuilder(em_Val_new(em_Val_global("MLGraphBuilder", em_Val_from(context)));
      }


MLOperand MLGraphBuilder_input(MLGraphBuilder* self , const jb_USVString* name, const MLOperandDescriptor* descriptor) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "input", em_Val_from(name), em_Val_from(descriptor)));
}


MLOperand MLGraphBuilder_constant(MLGraphBuilder* self , const MLTensor* tensor) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "constant", em_Val_from(tensor)));
}


jb_Promise MLGraphBuilder_build(MLGraphBuilder* self , const jb_Any* outputs) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "build", em_Val_from(outputs)));
}


MLOperand MLGraphBuilder_argMin(MLGraphBuilder* self , const MLOperand* input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMin", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_argMin(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLArgMinMaxOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMin", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_argMax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMax", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_argMax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLArgMinMaxOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "argMax", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_batchNormalization(MLGraphBuilder* self , const MLOperand* input, const MLOperand* mean, const MLOperand* variance) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "batchNormalization", em_Val_from(input), em_Val_from(mean), em_Val_from(variance)));
}


MLOperand MLGraphBuilder_batchNormalization(MLGraphBuilder* self , const MLOperand* input, const MLOperand* mean, const MLOperand* variance, const MLBatchNormalizationOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "batchNormalization", em_Val_from(input), em_Val_from(mean), em_Val_from(variance), em_Val_from(options)));
}


MLOperand MLGraphBuilder_cast(MLGraphBuilder* self , const MLOperand* input, const MLOperandDataType* type) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cast", em_Val_from(input), em_Val_from(type)));
}


MLOperand MLGraphBuilder_cast(MLGraphBuilder* self , const MLOperand* input, const MLOperandDataType* type, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cast", em_Val_from(input), em_Val_from(type), em_Val_from(options)));
}


MLOperand MLGraphBuilder_clamp(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "clamp", em_Val_from(input)));
}


MLOperand MLGraphBuilder_clamp(MLGraphBuilder* self , const MLOperand* input, const MLClampOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "clamp", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_concat(MLGraphBuilder* self , const jb_Sequence* inputs, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "concat", em_Val_from(inputs), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_concat(MLGraphBuilder* self , const jb_Sequence* inputs, unsigned long axis, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "concat", em_Val_from(inputs), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_conv2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "conv2d", em_Val_from(input), em_Val_from(filter)));
}


MLOperand MLGraphBuilder_conv2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter, const MLConv2dOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "conv2d", em_Val_from(input), em_Val_from(filter), em_Val_from(options)));
}


MLOperand MLGraphBuilder_convTranspose2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "convTranspose2d", em_Val_from(input), em_Val_from(filter)));
}


MLOperand MLGraphBuilder_convTranspose2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter, const MLConvTranspose2dOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "convTranspose2d", em_Val_from(input), em_Val_from(filter), em_Val_from(options)));
}


MLOperand MLGraphBuilder_cumulativeSum(MLGraphBuilder* self , const MLOperand* input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cumulativeSum", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_cumulativeSum(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLCumulativeSumOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cumulativeSum", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_add(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_add(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sub(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sub", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_sub(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sub", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_mul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "mul", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_mul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "mul", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_div(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "div", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_div(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "div", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_max(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "max", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_max(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "max", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_min(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "min", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_min(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "min", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_pow(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pow", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_pow(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pow", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_equal(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "equal", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_equal(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "equal", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_notEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "notEqual", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_notEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "notEqual", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_greater(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greater", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_greater(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greater", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_greaterOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greaterOrEqual", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_greaterOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "greaterOrEqual", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_lesser(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesser", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_lesser(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesser", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_lesserOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesserOrEqual", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_lesserOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "lesserOrEqual", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalNot(MLGraphBuilder* self , const MLOperand* a) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalNot", em_Val_from(a)));
}


MLOperand MLGraphBuilder_logicalNot(MLGraphBuilder* self , const MLOperand* a, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalNot", em_Val_from(a), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalAnd(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalAnd", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_logicalAnd(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalAnd", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalOr(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalOr", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_logicalOr(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalOr", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_logicalXor(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalXor", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_logicalXor(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "logicalXor", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_abs(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "abs", em_Val_from(input)));
}


MLOperand MLGraphBuilder_abs(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "abs", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_ceil(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "ceil", em_Val_from(input)));
}


MLOperand MLGraphBuilder_ceil(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "ceil", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_cos(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cos", em_Val_from(input)));
}


MLOperand MLGraphBuilder_cos(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "cos", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_erf(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "erf", em_Val_from(input)));
}


MLOperand MLGraphBuilder_erf(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "erf", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_exp(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "exp", em_Val_from(input)));
}


MLOperand MLGraphBuilder_exp(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "exp", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_floor(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "floor", em_Val_from(input)));
}


MLOperand MLGraphBuilder_floor(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "floor", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_identity(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "identity", em_Val_from(input)));
}


MLOperand MLGraphBuilder_identity(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "identity", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_log(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "log", em_Val_from(input)));
}


MLOperand MLGraphBuilder_log(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "log", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_neg(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "neg", em_Val_from(input)));
}


MLOperand MLGraphBuilder_neg(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "neg", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reciprocal(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reciprocal", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reciprocal(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reciprocal", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sin(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sin", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sin(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sin", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sign(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sign", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sign(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sign", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sqrt(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sqrt", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sqrt(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sqrt", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_tan(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tan", em_Val_from(input)));
}


MLOperand MLGraphBuilder_tan(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tan", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_dequantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "dequantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint)));
}


MLOperand MLGraphBuilder_dequantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "dequantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint), em_Val_from(options)));
}


MLOperand MLGraphBuilder_quantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "quantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint)));
}


MLOperand MLGraphBuilder_quantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "quantizeLinear", em_Val_from(input), em_Val_from(scale), em_Val_from(zeroPoint), em_Val_from(options)));
}


MLOperand MLGraphBuilder_elu(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "elu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_elu(MLGraphBuilder* self , const MLOperand* input, const MLEluOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "elu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_expand(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "expand", em_Val_from(input), em_Val_from(newShape)));
}


MLOperand MLGraphBuilder_expand(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "expand", em_Val_from(input), em_Val_from(newShape), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gather(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gather", em_Val_from(input), em_Val_from(indices)));
}


MLOperand MLGraphBuilder_gather(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLGatherOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gather", em_Val_from(input), em_Val_from(indices), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gatherElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherElements", em_Val_from(input), em_Val_from(indices)));
}


MLOperand MLGraphBuilder_gatherElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLGatherOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherElements", em_Val_from(input), em_Val_from(indices), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gatherND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherND", em_Val_from(input), em_Val_from(indices)));
}


MLOperand MLGraphBuilder_gatherND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gatherND", em_Val_from(input), em_Val_from(indices), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gelu(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gelu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_gelu(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gelu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gemm(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gemm", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_gemm(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLGemmOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gemm", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


jb_Sequence MLGraphBuilder_gru(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "gru", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize)));
}


jb_Sequence MLGraphBuilder_gru(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLGruOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "gru", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize), em_Val_from(options)));
}


MLOperand MLGraphBuilder_gruCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, unsigned long hiddenSize) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gruCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(hiddenSize)));
}


MLOperand MLGraphBuilder_gruCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, unsigned long hiddenSize, const MLGruCellOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "gruCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(hiddenSize), em_Val_from(options)));
}


MLOperand MLGraphBuilder_hardSigmoid(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSigmoid", em_Val_from(input)));
}


MLOperand MLGraphBuilder_hardSigmoid(MLGraphBuilder* self , const MLOperand* input, const MLHardSigmoidOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSigmoid", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_hardSwish(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSwish", em_Val_from(input)));
}


MLOperand MLGraphBuilder_hardSwish(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "hardSwish", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_instanceNormalization(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "instanceNormalization", em_Val_from(input)));
}


MLOperand MLGraphBuilder_instanceNormalization(MLGraphBuilder* self , const MLOperand* input, const MLInstanceNormalizationOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "instanceNormalization", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_layerNormalization(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "layerNormalization", em_Val_from(input)));
}


MLOperand MLGraphBuilder_layerNormalization(MLGraphBuilder* self , const MLOperand* input, const MLLayerNormalizationOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "layerNormalization", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_leakyRelu(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "leakyRelu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_leakyRelu(MLGraphBuilder* self , const MLOperand* input, const MLLeakyReluOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "leakyRelu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_linear(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "linear", em_Val_from(input)));
}


MLOperand MLGraphBuilder_linear(MLGraphBuilder* self , const MLOperand* input, const MLLinearOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "linear", em_Val_from(input), em_Val_from(options)));
}


jb_Sequence MLGraphBuilder_lstm(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "lstm", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize)));
}


jb_Sequence MLGraphBuilder_lstm(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLLstmOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "lstm", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(steps), em_Val_from(hiddenSize), em_Val_from(options)));
}


jb_Sequence MLGraphBuilder_lstmCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, const MLOperand* cellState, unsigned long hiddenSize) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "lstmCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(cellState), em_Val_from(hiddenSize)));
}


jb_Sequence MLGraphBuilder_lstmCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, const MLOperand* cellState, unsigned long hiddenSize, const MLLstmCellOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "lstmCell", em_Val_from(input), em_Val_from(weight), em_Val_from(recurrentWeight), em_Val_from(hiddenState), em_Val_from(cellState), em_Val_from(hiddenSize), em_Val_from(options)));
}


MLOperand MLGraphBuilder_matmul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "matmul", em_Val_from(a), em_Val_from(b)));
}


MLOperand MLGraphBuilder_matmul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "matmul", em_Val_from(a), em_Val_from(b), em_Val_from(options)));
}


MLOperand MLGraphBuilder_pad(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* beginningPadding, const jb_Sequence* endingPadding) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pad", em_Val_from(input), em_Val_from(beginningPadding), em_Val_from(endingPadding)));
}


MLOperand MLGraphBuilder_pad(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* beginningPadding, const jb_Sequence* endingPadding, const MLPadOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "pad", em_Val_from(input), em_Val_from(beginningPadding), em_Val_from(endingPadding), em_Val_from(options)));
}


MLOperand MLGraphBuilder_averagePool2d(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "averagePool2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_averagePool2d(MLGraphBuilder* self , const MLOperand* input, const MLPool2dOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "averagePool2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_l2Pool2d(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "l2Pool2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_l2Pool2d(MLGraphBuilder* self , const MLOperand* input, const MLPool2dOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "l2Pool2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_maxPool2d(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "maxPool2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_maxPool2d(MLGraphBuilder* self , const MLOperand* input, const MLPool2dOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "maxPool2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_prelu(MLGraphBuilder* self , const MLOperand* input, const MLOperand* slope) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "prelu", em_Val_from(input), em_Val_from(slope)));
}


MLOperand MLGraphBuilder_prelu(MLGraphBuilder* self , const MLOperand* input, const MLOperand* slope, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "prelu", em_Val_from(input), em_Val_from(slope), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceL1(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL1", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceL1(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL1", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceL2(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL2", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceL2(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceL2", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceLogSum(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSum", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceLogSum(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSum", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceLogSumExp(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSumExp", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceLogSumExp(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceLogSumExp", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceMax(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMax", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceMax(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMax", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceMean(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMean", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceMean(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMean", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceMin(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMin", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceMin(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceMin", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceProduct(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceProduct", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceProduct(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceProduct", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceSum(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSum", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceSum(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSum", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reduceSumSquare(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSumSquare", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reduceSumSquare(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reduceSumSquare", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_relu(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "relu", em_Val_from(input)));
}


MLOperand MLGraphBuilder_relu(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "relu", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_resample2d(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "resample2d", em_Val_from(input)));
}


MLOperand MLGraphBuilder_resample2d(MLGraphBuilder* self , const MLOperand* input, const MLResample2dOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "resample2d", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reshape(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reshape", em_Val_from(input), em_Val_from(newShape)));
}


MLOperand MLGraphBuilder_reshape(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reshape", em_Val_from(input), em_Val_from(newShape), em_Val_from(options)));
}


MLOperand MLGraphBuilder_reverse(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reverse", em_Val_from(input)));
}


MLOperand MLGraphBuilder_reverse(MLGraphBuilder* self , const MLOperand* input, const MLReverseOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "reverse", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_scatterElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterElements", em_Val_from(input), em_Val_from(indices), em_Val_from(updates)));
}


MLOperand MLGraphBuilder_scatterElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates, const MLScatterOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterElements", em_Val_from(input), em_Val_from(indices), em_Val_from(updates), em_Val_from(options)));
}


MLOperand MLGraphBuilder_scatterND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterND", em_Val_from(input), em_Val_from(indices), em_Val_from(updates)));
}


MLOperand MLGraphBuilder_scatterND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "scatterND", em_Val_from(input), em_Val_from(indices), em_Val_from(updates), em_Val_from(options)));
}


MLOperand MLGraphBuilder_sigmoid(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sigmoid", em_Val_from(input)));
}


MLOperand MLGraphBuilder_sigmoid(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "sigmoid", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_slice(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* starts, const jb_Sequence* sizes) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(input), em_Val_from(starts), em_Val_from(sizes)));
}


MLOperand MLGraphBuilder_slice(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* starts, const jb_Sequence* sizes, const MLSliceOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(input), em_Val_from(starts), em_Val_from(sizes), em_Val_from(options)));
}


MLOperand MLGraphBuilder_softmax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softmax", em_Val_from(input), em_Val_from(axis)));
}


MLOperand MLGraphBuilder_softmax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softmax", em_Val_from(input), em_Val_from(axis), em_Val_from(options)));
}


MLOperand MLGraphBuilder_softplus(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softplus", em_Val_from(input)));
}


MLOperand MLGraphBuilder_softplus(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softplus", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_softsign(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softsign", em_Val_from(input)));
}


MLOperand MLGraphBuilder_softsign(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "softsign", em_Val_from(input), em_Val_from(options)));
}


jb_Sequence MLGraphBuilder_split(MLGraphBuilder* self , const MLOperand* input, const jb_Any* splits) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "split", em_Val_from(input), em_Val_from(splits)));
}


jb_Sequence MLGraphBuilder_split(MLGraphBuilder* self , const MLOperand* input, const jb_Any* splits, const MLSplitOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "split", em_Val_from(input), em_Val_from(splits), em_Val_from(options)));
}


MLOperand MLGraphBuilder_tanh(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tanh", em_Val_from(input)));
}


MLOperand MLGraphBuilder_tanh(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tanh", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_tile(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* repetitions) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tile", em_Val_from(input), em_Val_from(repetitions)));
}


MLOperand MLGraphBuilder_tile(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* repetitions, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "tile", em_Val_from(input), em_Val_from(repetitions), em_Val_from(options)));
}


MLOperand MLGraphBuilder_transpose(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "transpose", em_Val_from(input)));
}


MLOperand MLGraphBuilder_transpose(MLGraphBuilder* self , const MLOperand* input, const MLTransposeOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "transpose", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_triangular(MLGraphBuilder* self , const MLOperand* input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "triangular", em_Val_from(input)));
}


MLOperand MLGraphBuilder_triangular(MLGraphBuilder* self , const MLOperand* input, const MLTriangularOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "triangular", em_Val_from(input), em_Val_from(options)));
}


MLOperand MLGraphBuilder_where(MLGraphBuilder* self , const MLOperand* condition, const MLOperand* trueValue, const MLOperand* falseValue) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "where", em_Val_from(condition), em_Val_from(trueValue), em_Val_from(falseValue)));
}


MLOperand MLGraphBuilder_where(MLGraphBuilder* self , const MLOperand* condition, const MLOperand* trueValue, const MLOperand* falseValue, const MLOperatorOptions* options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "where", em_Val_from(condition), em_Val_from(trueValue), em_Val_from(falseValue), em_Val_from(options)));
}

