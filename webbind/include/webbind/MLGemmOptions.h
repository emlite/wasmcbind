#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLGemmOptions */
DECLARE_EMLITE_TYPE(MLGemmOptions, MLOperatorOptions);

/** @brief Getter of the c property */
MLOperand MLGemmOptions_c(const MLGemmOptions *self);

/** @brief Setter of the c property */
void MLGemmOptions_set_c(MLGemmOptions* self, MLOperand * value);

/** @brief Getter of the alpha property */
double MLGemmOptions_alpha(const MLGemmOptions *self);

/** @brief Setter of the alpha property */
void MLGemmOptions_set_alpha(MLGemmOptions* self, double value);

/** @brief Getter of the beta property */
double MLGemmOptions_beta(const MLGemmOptions *self);

/** @brief Setter of the beta property */
void MLGemmOptions_set_beta(MLGemmOptions* self, double value);

/** @brief Getter of the aTranspose property */
bool MLGemmOptions_aTranspose(const MLGemmOptions *self);

/** @brief Setter of the aTranspose property */
void MLGemmOptions_set_aTranspose(MLGemmOptions* self, bool value);

/** @brief Getter of the bTranspose property */
bool MLGemmOptions_bTranspose(const MLGemmOptions *self);

/** @brief Setter of the bTranspose property */
void MLGemmOptions_set_bTranspose(MLGemmOptions* self, bool value);

/** @brief Constructor of the MLGemmOptions dictionary type */
MLGemmOptions MLGemmOptions_new();

#ifdef __cplusplus
}
#endif
