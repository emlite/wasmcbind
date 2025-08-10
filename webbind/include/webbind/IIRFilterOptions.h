#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IIRFilterOptions, AudioNodeOptions);

jb_Array IIRFilterOptions_feedforward(const IIRFilterOptions *self);

void IIRFilterOptions_set_feedforward(IIRFilterOptions* self, jb_Array * value);

jb_Array IIRFilterOptions_feedback(const IIRFilterOptions *self);

void IIRFilterOptions_set_feedback(IIRFilterOptions* self, jb_Array * value);

IIRFilterOptions IIRFilterOptions_new();

#ifdef __cplusplus
}
#endif
