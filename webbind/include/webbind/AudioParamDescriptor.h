#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioParamDescriptor, em_Val);

jb_String AudioParamDescriptor_name(const AudioParamDescriptor *self);

void AudioParamDescriptor_set_name(AudioParamDescriptor* self, jb_String * value);

float AudioParamDescriptor_defaultValue(const AudioParamDescriptor *self);

void AudioParamDescriptor_set_defaultValue(AudioParamDescriptor* self, float value);

float AudioParamDescriptor_minValue(const AudioParamDescriptor *self);

void AudioParamDescriptor_set_minValue(AudioParamDescriptor* self, float value);

float AudioParamDescriptor_maxValue(const AudioParamDescriptor *self);

void AudioParamDescriptor_set_maxValue(AudioParamDescriptor* self, float value);

AutomationRate AudioParamDescriptor_automationRate(const AudioParamDescriptor *self);

void AudioParamDescriptor_set_automationRate(AudioParamDescriptor* self, AutomationRate * value);

AudioParamDescriptor AudioParamDescriptor_new();

#ifdef __cplusplus
}
#endif
