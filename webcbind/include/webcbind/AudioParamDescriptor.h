#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioParamDescriptor */
DECLARE_EMLITE_TYPE(AudioParamDescriptor, em_Val);

/** @brief Getter of the name property */
jb_String AudioParamDescriptor_name(const AudioParamDescriptor *self);

/** @brief Setter of the name property */
void AudioParamDescriptor_set_name(AudioParamDescriptor* self, jb_String * value);

/** @brief Getter of the defaultValue property */
float AudioParamDescriptor_defaultValue(const AudioParamDescriptor *self);

/** @brief Setter of the defaultValue property */
void AudioParamDescriptor_set_defaultValue(AudioParamDescriptor* self, float value);

/** @brief Getter of the minValue property */
float AudioParamDescriptor_minValue(const AudioParamDescriptor *self);

/** @brief Setter of the minValue property */
void AudioParamDescriptor_set_minValue(AudioParamDescriptor* self, float value);

/** @brief Getter of the maxValue property */
float AudioParamDescriptor_maxValue(const AudioParamDescriptor *self);

/** @brief Setter of the maxValue property */
void AudioParamDescriptor_set_maxValue(AudioParamDescriptor* self, float value);

/** @brief Getter of the automationRate property */
AutomationRate AudioParamDescriptor_automationRate(const AudioParamDescriptor *self);

/** @brief Setter of the automationRate property */
void AudioParamDescriptor_set_automationRate(AudioParamDescriptor* self, AutomationRate * value);

/** @brief Constructor of the AudioParamDescriptor dictionary type */
AudioParamDescriptor AudioParamDescriptor_new();

#ifdef __cplusplus
}
#endif
