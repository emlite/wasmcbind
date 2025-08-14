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


/**
 * @brief Interface MLGraphBuilder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MLGraphBuilder)
 */
DECLARE_EMLITE_TYPE(MLGraphBuilder, em_Val);

/**
 * @brief Creates a new `MLGraphBuilder` object. 
*/
MLGraphBuilder MLGraphBuilder_new(MLContext * context);

/**
 * @brief Calls the `input` method. 
*/
MLOperand MLGraphBuilder_input(MLGraphBuilder* self , jb_String * name, MLOperandDescriptor * descriptor);

/**
 * @brief Calls the `constant` method. 
*/
MLOperand MLGraphBuilder_constant(MLGraphBuilder* self , MLTensor * tensor);

/**
 * @brief Calls the `build` method. 
*/
jb_Promise MLGraphBuilder_build(MLGraphBuilder* self , jb_Any * outputs);

/**
 * @brief Calls the `argMin` method. 
*/
MLOperand MLGraphBuilder_argMin0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

/**
 * @brief Calls the `argMin` method. 
*/
MLOperand MLGraphBuilder_argMin1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options);

/**
 * @brief Calls the `argMax` method. 
*/
MLOperand MLGraphBuilder_argMax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

/**
 * @brief Calls the `argMax` method. 
*/
MLOperand MLGraphBuilder_argMax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options);

/**
 * @brief Calls the `batchNormalization` method. 
*/
MLOperand MLGraphBuilder_batchNormalization0(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance);

/**
 * @brief Calls the `batchNormalization` method. 
*/
MLOperand MLGraphBuilder_batchNormalization1(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance, MLBatchNormalizationOptions * options);

/**
 * @brief Calls the `cast` method. 
*/
MLOperand MLGraphBuilder_cast0(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type);

/**
 * @brief Calls the `cast` method. 
*/
MLOperand MLGraphBuilder_cast1(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type, MLOperatorOptions * options);

/**
 * @brief Calls the `clamp` method. 
*/
MLOperand MLGraphBuilder_clamp0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `clamp` method. 
*/
MLOperand MLGraphBuilder_clamp1(MLGraphBuilder* self , MLOperand * input, MLClampOptions * options);

/**
 * @brief Calls the `concat` method. 
*/
MLOperand MLGraphBuilder_concat0(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis);

/**
 * @brief Calls the `concat` method. 
*/
MLOperand MLGraphBuilder_concat1(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis, MLOperatorOptions * options);

/**
 * @brief Calls the `conv2d` method. 
*/
MLOperand MLGraphBuilder_conv2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter);

/**
 * @brief Calls the `conv2d` method. 
*/
MLOperand MLGraphBuilder_conv2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConv2dOptions * options);

/**
 * @brief Calls the `convTranspose2d` method. 
*/
MLOperand MLGraphBuilder_convTranspose2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter);

/**
 * @brief Calls the `convTranspose2d` method. 
*/
MLOperand MLGraphBuilder_convTranspose2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConvTranspose2dOptions * options);

/**
 * @brief Calls the `cumulativeSum` method. 
*/
MLOperand MLGraphBuilder_cumulativeSum0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

/**
 * @brief Calls the `cumulativeSum` method. 
*/
MLOperand MLGraphBuilder_cumulativeSum1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLCumulativeSumOptions * options);

/**
 * @brief Calls the `add` method. 
*/
MLOperand MLGraphBuilder_add0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `add` method. 
*/
MLOperand MLGraphBuilder_add1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `sub` method. 
*/
MLOperand MLGraphBuilder_sub0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `sub` method. 
*/
MLOperand MLGraphBuilder_sub1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `mul` method. 
*/
MLOperand MLGraphBuilder_mul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `mul` method. 
*/
MLOperand MLGraphBuilder_mul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `div` method. 
*/
MLOperand MLGraphBuilder_div0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `div` method. 
*/
MLOperand MLGraphBuilder_div1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `max` method. 
*/
MLOperand MLGraphBuilder_max0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `max` method. 
*/
MLOperand MLGraphBuilder_max1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `min` method. 
*/
MLOperand MLGraphBuilder_min0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `min` method. 
*/
MLOperand MLGraphBuilder_min1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `pow` method. 
*/
MLOperand MLGraphBuilder_pow0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `pow` method. 
*/
MLOperand MLGraphBuilder_pow1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `equal` method. 
*/
MLOperand MLGraphBuilder_equal0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `equal` method. 
*/
MLOperand MLGraphBuilder_equal1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `notEqual` method. 
*/
MLOperand MLGraphBuilder_notEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `notEqual` method. 
*/
MLOperand MLGraphBuilder_notEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `greater` method. 
*/
MLOperand MLGraphBuilder_greater0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `greater` method. 
*/
MLOperand MLGraphBuilder_greater1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `greaterOrEqual` method. 
*/
MLOperand MLGraphBuilder_greaterOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `greaterOrEqual` method. 
*/
MLOperand MLGraphBuilder_greaterOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `lesser` method. 
*/
MLOperand MLGraphBuilder_lesser0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `lesser` method. 
*/
MLOperand MLGraphBuilder_lesser1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `lesserOrEqual` method. 
*/
MLOperand MLGraphBuilder_lesserOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `lesserOrEqual` method. 
*/
MLOperand MLGraphBuilder_lesserOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `logicalNot` method. 
*/
MLOperand MLGraphBuilder_logicalNot0(MLGraphBuilder* self , MLOperand * a);

/**
 * @brief Calls the `logicalNot` method. 
*/
MLOperand MLGraphBuilder_logicalNot1(MLGraphBuilder* self , MLOperand * a, MLOperatorOptions * options);

/**
 * @brief Calls the `logicalAnd` method. 
*/
MLOperand MLGraphBuilder_logicalAnd0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `logicalAnd` method. 
*/
MLOperand MLGraphBuilder_logicalAnd1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `logicalOr` method. 
*/
MLOperand MLGraphBuilder_logicalOr0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `logicalOr` method. 
*/
MLOperand MLGraphBuilder_logicalOr1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `logicalXor` method. 
*/
MLOperand MLGraphBuilder_logicalXor0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `logicalXor` method. 
*/
MLOperand MLGraphBuilder_logicalXor1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `abs` method. 
*/
MLOperand MLGraphBuilder_abs0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `abs` method. 
*/
MLOperand MLGraphBuilder_abs1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `ceil` method. 
*/
MLOperand MLGraphBuilder_ceil0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `ceil` method. 
*/
MLOperand MLGraphBuilder_ceil1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `cos` method. 
*/
MLOperand MLGraphBuilder_cos0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `cos` method. 
*/
MLOperand MLGraphBuilder_cos1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `erf` method. 
*/
MLOperand MLGraphBuilder_erf0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `erf` method. 
*/
MLOperand MLGraphBuilder_erf1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `exp` method. 
*/
MLOperand MLGraphBuilder_exp0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `exp` method. 
*/
MLOperand MLGraphBuilder_exp1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `floor` method. 
*/
MLOperand MLGraphBuilder_floor0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `floor` method. 
*/
MLOperand MLGraphBuilder_floor1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `identity` method. 
*/
MLOperand MLGraphBuilder_identity0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `identity` method. 
*/
MLOperand MLGraphBuilder_identity1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `log` method. 
*/
MLOperand MLGraphBuilder_log0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `log` method. 
*/
MLOperand MLGraphBuilder_log1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `neg` method. 
*/
MLOperand MLGraphBuilder_neg0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `neg` method. 
*/
MLOperand MLGraphBuilder_neg1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `reciprocal` method. 
*/
MLOperand MLGraphBuilder_reciprocal0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reciprocal` method. 
*/
MLOperand MLGraphBuilder_reciprocal1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `roundEven` method. 
*/
MLOperand MLGraphBuilder_roundEven0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `roundEven` method. 
*/
MLOperand MLGraphBuilder_roundEven1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `sin` method. 
*/
MLOperand MLGraphBuilder_sin0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `sin` method. 
*/
MLOperand MLGraphBuilder_sin1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `sign` method. 
*/
MLOperand MLGraphBuilder_sign0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `sign` method. 
*/
MLOperand MLGraphBuilder_sign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `sqrt` method. 
*/
MLOperand MLGraphBuilder_sqrt0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `sqrt` method. 
*/
MLOperand MLGraphBuilder_sqrt1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `tan` method. 
*/
MLOperand MLGraphBuilder_tan0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `tan` method. 
*/
MLOperand MLGraphBuilder_tan1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `dequantizeLinear` method. 
*/
MLOperand MLGraphBuilder_dequantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint);

/**
 * @brief Calls the `dequantizeLinear` method. 
*/
MLOperand MLGraphBuilder_dequantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options);

/**
 * @brief Calls the `quantizeLinear` method. 
*/
MLOperand MLGraphBuilder_quantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint);

/**
 * @brief Calls the `quantizeLinear` method. 
*/
MLOperand MLGraphBuilder_quantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options);

/**
 * @brief Calls the `elu` method. 
*/
MLOperand MLGraphBuilder_elu0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `elu` method. 
*/
MLOperand MLGraphBuilder_elu1(MLGraphBuilder* self , MLOperand * input, MLEluOptions * options);

/**
 * @brief Calls the `expand` method. 
*/
MLOperand MLGraphBuilder_expand0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape);

/**
 * @brief Calls the `expand` method. 
*/
MLOperand MLGraphBuilder_expand1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options);

/**
 * @brief Calls the `gather` method. 
*/
MLOperand MLGraphBuilder_gather0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

/**
 * @brief Calls the `gather` method. 
*/
MLOperand MLGraphBuilder_gather1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options);

/**
 * @brief Calls the `gatherElements` method. 
*/
MLOperand MLGraphBuilder_gatherElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

/**
 * @brief Calls the `gatherElements` method. 
*/
MLOperand MLGraphBuilder_gatherElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options);

/**
 * @brief Calls the `gatherND` method. 
*/
MLOperand MLGraphBuilder_gatherND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

/**
 * @brief Calls the `gatherND` method. 
*/
MLOperand MLGraphBuilder_gatherND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperatorOptions * options);

/**
 * @brief Calls the `gelu` method. 
*/
MLOperand MLGraphBuilder_gelu0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `gelu` method. 
*/
MLOperand MLGraphBuilder_gelu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `gemm` method. 
*/
MLOperand MLGraphBuilder_gemm0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `gemm` method. 
*/
MLOperand MLGraphBuilder_gemm1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLGemmOptions * options);

/**
 * @brief Calls the `gru` method. 
*/
jb_Array MLGraphBuilder_gru0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize);

/**
 * @brief Calls the `gru` method. 
*/
jb_Array MLGraphBuilder_gru1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLGruOptions * options);

/**
 * @brief Calls the `gruCell` method. 
*/
MLOperand MLGraphBuilder_gruCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize);

/**
 * @brief Calls the `gruCell` method. 
*/
MLOperand MLGraphBuilder_gruCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize, MLGruCellOptions * options);

/**
 * @brief Calls the `hardSigmoid` method. 
*/
MLOperand MLGraphBuilder_hardSigmoid0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `hardSigmoid` method. 
*/
MLOperand MLGraphBuilder_hardSigmoid1(MLGraphBuilder* self , MLOperand * input, MLHardSigmoidOptions * options);

/**
 * @brief Calls the `hardSwish` method. 
*/
MLOperand MLGraphBuilder_hardSwish0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `hardSwish` method. 
*/
MLOperand MLGraphBuilder_hardSwish1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `instanceNormalization` method. 
*/
MLOperand MLGraphBuilder_instanceNormalization0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `instanceNormalization` method. 
*/
MLOperand MLGraphBuilder_instanceNormalization1(MLGraphBuilder* self , MLOperand * input, MLInstanceNormalizationOptions * options);

/**
 * @brief Calls the `layerNormalization` method. 
*/
MLOperand MLGraphBuilder_layerNormalization0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `layerNormalization` method. 
*/
MLOperand MLGraphBuilder_layerNormalization1(MLGraphBuilder* self , MLOperand * input, MLLayerNormalizationOptions * options);

/**
 * @brief Calls the `leakyRelu` method. 
*/
MLOperand MLGraphBuilder_leakyRelu0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `leakyRelu` method. 
*/
MLOperand MLGraphBuilder_leakyRelu1(MLGraphBuilder* self , MLOperand * input, MLLeakyReluOptions * options);

/**
 * @brief Calls the `linear` method. 
*/
MLOperand MLGraphBuilder_linear0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `linear` method. 
*/
MLOperand MLGraphBuilder_linear1(MLGraphBuilder* self , MLOperand * input, MLLinearOptions * options);

/**
 * @brief Calls the `lstm` method. 
*/
jb_Array MLGraphBuilder_lstm0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize);

/**
 * @brief Calls the `lstm` method. 
*/
jb_Array MLGraphBuilder_lstm1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLLstmOptions * options);

/**
 * @brief Calls the `lstmCell` method. 
*/
jb_Array MLGraphBuilder_lstmCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize);

/**
 * @brief Calls the `lstmCell` method. 
*/
jb_Array MLGraphBuilder_lstmCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize, MLLstmCellOptions * options);

/**
 * @brief Calls the `matmul` method. 
*/
MLOperand MLGraphBuilder_matmul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

/**
 * @brief Calls the `matmul` method. 
*/
MLOperand MLGraphBuilder_matmul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

/**
 * @brief Calls the `pad` method. 
*/
MLOperand MLGraphBuilder_pad0(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding);

/**
 * @brief Calls the `pad` method. 
*/
MLOperand MLGraphBuilder_pad1(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding, MLPadOptions * options);

/**
 * @brief Calls the `averagePool2d` method. 
*/
MLOperand MLGraphBuilder_averagePool2d0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `averagePool2d` method. 
*/
MLOperand MLGraphBuilder_averagePool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

/**
 * @brief Calls the `l2Pool2d` method. 
*/
MLOperand MLGraphBuilder_l2Pool2d0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `l2Pool2d` method. 
*/
MLOperand MLGraphBuilder_l2Pool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

/**
 * @brief Calls the `maxPool2d` method. 
*/
MLOperand MLGraphBuilder_maxPool2d0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `maxPool2d` method. 
*/
MLOperand MLGraphBuilder_maxPool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

/**
 * @brief Calls the `prelu` method. 
*/
MLOperand MLGraphBuilder_prelu0(MLGraphBuilder* self , MLOperand * input, MLOperand * slope);

/**
 * @brief Calls the `prelu` method. 
*/
MLOperand MLGraphBuilder_prelu1(MLGraphBuilder* self , MLOperand * input, MLOperand * slope, MLOperatorOptions * options);

/**
 * @brief Calls the `reduceL1` method. 
*/
MLOperand MLGraphBuilder_reduceL10(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceL1` method. 
*/
MLOperand MLGraphBuilder_reduceL11(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceL2` method. 
*/
MLOperand MLGraphBuilder_reduceL20(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceL2` method. 
*/
MLOperand MLGraphBuilder_reduceL21(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceLogSum` method. 
*/
MLOperand MLGraphBuilder_reduceLogSum0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceLogSum` method. 
*/
MLOperand MLGraphBuilder_reduceLogSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceLogSumExp` method. 
*/
MLOperand MLGraphBuilder_reduceLogSumExp0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceLogSumExp` method. 
*/
MLOperand MLGraphBuilder_reduceLogSumExp1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceMax` method. 
*/
MLOperand MLGraphBuilder_reduceMax0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceMax` method. 
*/
MLOperand MLGraphBuilder_reduceMax1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceMean` method. 
*/
MLOperand MLGraphBuilder_reduceMean0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceMean` method. 
*/
MLOperand MLGraphBuilder_reduceMean1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceMin` method. 
*/
MLOperand MLGraphBuilder_reduceMin0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceMin` method. 
*/
MLOperand MLGraphBuilder_reduceMin1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceProduct` method. 
*/
MLOperand MLGraphBuilder_reduceProduct0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceProduct` method. 
*/
MLOperand MLGraphBuilder_reduceProduct1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceSum` method. 
*/
MLOperand MLGraphBuilder_reduceSum0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceSum` method. 
*/
MLOperand MLGraphBuilder_reduceSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `reduceSumSquare` method. 
*/
MLOperand MLGraphBuilder_reduceSumSquare0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reduceSumSquare` method. 
*/
MLOperand MLGraphBuilder_reduceSumSquare1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

/**
 * @brief Calls the `relu` method. 
*/
MLOperand MLGraphBuilder_relu0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `relu` method. 
*/
MLOperand MLGraphBuilder_relu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `resample2d` method. 
*/
MLOperand MLGraphBuilder_resample2d0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `resample2d` method. 
*/
MLOperand MLGraphBuilder_resample2d1(MLGraphBuilder* self , MLOperand * input, MLResample2dOptions * options);

/**
 * @brief Calls the `reshape` method. 
*/
MLOperand MLGraphBuilder_reshape0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape);

/**
 * @brief Calls the `reshape` method. 
*/
MLOperand MLGraphBuilder_reshape1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options);

/**
 * @brief Calls the `reverse` method. 
*/
MLOperand MLGraphBuilder_reverse0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `reverse` method. 
*/
MLOperand MLGraphBuilder_reverse1(MLGraphBuilder* self , MLOperand * input, MLReverseOptions * options);

/**
 * @brief Calls the `scatterElements` method. 
*/
MLOperand MLGraphBuilder_scatterElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates);

/**
 * @brief Calls the `scatterElements` method. 
*/
MLOperand MLGraphBuilder_scatterElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLScatterOptions * options);

/**
 * @brief Calls the `scatterND` method. 
*/
MLOperand MLGraphBuilder_scatterND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates);

/**
 * @brief Calls the `scatterND` method. 
*/
MLOperand MLGraphBuilder_scatterND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLOperatorOptions * options);

/**
 * @brief Calls the `sigmoid` method. 
*/
MLOperand MLGraphBuilder_sigmoid0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `sigmoid` method. 
*/
MLOperand MLGraphBuilder_sigmoid1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `slice` method. 
*/
MLOperand MLGraphBuilder_slice0(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes);

/**
 * @brief Calls the `slice` method. 
*/
MLOperand MLGraphBuilder_slice1(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes, MLSliceOptions * options);

/**
 * @brief Calls the `softmax` method. 
*/
MLOperand MLGraphBuilder_softmax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

/**
 * @brief Calls the `softmax` method. 
*/
MLOperand MLGraphBuilder_softmax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLOperatorOptions * options);

/**
 * @brief Calls the `softplus` method. 
*/
MLOperand MLGraphBuilder_softplus0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `softplus` method. 
*/
MLOperand MLGraphBuilder_softplus1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `softsign` method. 
*/
MLOperand MLGraphBuilder_softsign0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `softsign` method. 
*/
MLOperand MLGraphBuilder_softsign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `split` method. 
*/
jb_Array MLGraphBuilder_split0(MLGraphBuilder* self , MLOperand * input, jb_Any * splits);

/**
 * @brief Calls the `split` method. 
*/
jb_Array MLGraphBuilder_split1(MLGraphBuilder* self , MLOperand * input, jb_Any * splits, MLSplitOptions * options);

/**
 * @brief Calls the `tanh` method. 
*/
MLOperand MLGraphBuilder_tanh0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `tanh` method. 
*/
MLOperand MLGraphBuilder_tanh1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

/**
 * @brief Calls the `tile` method. 
*/
MLOperand MLGraphBuilder_tile0(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions);

/**
 * @brief Calls the `tile` method. 
*/
MLOperand MLGraphBuilder_tile1(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions, MLOperatorOptions * options);

/**
 * @brief Calls the `transpose` method. 
*/
MLOperand MLGraphBuilder_transpose0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `transpose` method. 
*/
MLOperand MLGraphBuilder_transpose1(MLGraphBuilder* self , MLOperand * input, MLTransposeOptions * options);

/**
 * @brief Calls the `triangular` method. 
*/
MLOperand MLGraphBuilder_triangular0(MLGraphBuilder* self , MLOperand * input);

/**
 * @brief Calls the `triangular` method. 
*/
MLOperand MLGraphBuilder_triangular1(MLGraphBuilder* self , MLOperand * input, MLTriangularOptions * options);

/**
 * @brief Calls the `where` method. 
*/
MLOperand MLGraphBuilder_where0(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue);

/**
 * @brief Calls the `where` method. 
*/
MLOperand MLGraphBuilder_where1(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue, MLOperatorOptions * options);

#ifdef __cplusplus
}
#endif
