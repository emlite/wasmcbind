#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MLContext.h"
#include "enums.h"

typedef struct wb_MLOperand wb_MLOperand;
typedef struct wb_MLTensor wb_MLTensor;
typedef struct wb_MLGraph wb_MLGraph;
typedef struct wb_MLArgMinMaxOptions wb_MLArgMinMaxOptions;
typedef struct wb_MLBatchNormalizationOptions wb_MLBatchNormalizationOptions;
typedef struct wb_MLOperatorOptions wb_MLOperatorOptions;
typedef struct wb_MLClampOptions wb_MLClampOptions;
class MLConv2dOptions;
class MLConvTranspose2dOptions;
typedef struct wb_MLCumulativeSumOptions wb_MLCumulativeSumOptions;
typedef struct wb_MLEluOptions wb_MLEluOptions;
typedef struct wb_MLGatherOptions wb_MLGatherOptions;
typedef struct wb_MLGemmOptions wb_MLGemmOptions;
typedef struct wb_MLGruOptions wb_MLGruOptions;
typedef struct wb_MLGruCellOptions wb_MLGruCellOptions;
typedef struct wb_MLHardSigmoidOptions wb_MLHardSigmoidOptions;
typedef struct wb_MLInstanceNormalizationOptions wb_MLInstanceNormalizationOptions;
typedef struct wb_MLLayerNormalizationOptions wb_MLLayerNormalizationOptions;
typedef struct wb_MLLeakyReluOptions wb_MLLeakyReluOptions;
typedef struct wb_MLLinearOptions wb_MLLinearOptions;
typedef struct wb_MLLstmOptions wb_MLLstmOptions;
typedef struct wb_MLLstmCellOptions wb_MLLstmCellOptions;
typedef struct wb_MLPadOptions wb_MLPadOptions;
class MLPool2dOptions;
typedef struct wb_MLReduceOptions wb_MLReduceOptions;
class MLResample2dOptions;
typedef struct wb_MLReverseOptions wb_MLReverseOptions;
typedef struct wb_MLScatterOptions wb_MLScatterOptions;
typedef struct wb_MLSliceOptions wb_MLSliceOptions;
typedef struct wb_MLSplitOptions wb_MLSplitOptions;
typedef struct wb_MLTransposeOptions wb_MLTransposeOptions;
typedef struct wb_MLTriangularOptions wb_MLTriangularOptions;
