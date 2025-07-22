#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MLContext.h"
#include "enums.h"

typedef struct MLOperand MLOperand;
typedef struct MLTensor MLTensor;
typedef struct MLGraph MLGraph;
typedef struct MLArgMinMaxOptions MLArgMinMaxOptions;
typedef struct MLBatchNormalizationOptions MLBatchNormalizationOptions;
typedef struct MLOperatorOptions MLOperatorOptions;
typedef struct MLClampOptions MLClampOptions;
typedef struct MLConv2dOptions MLConv2dOptions;
typedef struct MLConvTranspose2dOptions MLConvTranspose2dOptions;
typedef struct MLCumulativeSumOptions MLCumulativeSumOptions;
typedef struct MLEluOptions MLEluOptions;
typedef struct MLGatherOptions MLGatherOptions;
typedef struct MLGemmOptions MLGemmOptions;
typedef struct MLGruOptions MLGruOptions;
typedef struct MLGruCellOptions MLGruCellOptions;
typedef struct MLHardSigmoidOptions MLHardSigmoidOptions;
typedef struct MLInstanceNormalizationOptions MLInstanceNormalizationOptions;
typedef struct MLLayerNormalizationOptions MLLayerNormalizationOptions;
typedef struct MLLeakyReluOptions MLLeakyReluOptions;
typedef struct MLLinearOptions MLLinearOptions;
typedef struct MLLstmOptions MLLstmOptions;
typedef struct MLLstmCellOptions MLLstmCellOptions;
typedef struct MLPadOptions MLPadOptions;
typedef struct MLPool2dOptions MLPool2dOptions;
typedef struct MLReduceOptions MLReduceOptions;
typedef struct MLResample2dOptions MLResample2dOptions;
typedef struct MLReverseOptions MLReverseOptions;
typedef struct MLScatterOptions MLScatterOptions;
typedef struct MLSliceOptions MLSliceOptions;
typedef struct MLSplitOptions MLSplitOptions;
typedef struct MLTransposeOptions MLTransposeOptions;
typedef struct MLTriangularOptions MLTriangularOptions;


typedef struct {
  em_Val inner;
} MLArgMinMaxOptions;


DECLARE_EMLITE_TYPE(MLArgMinMaxOptions, em_Val);

bool MLArgMinMaxOptions_keepDimensions( const MLArgMinMaxOptions *self);

void MLArgMinMaxOptions_set_keepDimensions(MLArgMinMaxOptions* self, bool value);

MLOperandDataType MLArgMinMaxOptions_outputDataType( const MLArgMinMaxOptions *self);

void MLArgMinMaxOptions_set_outputDataType(MLArgMinMaxOptions* self, const MLOperandDataType* value);
typedef struct {
  em_Val inner;
} MLBatchNormalizationOptions;


DECLARE_EMLITE_TYPE(MLBatchNormalizationOptions, em_Val);

MLOperand MLBatchNormalizationOptions_scale( const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_scale(MLBatchNormalizationOptions* self, const MLOperand* value);

MLOperand MLBatchNormalizationOptions_bias( const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_bias(MLBatchNormalizationOptions* self, const MLOperand* value);

unsigned long MLBatchNormalizationOptions_axis( const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_axis(MLBatchNormalizationOptions* self, unsigned long value);

double MLBatchNormalizationOptions_epsilon( const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_epsilon(MLBatchNormalizationOptions* self, double value);
typedef struct {
  em_Val inner;
} MLOperatorOptions;


DECLARE_EMLITE_TYPE(MLOperatorOptions, em_Val);

jb_USVString MLOperatorOptions_label( const MLOperatorOptions *self);

void MLOperatorOptions_set_label(MLOperatorOptions* self, const jb_USVString* value);
typedef struct {
  em_Val inner;
} MLClampOptions;


DECLARE_EMLITE_TYPE(MLClampOptions, em_Val);

jb_Any MLClampOptions_minValue( const MLClampOptions *self);

void MLClampOptions_set_minValue(MLClampOptions* self, const jb_Any* value);

jb_Any MLClampOptions_maxValue( const MLClampOptions *self);

void MLClampOptions_set_maxValue(MLClampOptions* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} MLConv2dOptions;


DECLARE_EMLITE_TYPE(MLConv2dOptions, em_Val);

jb_Sequence MLConv2dOptions_padding( const MLConv2dOptions *self);

void MLConv2dOptions_set_padding(MLConv2dOptions* self, const jb_Sequence* value);

jb_Sequence MLConv2dOptions_strides( const MLConv2dOptions *self);

void MLConv2dOptions_set_strides(MLConv2dOptions* self, const jb_Sequence* value);

jb_Sequence MLConv2dOptions_dilations( const MLConv2dOptions *self);

void MLConv2dOptions_set_dilations(MLConv2dOptions* self, const jb_Sequence* value);

unsigned long MLConv2dOptions_groups( const MLConv2dOptions *self);

void MLConv2dOptions_set_groups(MLConv2dOptions* self, unsigned long value);

MLInputOperandLayout MLConv2dOptions_inputLayout( const MLConv2dOptions *self);

void MLConv2dOptions_set_inputLayout(MLConv2dOptions* self, const MLInputOperandLayout* value);

MLConv2dFilterOperandLayout MLConv2dOptions_filterLayout( const MLConv2dOptions *self);

void MLConv2dOptions_set_filterLayout(MLConv2dOptions* self, const MLConv2dFilterOperandLayout* value);

MLOperand MLConv2dOptions_bias( const MLConv2dOptions *self);

void MLConv2dOptions_set_bias(MLConv2dOptions* self, const MLOperand* value);
typedef struct {
  em_Val inner;
} MLConvTranspose2dOptions;


DECLARE_EMLITE_TYPE(MLConvTranspose2dOptions, em_Val);

jb_Sequence MLConvTranspose2dOptions_padding( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_padding(MLConvTranspose2dOptions* self, const jb_Sequence* value);

jb_Sequence MLConvTranspose2dOptions_strides( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_strides(MLConvTranspose2dOptions* self, const jb_Sequence* value);

jb_Sequence MLConvTranspose2dOptions_dilations( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_dilations(MLConvTranspose2dOptions* self, const jb_Sequence* value);

jb_Sequence MLConvTranspose2dOptions_outputPadding( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_outputPadding(MLConvTranspose2dOptions* self, const jb_Sequence* value);

jb_Sequence MLConvTranspose2dOptions_outputSizes( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_outputSizes(MLConvTranspose2dOptions* self, const jb_Sequence* value);

unsigned long MLConvTranspose2dOptions_groups( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_groups(MLConvTranspose2dOptions* self, unsigned long value);

MLInputOperandLayout MLConvTranspose2dOptions_inputLayout( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_inputLayout(MLConvTranspose2dOptions* self, const MLInputOperandLayout* value);

MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions_filterLayout( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_filterLayout(MLConvTranspose2dOptions* self, const MLConvTranspose2dFilterOperandLayout* value);

MLOperand MLConvTranspose2dOptions_bias( const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_bias(MLConvTranspose2dOptions* self, const MLOperand* value);
typedef struct {
  em_Val inner;
} MLCumulativeSumOptions;


DECLARE_EMLITE_TYPE(MLCumulativeSumOptions, em_Val);

bool MLCumulativeSumOptions_exclusive( const MLCumulativeSumOptions *self);

void MLCumulativeSumOptions_set_exclusive(MLCumulativeSumOptions* self, bool value);

bool MLCumulativeSumOptions_reversed( const MLCumulativeSumOptions *self);

void MLCumulativeSumOptions_set_reversed(MLCumulativeSumOptions* self, bool value);
typedef struct {
  em_Val inner;
} MLEluOptions;


DECLARE_EMLITE_TYPE(MLEluOptions, em_Val);

double MLEluOptions_alpha( const MLEluOptions *self);

void MLEluOptions_set_alpha(MLEluOptions* self, double value);
typedef struct {
  em_Val inner;
} MLGatherOptions;


DECLARE_EMLITE_TYPE(MLGatherOptions, em_Val);

unsigned long MLGatherOptions_axis( const MLGatherOptions *self);

void MLGatherOptions_set_axis(MLGatherOptions* self, unsigned long value);
typedef struct {
  em_Val inner;
} MLGemmOptions;


DECLARE_EMLITE_TYPE(MLGemmOptions, em_Val);

MLOperand MLGemmOptions_c( const MLGemmOptions *self);

void MLGemmOptions_set_c(MLGemmOptions* self, const MLOperand* value);

double MLGemmOptions_alpha( const MLGemmOptions *self);

void MLGemmOptions_set_alpha(MLGemmOptions* self, double value);

double MLGemmOptions_beta( const MLGemmOptions *self);

void MLGemmOptions_set_beta(MLGemmOptions* self, double value);

bool MLGemmOptions_aTranspose( const MLGemmOptions *self);

void MLGemmOptions_set_aTranspose(MLGemmOptions* self, bool value);

bool MLGemmOptions_bTranspose( const MLGemmOptions *self);

void MLGemmOptions_set_bTranspose(MLGemmOptions* self, bool value);
typedef struct {
  em_Val inner;
} MLGruOptions;


DECLARE_EMLITE_TYPE(MLGruOptions, em_Val);

MLOperand MLGruOptions_bias( const MLGruOptions *self);

void MLGruOptions_set_bias(MLGruOptions* self, const MLOperand* value);

MLOperand MLGruOptions_recurrentBias( const MLGruOptions *self);

void MLGruOptions_set_recurrentBias(MLGruOptions* self, const MLOperand* value);

MLOperand MLGruOptions_initialHiddenState( const MLGruOptions *self);

void MLGruOptions_set_initialHiddenState(MLGruOptions* self, const MLOperand* value);

bool MLGruOptions_resetAfter( const MLGruOptions *self);

void MLGruOptions_set_resetAfter(MLGruOptions* self, bool value);

bool MLGruOptions_returnSequence( const MLGruOptions *self);

void MLGruOptions_set_returnSequence(MLGruOptions* self, bool value);

MLRecurrentNetworkDirection MLGruOptions_direction( const MLGruOptions *self);

void MLGruOptions_set_direction(MLGruOptions* self, const MLRecurrentNetworkDirection* value);

MLGruWeightLayout MLGruOptions_layout( const MLGruOptions *self);

void MLGruOptions_set_layout(MLGruOptions* self, const MLGruWeightLayout* value);

jb_Sequence MLGruOptions_activations( const MLGruOptions *self);

void MLGruOptions_set_activations(MLGruOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLGruCellOptions;


DECLARE_EMLITE_TYPE(MLGruCellOptions, em_Val);

MLOperand MLGruCellOptions_bias( const MLGruCellOptions *self);

void MLGruCellOptions_set_bias(MLGruCellOptions* self, const MLOperand* value);

MLOperand MLGruCellOptions_recurrentBias( const MLGruCellOptions *self);

void MLGruCellOptions_set_recurrentBias(MLGruCellOptions* self, const MLOperand* value);

bool MLGruCellOptions_resetAfter( const MLGruCellOptions *self);

void MLGruCellOptions_set_resetAfter(MLGruCellOptions* self, bool value);

MLGruWeightLayout MLGruCellOptions_layout( const MLGruCellOptions *self);

void MLGruCellOptions_set_layout(MLGruCellOptions* self, const MLGruWeightLayout* value);

jb_Sequence MLGruCellOptions_activations( const MLGruCellOptions *self);

void MLGruCellOptions_set_activations(MLGruCellOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLHardSigmoidOptions;


DECLARE_EMLITE_TYPE(MLHardSigmoidOptions, em_Val);

double MLHardSigmoidOptions_alpha( const MLHardSigmoidOptions *self);

void MLHardSigmoidOptions_set_alpha(MLHardSigmoidOptions* self, double value);

double MLHardSigmoidOptions_beta( const MLHardSigmoidOptions *self);

void MLHardSigmoidOptions_set_beta(MLHardSigmoidOptions* self, double value);
typedef struct {
  em_Val inner;
} MLInstanceNormalizationOptions;


DECLARE_EMLITE_TYPE(MLInstanceNormalizationOptions, em_Val);

MLOperand MLInstanceNormalizationOptions_scale( const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_scale(MLInstanceNormalizationOptions* self, const MLOperand* value);

MLOperand MLInstanceNormalizationOptions_bias( const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_bias(MLInstanceNormalizationOptions* self, const MLOperand* value);

double MLInstanceNormalizationOptions_epsilon( const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_epsilon(MLInstanceNormalizationOptions* self, double value);

MLInputOperandLayout MLInstanceNormalizationOptions_layout( const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_layout(MLInstanceNormalizationOptions* self, const MLInputOperandLayout* value);
typedef struct {
  em_Val inner;
} MLLayerNormalizationOptions;


DECLARE_EMLITE_TYPE(MLLayerNormalizationOptions, em_Val);

MLOperand MLLayerNormalizationOptions_scale( const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_scale(MLLayerNormalizationOptions* self, const MLOperand* value);

MLOperand MLLayerNormalizationOptions_bias( const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_bias(MLLayerNormalizationOptions* self, const MLOperand* value);

jb_Sequence MLLayerNormalizationOptions_axes( const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_axes(MLLayerNormalizationOptions* self, const jb_Sequence* value);

double MLLayerNormalizationOptions_epsilon( const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_epsilon(MLLayerNormalizationOptions* self, double value);
typedef struct {
  em_Val inner;
} MLLeakyReluOptions;


DECLARE_EMLITE_TYPE(MLLeakyReluOptions, em_Val);

double MLLeakyReluOptions_alpha( const MLLeakyReluOptions *self);

void MLLeakyReluOptions_set_alpha(MLLeakyReluOptions* self, double value);
typedef struct {
  em_Val inner;
} MLLinearOptions;


DECLARE_EMLITE_TYPE(MLLinearOptions, em_Val);

double MLLinearOptions_alpha( const MLLinearOptions *self);

void MLLinearOptions_set_alpha(MLLinearOptions* self, double value);

double MLLinearOptions_beta( const MLLinearOptions *self);

void MLLinearOptions_set_beta(MLLinearOptions* self, double value);
typedef struct {
  em_Val inner;
} MLLstmOptions;


DECLARE_EMLITE_TYPE(MLLstmOptions, em_Val);

MLOperand MLLstmOptions_bias( const MLLstmOptions *self);

void MLLstmOptions_set_bias(MLLstmOptions* self, const MLOperand* value);

MLOperand MLLstmOptions_recurrentBias( const MLLstmOptions *self);

void MLLstmOptions_set_recurrentBias(MLLstmOptions* self, const MLOperand* value);

MLOperand MLLstmOptions_peepholeWeight( const MLLstmOptions *self);

void MLLstmOptions_set_peepholeWeight(MLLstmOptions* self, const MLOperand* value);

MLOperand MLLstmOptions_initialHiddenState( const MLLstmOptions *self);

void MLLstmOptions_set_initialHiddenState(MLLstmOptions* self, const MLOperand* value);

MLOperand MLLstmOptions_initialCellState( const MLLstmOptions *self);

void MLLstmOptions_set_initialCellState(MLLstmOptions* self, const MLOperand* value);

bool MLLstmOptions_returnSequence( const MLLstmOptions *self);

void MLLstmOptions_set_returnSequence(MLLstmOptions* self, bool value);

MLRecurrentNetworkDirection MLLstmOptions_direction( const MLLstmOptions *self);

void MLLstmOptions_set_direction(MLLstmOptions* self, const MLRecurrentNetworkDirection* value);

MLLstmWeightLayout MLLstmOptions_layout( const MLLstmOptions *self);

void MLLstmOptions_set_layout(MLLstmOptions* self, const MLLstmWeightLayout* value);

jb_Sequence MLLstmOptions_activations( const MLLstmOptions *self);

void MLLstmOptions_set_activations(MLLstmOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLLstmCellOptions;


DECLARE_EMLITE_TYPE(MLLstmCellOptions, em_Val);

MLOperand MLLstmCellOptions_bias( const MLLstmCellOptions *self);

void MLLstmCellOptions_set_bias(MLLstmCellOptions* self, const MLOperand* value);

MLOperand MLLstmCellOptions_recurrentBias( const MLLstmCellOptions *self);

void MLLstmCellOptions_set_recurrentBias(MLLstmCellOptions* self, const MLOperand* value);

MLOperand MLLstmCellOptions_peepholeWeight( const MLLstmCellOptions *self);

void MLLstmCellOptions_set_peepholeWeight(MLLstmCellOptions* self, const MLOperand* value);

MLLstmWeightLayout MLLstmCellOptions_layout( const MLLstmCellOptions *self);

void MLLstmCellOptions_set_layout(MLLstmCellOptions* self, const MLLstmWeightLayout* value);

jb_Sequence MLLstmCellOptions_activations( const MLLstmCellOptions *self);

void MLLstmCellOptions_set_activations(MLLstmCellOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLPadOptions;


DECLARE_EMLITE_TYPE(MLPadOptions, em_Val);

MLPaddingMode MLPadOptions_mode( const MLPadOptions *self);

void MLPadOptions_set_mode(MLPadOptions* self, const MLPaddingMode* value);

jb_Any MLPadOptions_value( const MLPadOptions *self);

void MLPadOptions_set_value(MLPadOptions* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} MLPool2dOptions;


DECLARE_EMLITE_TYPE(MLPool2dOptions, em_Val);

jb_Sequence MLPool2dOptions_windowDimensions( const MLPool2dOptions *self);

void MLPool2dOptions_set_windowDimensions(MLPool2dOptions* self, const jb_Sequence* value);

jb_Sequence MLPool2dOptions_padding( const MLPool2dOptions *self);

void MLPool2dOptions_set_padding(MLPool2dOptions* self, const jb_Sequence* value);

jb_Sequence MLPool2dOptions_strides( const MLPool2dOptions *self);

void MLPool2dOptions_set_strides(MLPool2dOptions* self, const jb_Sequence* value);

jb_Sequence MLPool2dOptions_dilations( const MLPool2dOptions *self);

void MLPool2dOptions_set_dilations(MLPool2dOptions* self, const jb_Sequence* value);

MLInputOperandLayout MLPool2dOptions_layout( const MLPool2dOptions *self);

void MLPool2dOptions_set_layout(MLPool2dOptions* self, const MLInputOperandLayout* value);

MLRoundingType MLPool2dOptions_roundingType( const MLPool2dOptions *self);

void MLPool2dOptions_set_roundingType(MLPool2dOptions* self, const MLRoundingType* value);

jb_Sequence MLPool2dOptions_outputSizes( const MLPool2dOptions *self);

void MLPool2dOptions_set_outputSizes(MLPool2dOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLReduceOptions;


DECLARE_EMLITE_TYPE(MLReduceOptions, em_Val);

jb_Sequence MLReduceOptions_axes( const MLReduceOptions *self);

void MLReduceOptions_set_axes(MLReduceOptions* self, const jb_Sequence* value);

bool MLReduceOptions_keepDimensions( const MLReduceOptions *self);

void MLReduceOptions_set_keepDimensions(MLReduceOptions* self, bool value);
typedef struct {
  em_Val inner;
} MLResample2dOptions;


DECLARE_EMLITE_TYPE(MLResample2dOptions, em_Val);

MLInterpolationMode MLResample2dOptions_mode( const MLResample2dOptions *self);

void MLResample2dOptions_set_mode(MLResample2dOptions* self, const MLInterpolationMode* value);

jb_Sequence MLResample2dOptions_scales( const MLResample2dOptions *self);

void MLResample2dOptions_set_scales(MLResample2dOptions* self, const jb_Sequence* value);

jb_Sequence MLResample2dOptions_sizes( const MLResample2dOptions *self);

void MLResample2dOptions_set_sizes(MLResample2dOptions* self, const jb_Sequence* value);

jb_Sequence MLResample2dOptions_axes( const MLResample2dOptions *self);

void MLResample2dOptions_set_axes(MLResample2dOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLReverseOptions;


DECLARE_EMLITE_TYPE(MLReverseOptions, em_Val);

jb_Sequence MLReverseOptions_axes( const MLReverseOptions *self);

void MLReverseOptions_set_axes(MLReverseOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLScatterOptions;


DECLARE_EMLITE_TYPE(MLScatterOptions, em_Val);

unsigned long MLScatterOptions_axis( const MLScatterOptions *self);

void MLScatterOptions_set_axis(MLScatterOptions* self, unsigned long value);
typedef struct {
  em_Val inner;
} MLSliceOptions;


DECLARE_EMLITE_TYPE(MLSliceOptions, em_Val);

jb_Sequence MLSliceOptions_strides( const MLSliceOptions *self);

void MLSliceOptions_set_strides(MLSliceOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLSplitOptions;


DECLARE_EMLITE_TYPE(MLSplitOptions, em_Val);

unsigned long MLSplitOptions_axis( const MLSplitOptions *self);

void MLSplitOptions_set_axis(MLSplitOptions* self, unsigned long value);
typedef struct {
  em_Val inner;
} MLTransposeOptions;


DECLARE_EMLITE_TYPE(MLTransposeOptions, em_Val);

jb_Sequence MLTransposeOptions_permutation( const MLTransposeOptions *self);

void MLTransposeOptions_set_permutation(MLTransposeOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLTriangularOptions;


DECLARE_EMLITE_TYPE(MLTriangularOptions, em_Val);

bool MLTriangularOptions_upper( const MLTriangularOptions *self);

void MLTriangularOptions_set_upper(MLTriangularOptions* self, bool value);

long MLTriangularOptions_diagonal( const MLTriangularOptions *self);

void MLTriangularOptions_set_diagonal(MLTriangularOptions* self, long value);
typedef struct {
  em_Val inner;
} MLGraphBuilder;


DECLARE_EMLITE_TYPE(MLGraphBuilder, em_Val);

MLGraphBuilder MLGraphBuilder_new(const MLContext* context);

MLOperand MLGraphBuilder_input(MLGraphBuilder* self , const jb_USVString* name, const MLOperandDescriptor* descriptor);

MLOperand MLGraphBuilder_constant(MLGraphBuilder* self , const MLTensor* tensor);

jb_Promise MLGraphBuilder_build(MLGraphBuilder* self , const jb_Any* outputs);

MLOperand MLGraphBuilder_argMin(MLGraphBuilder* self , const MLOperand* input, unsigned long axis);

MLOperand MLGraphBuilder_argMin(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLArgMinMaxOptions* options);

MLOperand MLGraphBuilder_argMax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis);

MLOperand MLGraphBuilder_argMax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLArgMinMaxOptions* options);

MLOperand MLGraphBuilder_batchNormalization(MLGraphBuilder* self , const MLOperand* input, const MLOperand* mean, const MLOperand* variance);

MLOperand MLGraphBuilder_batchNormalization(MLGraphBuilder* self , const MLOperand* input, const MLOperand* mean, const MLOperand* variance, const MLBatchNormalizationOptions* options);

MLOperand MLGraphBuilder_cast(MLGraphBuilder* self , const MLOperand* input, const MLOperandDataType* type);

MLOperand MLGraphBuilder_cast(MLGraphBuilder* self , const MLOperand* input, const MLOperandDataType* type, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_clamp(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_clamp(MLGraphBuilder* self , const MLOperand* input, const MLClampOptions* options);

MLOperand MLGraphBuilder_concat(MLGraphBuilder* self , const jb_Sequence* inputs, unsigned long axis);

MLOperand MLGraphBuilder_concat(MLGraphBuilder* self , const jb_Sequence* inputs, unsigned long axis, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_conv2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter);

MLOperand MLGraphBuilder_conv2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter, const MLConv2dOptions* options);

MLOperand MLGraphBuilder_convTranspose2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter);

MLOperand MLGraphBuilder_convTranspose2d(MLGraphBuilder* self , const MLOperand* input, const MLOperand* filter, const MLConvTranspose2dOptions* options);

MLOperand MLGraphBuilder_cumulativeSum(MLGraphBuilder* self , const MLOperand* input, unsigned long axis);

MLOperand MLGraphBuilder_cumulativeSum(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLCumulativeSumOptions* options);

MLOperand MLGraphBuilder_add(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_add(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_sub(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_sub(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_mul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_mul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_div(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_div(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_max(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_max(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_min(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_min(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_pow(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_pow(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_equal(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_equal(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_notEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_notEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_greater(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_greater(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_greaterOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_greaterOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_lesser(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_lesser(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_lesserOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_lesserOrEqual(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_logicalNot(MLGraphBuilder* self , const MLOperand* a);

MLOperand MLGraphBuilder_logicalNot(MLGraphBuilder* self , const MLOperand* a, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_logicalAnd(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_logicalAnd(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_logicalOr(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_logicalOr(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_logicalXor(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_logicalXor(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_abs(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_abs(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_ceil(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_ceil(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_cos(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_cos(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_erf(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_erf(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_exp(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_exp(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_floor(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_floor(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_identity(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_identity(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_log(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_log(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_neg(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_neg(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_reciprocal(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reciprocal(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_sin(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_sin(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_sign(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_sign(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_sqrt(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_sqrt(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_tan(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_tan(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_dequantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint);

MLOperand MLGraphBuilder_dequantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_quantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint);

MLOperand MLGraphBuilder_quantizeLinear(MLGraphBuilder* self , const MLOperand* input, const MLOperand* scale, const MLOperand* zeroPoint, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_elu(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_elu(MLGraphBuilder* self , const MLOperand* input, const MLEluOptions* options);

MLOperand MLGraphBuilder_expand(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape);

MLOperand MLGraphBuilder_expand(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_gather(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices);

MLOperand MLGraphBuilder_gather(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLGatherOptions* options);

MLOperand MLGraphBuilder_gatherElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices);

MLOperand MLGraphBuilder_gatherElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLGatherOptions* options);

MLOperand MLGraphBuilder_gatherND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices);

MLOperand MLGraphBuilder_gatherND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_gelu(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_gelu(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_gemm(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_gemm(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLGemmOptions* options);

jb_Sequence MLGraphBuilder_gru(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize);

jb_Sequence MLGraphBuilder_gru(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLGruOptions* options);

MLOperand MLGraphBuilder_gruCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, unsigned long hiddenSize);

MLOperand MLGraphBuilder_gruCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, unsigned long hiddenSize, const MLGruCellOptions* options);

MLOperand MLGraphBuilder_hardSigmoid(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_hardSigmoid(MLGraphBuilder* self , const MLOperand* input, const MLHardSigmoidOptions* options);

MLOperand MLGraphBuilder_hardSwish(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_hardSwish(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_instanceNormalization(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_instanceNormalization(MLGraphBuilder* self , const MLOperand* input, const MLInstanceNormalizationOptions* options);

MLOperand MLGraphBuilder_layerNormalization(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_layerNormalization(MLGraphBuilder* self , const MLOperand* input, const MLLayerNormalizationOptions* options);

MLOperand MLGraphBuilder_leakyRelu(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_leakyRelu(MLGraphBuilder* self , const MLOperand* input, const MLLeakyReluOptions* options);

MLOperand MLGraphBuilder_linear(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_linear(MLGraphBuilder* self , const MLOperand* input, const MLLinearOptions* options);

jb_Sequence MLGraphBuilder_lstm(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize);

jb_Sequence MLGraphBuilder_lstm(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, unsigned long steps, unsigned long hiddenSize, const MLLstmOptions* options);

jb_Sequence MLGraphBuilder_lstmCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, const MLOperand* cellState, unsigned long hiddenSize);

jb_Sequence MLGraphBuilder_lstmCell(MLGraphBuilder* self , const MLOperand* input, const MLOperand* weight, const MLOperand* recurrentWeight, const MLOperand* hiddenState, const MLOperand* cellState, unsigned long hiddenSize, const MLLstmCellOptions* options);

MLOperand MLGraphBuilder_matmul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b);

MLOperand MLGraphBuilder_matmul(MLGraphBuilder* self , const MLOperand* a, const MLOperand* b, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_pad(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* beginningPadding, const jb_Sequence* endingPadding);

MLOperand MLGraphBuilder_pad(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* beginningPadding, const jb_Sequence* endingPadding, const MLPadOptions* options);

MLOperand MLGraphBuilder_averagePool2d(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_averagePool2d(MLGraphBuilder* self , const MLOperand* input, const MLPool2dOptions* options);

MLOperand MLGraphBuilder_l2Pool2d(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_l2Pool2d(MLGraphBuilder* self , const MLOperand* input, const MLPool2dOptions* options);

MLOperand MLGraphBuilder_maxPool2d(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_maxPool2d(MLGraphBuilder* self , const MLOperand* input, const MLPool2dOptions* options);

MLOperand MLGraphBuilder_prelu(MLGraphBuilder* self , const MLOperand* input, const MLOperand* slope);

MLOperand MLGraphBuilder_prelu(MLGraphBuilder* self , const MLOperand* input, const MLOperand* slope, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_reduceL1(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceL1(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceL2(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceL2(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceLogSum(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceLogSum(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceLogSumExp(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceLogSumExp(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceMax(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceMax(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceMean(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceMean(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceMin(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceMin(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceProduct(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceProduct(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceSum(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceSum(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_reduceSumSquare(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reduceSumSquare(MLGraphBuilder* self , const MLOperand* input, const MLReduceOptions* options);

MLOperand MLGraphBuilder_relu(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_relu(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_resample2d(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_resample2d(MLGraphBuilder* self , const MLOperand* input, const MLResample2dOptions* options);

MLOperand MLGraphBuilder_reshape(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape);

MLOperand MLGraphBuilder_reshape(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* newShape, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_reverse(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_reverse(MLGraphBuilder* self , const MLOperand* input, const MLReverseOptions* options);

MLOperand MLGraphBuilder_scatterElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates);

MLOperand MLGraphBuilder_scatterElements(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates, const MLScatterOptions* options);

MLOperand MLGraphBuilder_scatterND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates);

MLOperand MLGraphBuilder_scatterND(MLGraphBuilder* self , const MLOperand* input, const MLOperand* indices, const MLOperand* updates, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_sigmoid(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_sigmoid(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_slice(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* starts, const jb_Sequence* sizes);

MLOperand MLGraphBuilder_slice(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* starts, const jb_Sequence* sizes, const MLSliceOptions* options);

MLOperand MLGraphBuilder_softmax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis);

MLOperand MLGraphBuilder_softmax(MLGraphBuilder* self , const MLOperand* input, unsigned long axis, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_softplus(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_softplus(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_softsign(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_softsign(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

jb_Sequence MLGraphBuilder_split(MLGraphBuilder* self , const MLOperand* input, const jb_Any* splits);

jb_Sequence MLGraphBuilder_split(MLGraphBuilder* self , const MLOperand* input, const jb_Any* splits, const MLSplitOptions* options);

MLOperand MLGraphBuilder_tanh(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_tanh(MLGraphBuilder* self , const MLOperand* input, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_tile(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* repetitions);

MLOperand MLGraphBuilder_tile(MLGraphBuilder* self , const MLOperand* input, const jb_Sequence* repetitions, const MLOperatorOptions* options);

MLOperand MLGraphBuilder_transpose(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_transpose(MLGraphBuilder* self , const MLOperand* input, const MLTransposeOptions* options);

MLOperand MLGraphBuilder_triangular(MLGraphBuilder* self , const MLOperand* input);

MLOperand MLGraphBuilder_triangular(MLGraphBuilder* self , const MLOperand* input, const MLTriangularOptions* options);

MLOperand MLGraphBuilder_where(MLGraphBuilder* self , const MLOperand* condition, const MLOperand* trueValue, const MLOperand* falseValue);

MLOperand MLGraphBuilder_where(MLGraphBuilder* self , const MLOperand* condition, const MLOperand* trueValue, const MLOperand* falseValue, const MLOperatorOptions* options);
