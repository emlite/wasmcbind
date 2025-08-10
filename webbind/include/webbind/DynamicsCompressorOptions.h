#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DynamicsCompressorOptions, AudioNodeOptions);

float DynamicsCompressorOptions_attack(const DynamicsCompressorOptions *self);

void DynamicsCompressorOptions_set_attack(DynamicsCompressorOptions* self, float value);

float DynamicsCompressorOptions_knee(const DynamicsCompressorOptions *self);

void DynamicsCompressorOptions_set_knee(DynamicsCompressorOptions* self, float value);

float DynamicsCompressorOptions_ratio(const DynamicsCompressorOptions *self);

void DynamicsCompressorOptions_set_ratio(DynamicsCompressorOptions* self, float value);

float DynamicsCompressorOptions_release(const DynamicsCompressorOptions *self);

void DynamicsCompressorOptions_set_release(DynamicsCompressorOptions* self, float value);

float DynamicsCompressorOptions_threshold(const DynamicsCompressorOptions *self);

void DynamicsCompressorOptions_set_threshold(DynamicsCompressorOptions* self, float value);

DynamicsCompressorOptions DynamicsCompressorOptions_new();

#ifdef __cplusplus
}
#endif
