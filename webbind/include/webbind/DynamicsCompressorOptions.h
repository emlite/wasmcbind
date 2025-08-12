#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DynamicsCompressorOptions */
DECLARE_EMLITE_TYPE(DynamicsCompressorOptions, AudioNodeOptions);

/** @brief Getter of the attack property */
float DynamicsCompressorOptions_attack(const DynamicsCompressorOptions *self);

/** @brief Setter of the attack property */
void DynamicsCompressorOptions_set_attack(DynamicsCompressorOptions* self, float value);

/** @brief Getter of the knee property */
float DynamicsCompressorOptions_knee(const DynamicsCompressorOptions *self);

/** @brief Setter of the knee property */
void DynamicsCompressorOptions_set_knee(DynamicsCompressorOptions* self, float value);

/** @brief Getter of the ratio property */
float DynamicsCompressorOptions_ratio(const DynamicsCompressorOptions *self);

/** @brief Setter of the ratio property */
void DynamicsCompressorOptions_set_ratio(DynamicsCompressorOptions* self, float value);

/** @brief Getter of the release property */
float DynamicsCompressorOptions_release(const DynamicsCompressorOptions *self);

/** @brief Setter of the release property */
void DynamicsCompressorOptions_set_release(DynamicsCompressorOptions* self, float value);

/** @brief Getter of the threshold property */
float DynamicsCompressorOptions_threshold(const DynamicsCompressorOptions *self);

/** @brief Setter of the threshold property */
void DynamicsCompressorOptions_set_threshold(DynamicsCompressorOptions* self, float value);

/** @brief Constructor of the DynamicsCompressorOptions dictionary type */
DynamicsCompressorOptions DynamicsCompressorOptions_new();

#ifdef __cplusplus
}
#endif
