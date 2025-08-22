#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUColorDict */
DECLARE_EMLITE_TYPE(GPUColorDict, em_Val);

/** @brief Getter of the r property */
double GPUColorDict_r(const GPUColorDict *self);

/** @brief Setter of the r property */
void GPUColorDict_set_r(GPUColorDict* self, double value);

/** @brief Getter of the g property */
double GPUColorDict_g(const GPUColorDict *self);

/** @brief Setter of the g property */
void GPUColorDict_set_g(GPUColorDict* self, double value);

/** @brief Getter of the b property */
double GPUColorDict_b(const GPUColorDict *self);

/** @brief Setter of the b property */
void GPUColorDict_set_b(GPUColorDict* self, double value);

/** @brief Getter of the a property */
double GPUColorDict_a(const GPUColorDict *self);

/** @brief Setter of the a property */
void GPUColorDict_set_a(GPUColorDict* self, double value);

/** @brief Constructor of the GPUColorDict dictionary type */
GPUColorDict GPUColorDict_new();

#ifdef __cplusplus
}
#endif
