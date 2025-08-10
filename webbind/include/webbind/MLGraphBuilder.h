#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLContext MLContext;
typedef struct MLOperand MLOperand;
typedef struct MLOperandDescriptor MLOperandDescriptor;
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

DECLARE_EMLITE_TYPE(MLGraphBuilder, em_Val);

MLGraphBuilder MLGraphBuilder_new(MLContext * context);

MLOperand MLGraphBuilder_input(MLGraphBuilder* self , jb_String * name, MLOperandDescriptor * descriptor);

MLOperand MLGraphBuilder_constant(MLGraphBuilder* self , MLTensor * tensor);

jb_Promise MLGraphBuilder_build(MLGraphBuilder* self , jb_Any * outputs);

MLOperand MLGraphBuilder_argMin0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_argMin1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options);

MLOperand MLGraphBuilder_argMax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_argMax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options);

MLOperand MLGraphBuilder_batchNormalization0(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance);

MLOperand MLGraphBuilder_batchNormalization1(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance, MLBatchNormalizationOptions * options);

MLOperand MLGraphBuilder_cast0(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type);

MLOperand MLGraphBuilder_cast1(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type, MLOperatorOptions * options);

MLOperand MLGraphBuilder_clamp0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_clamp1(MLGraphBuilder* self , MLOperand * input, MLClampOptions * options);

MLOperand MLGraphBuilder_concat0(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis);

MLOperand MLGraphBuilder_concat1(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis, MLOperatorOptions * options);

MLOperand MLGraphBuilder_conv2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter);

MLOperand MLGraphBuilder_conv2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConv2dOptions * options);

MLOperand MLGraphBuilder_convTranspose2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter);

MLOperand MLGraphBuilder_convTranspose2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConvTranspose2dOptions * options);

MLOperand MLGraphBuilder_cumulativeSum0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_cumulativeSum1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLCumulativeSumOptions * options);

MLOperand MLGraphBuilder_add0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_add1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sub0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_sub1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_mul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_mul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_div0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_div1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_max0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_max1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_min0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_min1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_pow0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_pow1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_equal0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_equal1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_notEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_notEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_greater0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_greater1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_greaterOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_greaterOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_lesser0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_lesser1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_lesserOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_lesserOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalNot0(MLGraphBuilder* self , MLOperand * a);

MLOperand MLGraphBuilder_logicalNot1(MLGraphBuilder* self , MLOperand * a, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalAnd0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_logicalAnd1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalOr0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_logicalOr1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalXor0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_logicalXor1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_abs0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_abs1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_ceil0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_ceil1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_cos0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_cos1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_erf0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_erf1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_exp0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_exp1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_floor0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_floor1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_identity0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_identity1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_log0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_log1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_neg0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_neg1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_reciprocal0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reciprocal1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sin0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sin1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sign0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sqrt0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sqrt1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_tan0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_tan1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_dequantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint);

MLOperand MLGraphBuilder_dequantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options);

MLOperand MLGraphBuilder_quantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint);

MLOperand MLGraphBuilder_quantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options);

MLOperand MLGraphBuilder_elu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_elu1(MLGraphBuilder* self , MLOperand * input, MLEluOptions * options);

MLOperand MLGraphBuilder_expand0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape);

MLOperand MLGraphBuilder_expand1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options);

MLOperand MLGraphBuilder_gather0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

MLOperand MLGraphBuilder_gather1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options);

MLOperand MLGraphBuilder_gatherElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

MLOperand MLGraphBuilder_gatherElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options);

MLOperand MLGraphBuilder_gatherND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

MLOperand MLGraphBuilder_gatherND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperatorOptions * options);

MLOperand MLGraphBuilder_gelu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_gelu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_gemm0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_gemm1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLGemmOptions * options);

jb_Array MLGraphBuilder_gru0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize);

jb_Array MLGraphBuilder_gru1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLGruOptions * options);

MLOperand MLGraphBuilder_gruCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize);

MLOperand MLGraphBuilder_gruCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize, MLGruCellOptions * options);

MLOperand MLGraphBuilder_hardSigmoid0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_hardSigmoid1(MLGraphBuilder* self , MLOperand * input, MLHardSigmoidOptions * options);

MLOperand MLGraphBuilder_hardSwish0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_hardSwish1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_instanceNormalization0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_instanceNormalization1(MLGraphBuilder* self , MLOperand * input, MLInstanceNormalizationOptions * options);

MLOperand MLGraphBuilder_layerNormalization0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_layerNormalization1(MLGraphBuilder* self , MLOperand * input, MLLayerNormalizationOptions * options);

MLOperand MLGraphBuilder_leakyRelu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_leakyRelu1(MLGraphBuilder* self , MLOperand * input, MLLeakyReluOptions * options);

MLOperand MLGraphBuilder_linear0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_linear1(MLGraphBuilder* self , MLOperand * input, MLLinearOptions * options);

jb_Array MLGraphBuilder_lstm0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize);

jb_Array MLGraphBuilder_lstm1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLLstmOptions * options);

jb_Array MLGraphBuilder_lstmCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize);

jb_Array MLGraphBuilder_lstmCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize, MLLstmCellOptions * options);

MLOperand MLGraphBuilder_matmul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_matmul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_pad0(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding);

MLOperand MLGraphBuilder_pad1(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding, MLPadOptions * options);

MLOperand MLGraphBuilder_averagePool2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_averagePool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

MLOperand MLGraphBuilder_l2Pool2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_l2Pool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

MLOperand MLGraphBuilder_maxPool2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_maxPool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

MLOperand MLGraphBuilder_prelu0(MLGraphBuilder* self , MLOperand * input, MLOperand * slope);

MLOperand MLGraphBuilder_prelu1(MLGraphBuilder* self , MLOperand * input, MLOperand * slope, MLOperatorOptions * options);

MLOperand MLGraphBuilder_reduceL10(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceL11(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceL20(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceL21(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceLogSum0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceLogSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceLogSumExp0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceLogSumExp1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceMax0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceMax1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceMean0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceMean1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceMin0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceMin1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceProduct0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceProduct1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceSum0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceSumSquare0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceSumSquare1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_relu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_relu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_resample2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_resample2d1(MLGraphBuilder* self , MLOperand * input, MLResample2dOptions * options);

MLOperand MLGraphBuilder_reshape0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape);

MLOperand MLGraphBuilder_reshape1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options);

MLOperand MLGraphBuilder_reverse0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reverse1(MLGraphBuilder* self , MLOperand * input, MLReverseOptions * options);

MLOperand MLGraphBuilder_scatterElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates);

MLOperand MLGraphBuilder_scatterElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLScatterOptions * options);

MLOperand MLGraphBuilder_scatterND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates);

MLOperand MLGraphBuilder_scatterND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sigmoid0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sigmoid1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_slice0(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes);

MLOperand MLGraphBuilder_slice1(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes, MLSliceOptions * options);

MLOperand MLGraphBuilder_softmax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_softmax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLOperatorOptions * options);

MLOperand MLGraphBuilder_softplus0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_softplus1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_softsign0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_softsign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

jb_Array MLGraphBuilder_split0(MLGraphBuilder* self , MLOperand * input, jb_Any * splits);

jb_Array MLGraphBuilder_split1(MLGraphBuilder* self , MLOperand * input, jb_Any * splits, MLSplitOptions * options);

MLOperand MLGraphBuilder_tanh0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_tanh1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_tile0(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions);

MLOperand MLGraphBuilder_tile1(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions, MLOperatorOptions * options);

MLOperand MLGraphBuilder_transpose0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_transpose1(MLGraphBuilder* self , MLOperand * input, MLTransposeOptions * options);

MLOperand MLGraphBuilder_triangular0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_triangular1(MLGraphBuilder* self , MLOperand * input, MLTriangularOptions * options);

MLOperand MLGraphBuilder_where0(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue);

MLOperand MLGraphBuilder_where1(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue, MLOperatorOptions * options);

#ifdef __cplusplus
}
#endif
