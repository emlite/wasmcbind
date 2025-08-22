#include <webcbind/MLGraphBuilder.h>

#include <webcbind/MLContext.h>
#include <webcbind/MLOperand.h>
#include <webcbind/MLOperandDescriptor.h>
#include <webcbind/MLTensor.h>
#include <webcbind/MLGraph.h>
#include <webcbind/MLArgMinMaxOptions.h>
#include <webcbind/MLBatchNormalizationOptions.h>
#include <webcbind/MLOperatorOptions.h>
#include <webcbind/MLClampOptions.h>
#include <webcbind/MLConv2dOptions.h>
#include <webcbind/MLConvTranspose2dOptions.h>
#include <webcbind/MLCumulativeSumOptions.h>
#include <webcbind/MLEluOptions.h>
#include <webcbind/MLGatherOptions.h>
#include <webcbind/MLGemmOptions.h>
#include <webcbind/MLGruOptions.h>
#include <webcbind/MLGruCellOptions.h>
#include <webcbind/MLHardSigmoidOptions.h>
#include <webcbind/MLInstanceNormalizationOptions.h>
#include <webcbind/MLLayerNormalizationOptions.h>
#include <webcbind/MLLeakyReluOptions.h>
#include <webcbind/MLLinearOptions.h>
#include <webcbind/MLLstmOptions.h>
#include <webcbind/MLLstmCellOptions.h>
#include <webcbind/MLPadOptions.h>
#include <webcbind/MLPool2dOptions.h>
#include <webcbind/MLReduceOptions.h>
#include <webcbind/MLResample2dOptions.h>
#include <webcbind/MLReverseOptions.h>
#include <webcbind/MLScatterOptions.h>
#include <webcbind/MLSliceOptions.h>
#include <webcbind/MLSplitOptions.h>
#include <webcbind/MLTransposeOptions.h>
#include <webcbind/MLTriangularOptions.h>

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


MLOperand MLGraphBuilder_roundEven0(MLGraphBuilder* self , MLOperand * input) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "roundEven", em_Val_from(input)));
}


MLOperand MLGraphBuilder_roundEven1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options) {
    return em_Val_as(MLOperand, em_Val_call(em_Val_as_val(self->inner), "roundEven", em_Val_from(input), em_Val_from(options)));
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

