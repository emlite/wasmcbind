#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLGemmOptions, MLOperatorOptions);

MLOperand MLGemmOptions_c(const MLGemmOptions *self);

void MLGemmOptions_set_c(MLGemmOptions* self, MLOperand * value);

double MLGemmOptions_alpha(const MLGemmOptions *self);

void MLGemmOptions_set_alpha(MLGemmOptions* self, double value);

double MLGemmOptions_beta(const MLGemmOptions *self);

void MLGemmOptions_set_beta(MLGemmOptions* self, double value);

bool MLGemmOptions_aTranspose(const MLGemmOptions *self);

void MLGemmOptions_set_aTranspose(MLGemmOptions* self, bool value);

bool MLGemmOptions_bTranspose(const MLGemmOptions *self);

void MLGemmOptions_set_bTranspose(MLGemmOptions* self, bool value);

MLGemmOptions MLGemmOptions_new();

#ifdef __cplusplus
}
#endif
