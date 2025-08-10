#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUColorDict, em_Val);

double GPUColorDict_r(const GPUColorDict *self);

void GPUColorDict_set_r(GPUColorDict* self, double value);

double GPUColorDict_g(const GPUColorDict *self);

void GPUColorDict_set_g(GPUColorDict* self, double value);

double GPUColorDict_b(const GPUColorDict *self);

void GPUColorDict_set_b(GPUColorDict* self, double value);

double GPUColorDict_a(const GPUColorDict *self);

void GPUColorDict_set_a(GPUColorDict* self, double value);

GPUColorDict GPUColorDict_new();

#ifdef __cplusplus
}
#endif
